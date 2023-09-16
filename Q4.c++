#include<iostream>
using namespace std;

void main(){
    int a = 4;
    int b = 5;
    a++; b--;
    cout << ++a << " " << b--; 
}

// OUTPUT -   show error due to void, because output of the main function should be integer 6 4

                