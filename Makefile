main-1:main-1.cpp
	@g++ -Wall -Wextra main-1.cpp -o main
	@./main

main-2: main-2.cpp
	@g++ -Wall -Wextra main-2.cpp -o main-21
	@./main-21




clean-1:
	@rm -rf main

clean-2:
	@rm -rf main-21