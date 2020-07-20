PROGRAM = conta
DEPENDENCIES = main.o Conta.o Cliente.o ClientePF.o ClientePJ.o Agencia.o Funcionario.o Gerente.o Caixa.o Seguranca.o
FLAGS = -std=c++11 -Wall

$(PROGRAM): $(DEPENDENCIES)
	g++ $(FLAGS) $(DEPENDENCIES) -o $(PROGRAM)

main.o: src/main.cpp
	g++ $(FLAGS) -c src/main.cpp

Conta.o: src/Conta.cpp
	g++ $(FLAGS) -c src/Conta.cpp

ClientePF.o: src/ClientePF.cpp
	g++ $(FLAGS) -c src/ClientePF.cpp

ClientePJ.o: src/ClientePJ.cpp
	g++ $(FLAGS) -c src/ClientePJ.cpp

Cliente.o: src/Cliente.cpp
	g++ $(FLAGS) -c src/Cliente.cpp

Agencia.o: src/Agencia.cpp
	g++ $(FLAGS) -c src/Agencia.cpp

Funcionario.o: src/Funcionario.cpp
	g++ $(FLAGS) -c src/Funcionario.cpp

Gerente.o: src/Gerente.cpp
	g++ $(FLAGS) -c src/Gerente.cpp

Caixa.o: src/Caixa.cpp
	g++ $(FLAGS) -c src/Caixa.cpp

Seguranca.o: src/Seguranca.cpp
	g++ $(FLAGS) -c src/Seguranca.cpp

clean:
	rm *.o
