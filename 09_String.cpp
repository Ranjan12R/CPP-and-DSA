#include<iostream>
using namespace std;
int main(){
    string s= "Jiya";
    cout<< s[0]<< "\n";
    cout<< s[1]<< "\n";
    cout<< s[2]<< "\n";
    cout<< s[3]<< "\n";
    int len = s.size();
    cout<<len<<"\n";
    cout<<len-1<<"\n";
    cout<<s[len-1]<<"\n";

    return 0;

}