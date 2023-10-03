main-1: main.cpp
	@g++ main.cpp Farm.cpp Land.cpp oopGame.cpp Produce.cpp Crops.cpp -lsfml-graphics -lsfml-window -lsfml-system -o main
	@./main

clean:
	@rm -rf main