PROGRAMA = run
REQUISITOS = main.o Empresa.o Funcionario.o
COMPILADOR = g++ -I includes -Wall -std=c++11

$(PROGRAMA): $(REQUISITOS)
	$(COMPILADOR) $(REQUISITOS) -o $(PROGRAMA)

main.o: src/main.cpp
	$(COMPILADOR) -c src/main.cpp

Empresa.o: src/Empresa.cpp
	$(COMPILADOR) -c src/Empresa.cpp

Funcionario.o: src/Funcionario.cpp
	$(COMPILADOR) -c src/Funcionario.cpp

clean:
	rm *.o
