main-1:main-1.cpp
	@g++ -Wall -Wextra main-1.cpp -o main
	@./main

main-2: main-2.cpp
	@g++ -Wall -Wextra main-2.cpp -o main-21
	@./main-21

main-3: main-3.cpp
	@g++ main-3.cpp -o main3
	@./main3

test-1: test1.cpp
	@g++ test1.cpp -o test1
	@./test1

test-2: test2.cpp
	@g++ test2.cpp -o test2
	@./test2

test-3: test3.cpp
	@g++ test3.cpp -o test3
	@./test3


clean-1:
	@rm -rf main

clean-2:
	@rm -rf main-21

clean-3:
	@rm -rf main3