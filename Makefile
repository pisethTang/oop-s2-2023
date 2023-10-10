main-1: main.cpp
	@g++ -std=c++17 main.cpp USBConnection.cpp -o main
	@./main

clean-1:
	@rm -rf main