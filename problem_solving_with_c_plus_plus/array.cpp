#include<iostream>
using namespace std;

int main(){
    int s1, s2;
    s1 = 4;
    s2 = 5;
    int a[s1][s2];
    int i = 0, j = 0;
    while(i<s1){
        while(j<s2){
        cout << "Enter element: " << "a[" << i << "][" <<j<< "] = ";
        cin >> a[i][j]; 
        j++;
    }
    i++;
    }


   



    return 0;
}