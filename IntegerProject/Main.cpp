#include <iostream>
#include "Integer.h"

using namespace std;

int main() {
    Integer i1{ 5 };
    Integer i2{ 5 };
    Integer i3 = i1.add(i2);

    cout << i3.getValue() << endl;
    return 0;
}