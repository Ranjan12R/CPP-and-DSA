#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to drive";
    }
    else{
        cout<<"You are underage now, 'Don't Drive '";
    }
    return 0;
}