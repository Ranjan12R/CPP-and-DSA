// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
// pairs
void explainPair()
{
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second<<" ";
    pair<int, pair<int, int> > p = {1, {3, 4}};
    cout << p.first << " " << p.second.second << " " << p.second.first<<" ";
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;


}

int main(){
    explainPair();
}
 
