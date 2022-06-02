
# Compilador
CC = gcc


# Padrão da linguagem
STD = -std=c99 -Wall

# Flags para o compilador
CC_FLAGS = -c -Wpedantic -Wno-unused-result -O0 -g

# Flags para bibliotecas
LIBRARIES = 
INCLUDES = ./includes


# Arquivos .c
C_SRC = $(wildcard ./src/*.c ./libs/*.c)

# Arquivos .h
H_SRC = $(wildcard $(INCLUDES)/*.h)

# Arquivos objeto
OBJ := $(patsubst %.c,./objs/%.o,$(notdir $(C_SRC)))


# Nome do binário
binary = main


all: show objdir bindir $(binary)

$(binary): $(OBJ) $(objdir)
	@echo "Compilando o alvo principal: $@"
	$(CC) $(STD) $^ -o ./bin/$@ $(LIBRARIES) -I. -I$(INCLUDES)
	@echo

clean:
	@echo "Limpando projeto..."
	@-rm -rf ./objs
	@-rm -rf ./bin
	@echo "Projeto limpo"
	@echo

show:
	@echo "C source files: $(C_SRC)"
	@echo "Header files: $(H_SRC)"
	@echo "Object files: $(OBJ)"
	@echo

objdir:
	@mkdir -p ./objs

bindir:
	@mkdir -p ./bin

./objs/main.o: ./src/main.c $(H_SRC)
	@echo 'Compilando o alvo para: $<'
	$(CC) $< $(STD) $(CC_FLAGS) -I. -I$(INCLUDES) -o $@
	@echo

./objs/%.o: ./libs/%.c
	@echo 'Compilando o alvo para: $<'
	$(CC) $< -fPIC $(STD) $(CC_FLAGS) -o $@
	@echo

.PHONY: all clean
