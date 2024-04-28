
CC = g++

main: main.o zooClass.o animalClass.o dogClass.o catClass.o lionClass.o dolphinClass.o bearClass.o allIncludes.o
	$(CC) -o main main.o zooClass.o animalClass.o dogClass.o catClass.o lionClass.o dolphinClass.o bearClass.o allIncludes.o

main.o: main.cpp allIncludes.hpp 
	$(CC) -c main.cpp

allIncludes.o :	allIncludes.hpp
	$(CC) -c allIncludes.cpp	

zooClass.o: zooClass.cpp zooClass.hpp animalClass.hpp
	$(CC) -c zooClass.cpp

animalClass.o: animalClass.cpp animalClass.hpp
	$(CC) -c animalClass.cpp

dogClass.o: dogClass.cpp dogClass.hpp animalClass.hpp
	$(CC) -c dogClass.cpp

catClass.o: catClass.cpp catClass.hpp animalClass.hpp
	$(CC) -c catClass.cpp

lionClass.o: lionClass.cpp lionClass.hpp animalClass.hpp
	$(CC) -c lionClass.cpp

dolphinClass.o: dolphinClass.cpp dolphinClass.hpp animalClass.hpp
	$(CC) -c dolphinClass.cpp

bearClass.o: bearClass.cpp bearClass.hpp animalClass.hpp
	$(CC) -c bearClass.cpp

clean:
	rm -f main main.o zooClass.o animalClass.o dogClass.o catClass.o lionClass.o dolphinClass.o bearClass.o allIncludes.o *.d