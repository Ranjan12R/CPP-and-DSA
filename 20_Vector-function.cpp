#include <iostream>
#include <vector>

using namespace std;

void explainVector() {
    vector<int> v;

    v.push_back(1); // creates a vector with one element (1)
    // v.emplace_back(2); // creates a vector with two elements (1, 2)

    // Uncomment to use reverse iterators
    // vector<int>::iterator it1 = v.end();
    vector<int>::reverse_iterator it2 = v.rend();
    // vector<int>::iterator it3 = v.rbegin();

    // Accessing elements
    cout << "Accessing elements: " << v[0] << " " << v.at(0);
    cout << " Back: " << v.back() << endl;

    // Using reverse iterators
    cout << "Using reverse iterators: ";
    // for (vector<int>::iterator it = v.rbegin(); it != v.rend(); ++it) {
    //     cout << *it << " ";
    // }
    cout << endl;
}

int main() {
    explainVector();
}
