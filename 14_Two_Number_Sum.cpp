#include<iostream>
using namespace std;

int sum(int num1, int num2){
    int num3=num1+num2;
    return num3;
}
int main()
{
 
    int num1,num2;
    cin>> num1 >>num2;

    // int res= sum(num1,num2);
    // cout<<res;

    cout << sum(num1,num2) << "\n";
    cout << min(num1,num2) << "\n";
    cout << max(num1,num2) << "\n";
    return 0;
}