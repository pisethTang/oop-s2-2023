# SRC_DIR := /home/sething2002/oop-s2-2023/game1
# SRC_FILES : = $(SRC_DIR)/main.cpp

# CC := g++
# CFLAGS := -Wall 
# SFML_LIBS := -lsfml-graphics -lsfml-system -lsfml-window
# game1: $(SRC_FILES)
# 	@$(CC) $(CFLAGS) $^ $(SFML_LIBS)  -o game_1
# 	@./game_1

#This Makefile section takes gam1.cpp, compiles it, and make an executable called game_1
# game1: SRC_DIR
# 	@g++ SRC_DIR -lsfml-graphics -lsfml-system -lsfml-window -o game_1
# 	@./game_1
# This Makefile section takes game2.cpp, compiles it, and make an executable called game_2
game2_section: main.cpp 
	@g++ main.cpp -lsfml-graphics -lsfml-system -lsfml-window -o game_2
	@./game_2

clean:
	rm -f ./game_2
	rm -f *.o