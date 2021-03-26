//
//  main.cpp
//  Assignment_2
//
//  Created by Noah Honickman on 1/30/21.
//This program compiles 100! using a for-loop

#include <iostream>

using namespace std;
const int a = 101;
int main() {
    long double factorials[a];
    
    factorials[0] = factorials[1] = 1;
    
    for (int i = 2; i< a; i++){
        factorials[i] = i * factorials[i-1];
        
    }
    
    cout << "100! is " << factorials[100] << "\n";
    
    
    
}
