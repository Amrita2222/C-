#include<iostream>
using namespace std;

// Call By Reference usign pointer
void swap(int* a, int* b){
   int temp = *a;
   *a= *b;
   *b= temp;
}


int main(){
    int x=5, y=4;
    cout << "The value of X :" << x << "the value of Y: " << y << endl;
    swap(&x,&y);
    cout << "The value of X :" << x << "the value of Y: " << y << endl;
    return 0;
}