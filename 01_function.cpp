#include<iostream>
using namespace std;

// Create a function
void myfunction(){
    cout<< " it is go execute." << endl;
}

// main function
int main(){
    myfunction();
    myfunction();
    myfunction();
    return 0;
}

// Note: A function can be called multiple times.
// A C++ function consist of two parts:  
// (A) Declaration : the return type, the name of the function, and parameters (if any)
// (B) Defination :  the body of the function (code to be executed).


/*
void myfunction(){
    // Declaration
    // Defination (the body of the function)
}
 */


int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;


    cout << "result: " << sum(num1, num2) << endl;
}