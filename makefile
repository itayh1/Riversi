# 209127596
# hassidi

a.out: Board.o main.o Game.o Player.o HumanPlayer.o Player.o
	g++ Board.o main.o Game.o Player.o HumanPlayer.o Player.o

Board.o: Board.cpp Board.h GlobalDef.h
	g++ -c Board.cpp

main.o: main.cpp Game.h
	g++ -c main.cpp

Game.o: Game.cpp Game.h GlobalDef.h
	g++ -c Game.cpp

HumanPlayer.o: HumanPlayer.cpp HumanPlayer.h GlobalDef.h
	g++ -c HumanPlayer.cpp

Player.o: Player.cpp Player.h GlobalDef.h
	g++ -c Player.cpp

clean:
	rm *.o *.out
