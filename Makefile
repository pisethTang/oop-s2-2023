main-1:main-1.cpp
	@g++ -Wall -Wextra main-1.cpp Utils.cpp GameEntity.cpp -o main
	@./main

clean-1:
	@rm -rf main