
hangman: main2.o levels.o winCheck.o Screen.o
	g++ main2.o levels.o winCheck.o Screen.o -o hangman

main2.o : main2.cpp
	g++ -c main2.cpp

levels.o: levels.cpp
	g++ -c levels.cpp

winCheck.o: winCheck.cpp
	g++ -c winCheck.cpp

Screen.o: Screen.cpp
	g++ -c Screen.cpp