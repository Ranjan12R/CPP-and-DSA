// Function are set of code which performs something for you. Function are used to modularise code. Functions are used to increase readability.
// Void function >> which doesnot return anything
//Parameterised
//Non - Parameterised


#include<iostream>
using namespace std;
void printName(string name){
    cout << "Hey Jiya" << name;
}
int main()
{
    string name;
    cin>>name;
    printName(name);

    return 0;
}