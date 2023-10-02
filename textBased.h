#ifndef TEXTBASED_H
#define TEXTBASED_H

#include <iostream>
#include "Farm.h"


class textBased {
private:
    Farm* farm;
    Land* land;
    std::string title;

public:
    // Constructor with a title parameter
    textBased(const std::string& title) : title(title) {
        // declaring all the game entiies
        farm = new Farm("Team 40's Farm", 10);
        land = new Land(true, true);
        

    }
    // Function to display the menu
    void displayMenu() {
        std::cout << "-----------------------------\n";
        std::cout << "      " << title << "      \n";
        std::cout << "-----------------------------\n";
        std::cout << "What would you like to do?\n";
        std::cout << "1. Shop Produce\n";
        std::cout << "2. Buy Upgrades or Lands(Current number of land: " << farm -> getCurrentLand()<<  ")\n";
        std::cout << "3. Sell/Harvest Animals/Crops\n";
    }

    // Function to get user choice
    int getUserChoice() {
        int choice;
        std::cout << "Enter your choice (1-3): ";
        std::cin >> choice;
        return choice;
    }

    // Function to execute the chosen action
    void executeAction(int choice){
        switch (choice) {
            case 1:
                std::cout << "You chose to Shop Produce.\n";
                // Add code for shopping produce
                break;

            case 2:
                std::cout << "You chose to Buy Upgrades or Lands.\n";
                // Add code for buying upgrades or lands
                farm -> buyNewLand();
                
                break;

            case 3:
                std::cout << "You chose to Sell/Harvest Animals/Crops.\n";
                // Add code for selling/harvesting animals/crops
                break;

            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 3.\n";
                exit(0);
        }
    }

    // Function to start the game loop
    void startGame() {
        while (1) {
            displayMenu();         // Display the menu
            int choice = getUserChoice();  // Get user choice
            executeAction(choice); // Execute the chosen action
        }
    }

    ~textBased(){
        delete farm;
        delete land;
    }

};



#endif