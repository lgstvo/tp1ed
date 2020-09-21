
CC=g++
CFLAGS=-Wall -Wextra
EXEC=./tp1 # nome do executavel que sera gerado, nao troque
TMPOUT=tp1.testresult


$(EXEC): main.cpp fila.o pilha.o lista.o celula.o operacao.o
	$(CC) $(CFLAGS) main.cpp fila.o pilha.o lista.o celula.o operacao.o -o $(EXEC)

testing: main.cpp fila.o pilha.o lista.o celula.o
	$(CC) $(CFLAGS) test.cpp fila.o pilha.o lista.o celula.o operacao.o -o ./testing

fila.o: headers/fila.cpp
	$(CC) $(CFLAGS) -c headers/fila.cpp -o fila.o

pilha.o: headers/pilha.cpp
	$(CC) $(CFLAGS) -c headers/pilha.cpp -o pilha.o

lista.o: headers/lista.cpp
	$(CC) $(CFLAGS) -c headers/lista.cpp -o lista.o

celula.o: headers/celula.cpp
	$(CC) $(CFLAGS) -c headers/celula.cpp -o celula.o

operacao.o: headers/operacao.cpp
	$(CC) $(CFLAGS) -c headers/operacao.cpp -o operacao.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean:
	rm -rf lista.o
	rm -rf pilha.o
	rm -rf fila.o
	rm -rf celula.o
	rm -rf operacao.o

# === REGRAS =====
# ================
# 
# Aqui declaramos as nossas regras de compilacao.
# Para chamar uma regra, podemos simplesmente digitar
# 	make nome_regra
# Exs.:
# 	make ./tp1
# 	make foo.o
# 	make clean
# Cada regra de compilacao tem a seguinte sintaxe:
#
# NOME_OUTPUT: DEPENDENCIAS
# 	CMD
#
# NOME_OUTPUT eh o nome do arquivo que vai ser gerado (ou qualquer nome caso
# nenhum arquivo seja gerado, ex. clean)
# DEPENDENCIAS sao os nomes dos arquivos necessarios para executar essa regra
# de compilacao
# CMD sao os comandos necessarios para executar a regra (por exemplo, chamar o
# gcc)

# == VARIAVEIS ===
# ================
#
# Podemos declarar algumas variaveis dentro do Makefile (sintaxe similar a bash)
# Isso facilita o seu trabalho caso voce opte trocar alguma versao do
# compilador ou flag para seu processo de compilacao
# Uma variavel com nome VAR eh declarada da seguinte maneira:
# 	VAR=conteudo
# e eh chamada atraves do comando $(VAR)

# === OUTROS =====
# ================
# 
# Para mais informacoes sobre o Makefile, procure os monitores ou consulte
# outras referencias disponiveis na internet como:
# https://opensource.com/article/18/8/what-how-makefile
