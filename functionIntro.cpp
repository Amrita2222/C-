#include<iostream>
using namespace std;

int sum(int num1, int num2){
    return num1 + num2;
}

float floatSum(int num1, int num2){
    return num1 + num2;
}

/*

    1. yha jo int h wo return type h eska mtlb ye h ki value jo return hoga
    wo int type ka value hoga
    2. sum jo h function ka name h 
    3. int num1, and int num2 jo h function ka parameter h
    4. Agr mujhe float value chahiye to int ki jagah float , agr double chahiye to int
    ki jagah double, agr boolean chahiye to int ki jagah boolean
*/


/*
    Aur kuchh    kha chale gye yar tm   Thik h fir aate h 2 min me
    run hogya time lga
    are mai bathroom chali gyi thi
    multi comment kesekrte ho
*/

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Float value of two numbers: " << floatSum(num1, num2) << endl;

    cout << "Sum of the two numbers are : " << sum(num1, num2); // function call  
    return 0;
}


// return type function_name(parameter_name){
//     // body of the function
// }

