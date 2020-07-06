PROGRAM = conta
DEPENDENCIES = main.o Conta.o
FLAGS = -std=c++11 -Wall

$(PROGRAM): $(DEPENDENCIES)
	g++ $(FLAGS) $(DEPENDENCIES) -o $(PROGRAM)

main.o: src/main.cpp
	g++ $(FLAGS) -c src/main.cpp

Conta.o: src/Conta.cpp
	g++ $(FLAGS) -c src/Conta.cpp

clean:
	rm *.o
