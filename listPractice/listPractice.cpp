#include <iostream>
#include <list>
#include <string>

using namespace std;

int main () {
    // simple integer list
    list<int> myList = { 1, 2, 3, 4 };
    // printing simple integer list
    for (int x : myList) {
        cout << x << endl;
    }

    //simple string list
    list<string> myList2 = { "element1", "element2", "element3", "element4" };
    // printing simple string list
    for (string x : myList2) {
        cout << x << endl;
    }

    return 0;
}