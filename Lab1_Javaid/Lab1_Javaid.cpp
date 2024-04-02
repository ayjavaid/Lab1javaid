// Lab1_Javaid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int userValues[20];
    int count;
    int i;

    // Read input list
    cin >> count;
    for (i = 0; i < count; ++i) {
        cin >> userValues[i];
    }

    // Shift all elements to the right and shift the last element to the first position
    int lastElement = userValues[count - 1];
    for (i = count - 1; i > 0; --i) {
        userValues[i] = userValues[i - 1];
    }
    userValues[0] = lastElement;

    // Output updated list
    for (i = 0; i < count; ++i) {
        cout << userValues[i] << " ";
    }
    cout << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
