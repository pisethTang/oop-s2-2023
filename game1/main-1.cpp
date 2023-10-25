#include <iostream>
#include <thread>
#include "GameEntity.h"
#include "Utils.h"
#include <unistd.h>


std::tuple<int, int>* generateRandomPositions(int N){
    std::tuple<int, int>* A = new std::tuple<int, int>[N]; // dynamically allocate N random tuples
    int gridWidth = 25;
    int gridHeight = 30;
    for(int i=0;i<N;i++){
        // sleep(1);
        // usleep(1000000); // 2 msecs
        A[i] = Utils::generateRandomPosition(gridWidth,gridHeight);
    }
    return A;
}

void printArrayTuples(std::tuple<int, int>* const X, int M){
    std::cout << "Positions and their distance from the origin.\n";
    std::tuple<int, int> origin = {0,0};
    for(int i=0; i<M;i++){
        // print the distance between the origin and each tuple in the array
        std::cout << "d({" << std::get<0>(X[i]) << "," << std::get<1>(X[i]) << "}, {0,0}) = " << Utils::calculateDistance(X[i], origin) << std::endl; 
    }
}

int main(){
    srand(time(nullptr));
    int N = 10;
    // generate N random positions into an array
    std::tuple<int, int>* S = generateRandomPositions(N); 

    // print the tuples into the console
    printArrayTuples(S, N);
    



    delete[] S;
    return 0;
}