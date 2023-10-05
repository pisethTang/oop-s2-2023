main-text: main.cpp
	@g++ main.cpp Farm.cpp Land.cpp oopGame.cpp Produce.cpp Crops.cpp -o main1
	@./main1


main-graphics: main.cpp
	@g++ main.cpp Farm.cpp Land.cpp oopGame.cpp Produce.cpp Crops.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -o main2
	@./main2


clean-1:
	@rm -rf main1

clean-2:
	@rm -rf main2
