#Variables
VERSION = -std=c++11
REQUIREMENTS = Utils.o Date.o Time.o Diary.o App.o main.o

run: $(REQUIREMENTS)
	g++ $(VERSION) $(REQUIREMENTS) -o run

App.o: src/App.cpp
	g++ $(VERSION) -c src/App.cpp

Date.o: src/Date.cpp
	g++ $(VERSION) -c src/Date.cpp

Diary.o: src/Diary.cpp
	g++ $(VERSION) -c src/Diary.cpp

Time.o: src/Time.cpp
	g++ $(VERSION) -c src/Time.cpp

Utils.o: src/Time.cpp
	g++ $(VERSION) -c src/Utils.cpp

main.o: src/main.cpp
	g++ $(VERSION) -c src/main.cpp
