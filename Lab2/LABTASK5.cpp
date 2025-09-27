// Task #05 by Abdul Moiz - 25k-0770
#include <iostream>
using namespace std;

int main() {
    string *s1 = new string;
    string *s2 = new string;

    cout << "Enter the first string: ";
    cin >> *s1;
    cout << "Enter the second string: ";
    cin >> *s2;

    string *s3 = new string;
    *s3 = *s1 + *s2;

    cout << "\nFirst string: " << *s1 << endl;
    cout << "Second string: " << *s2 << endl;
    cout << "Concatenated string: " << *s3 << endl;

    delete s1;
    delete s2;
    delete s3;
}
