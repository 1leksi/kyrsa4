#include <iostream>
#include "Header.h"
#include "Source1.cpp"
#include "Source2.cpp"
#include "Source3.cpp"

using namespace std;

int main() {

    setlocale(0, "");
    int laba;
    cout << '\n';
    cout << "enter de number of de laboratory work (if you want to exit de program or laboratory work, enter 0): ";
    cin >> laba;
    cout << '\n';
    switch (laba) {
    case 1:
        main1();
        break;
    case 2:
        main2();
        break;
    case 3:
        main3();
        break;
    case 0:
        exit(0);
    default:
        cout << "there is no such laboratory work" << '\n';
        break;
    }
    return 0;
}