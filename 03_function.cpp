#include<iostream>
using namespace std;

// inline function
inline int product(int a, int b){
    // int product = a * b;
    return a*b;
}

// Main function

int main(){
int num1, num2;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2 ;

// Claculate and print result
cout << "Result: " << product(num1, num2)  << endl;
return 0;
}