#include<iostream>

using namespace std;

int multi (int a, int b){
   return a*b;
   
}

int main (){
    int num1;
     int num2;

    cout << "primer numero a multiplicar" << endl; 
    cin>> num1;
    cout << "segundo numero a multiplicar" << endl; 
    cin >> num2;
    
    cout << "el resultado de la multiplicacion es:" << multi (num1,num2) << endl; 
    return 0;
}