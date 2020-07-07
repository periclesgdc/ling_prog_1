PROGRAM = conta
DEPENDENCIES = main.o Conta.o Cliente.o Agencia.o
FLAGS = -std=c++11 -Wall

$(PROGRAM): $(DEPENDENCIES)
	g++ $(FLAGS) $(DEPENDENCIES) -o $(PROGRAM)

main.o: src/main.cpp
	g++ $(FLAGS) -c src/main.cpp

Conta.o: src/Conta.cpp
	g++ $(FLAGS) -c src/Conta.cpp

Cliente.o: src/Cliente.cpp
	g++ $(FLAGS) -c src/Cliente.cpp

Agencia.o: src/Agencia.cpp
	g++ $(FLAGS) -c src/Agencia.cpp

clean:
	rm *.o
