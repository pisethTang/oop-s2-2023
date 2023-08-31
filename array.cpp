#include <iostream>
using namespace std;
int* removeElement(int* arr, int size, int indexToDelete) {
    if (indexToDelete < 0 || indexToDelete >= size) {
        std::cerr << "Invalid index to delete." << std::endl;
        return arr;
    }

    int newSize = size - 1;
    int* newArr = new int[newSize];

    for (int i = 0, j = 0; i < size; ++i) {
        if (i != indexToDelete) {
            newArr[j++] = arr[i];
        }
    }

    delete[] arr;
    return newArr;
}

int main() {
    // int size = 5;
    // int* arr = new int[size];

    // for (int i = 0; i < size; ++i) {
    //     arr[i] = i * 10;
    // }

    // int indexToDelete = -1;
    // arr = removeElement(arr, size, indexToDelete);

    // int newSize = size - 1;
    // for (int i = 0; i < newSize; ++i) {
    //     std::cout << arr[i] << " ";
    // }

    // delete[] arr;
    for(int i=0;i<10;i++){
        if(i == 8) break;
        else cout << i << " ";
    }

    return 0;
}
