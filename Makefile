all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/Node.cpp -o ./lib/Node.o
	g++ -c -I "./include" ./src/FileReader.cpp -o ./lib/FileReader.o
	g++ -c -I "./include" ./src/LinkedList.cpp -o ./lib/LinkedList.o
	g++ -c -I "./include" ./src/UserInput.cpp -o ./lib/UserInput.o

	



	





bagla:
	g++ ./lib/main.o ./lib/Node.o ./lib/UserInput.o ./lib/FileReader.o ./lib/LinkedList.o -o ./bin/program

calistir:
	./bin/program