#include <iostream>
using namespace std;

int main() {
    int size, fa[100], sa[100], temp;
    cout << "Enter size of an array: ";
    cin >> size;
    cout << "Enter " << size << " elements for the first array: ";
    for(int i = 0; i < size; i++){
        cin >> fa[i];
    }

    cout << "Enter " << size << " elements for the second array: ";
    for(int i = 0; i < size; i++){
        cin >> sa[i];
    }

    cout << "\nArrays after swapping:\n";
    for(int i = 0; i < size; i++){
        temp = fa[i];
        fa[i] = sa[i];
        sa[i] = temp;
    }

    cout << "First array: ";
    for (int i = 0; i < size; i++){
        cout << fa[i] << " ";
    }

    cout << "\nSecond array: ";
    for (int i = 0; i < size; i++){
        cout << sa[i] << " ";
    }

    cout << "\n\n";
    cout << "Largest element in first array (after swapping): ";
    int lar = fa[0];
    for(int i = 0; i < size; i++){
        if(fa[i] > lar){
            lar = fa[i];
        }
    }
    cout << lar << endl;

    cout << "Second largest element in second array (after swapping): ";
    int lar2 = sa[0];
    for (int i = 0; i < size; i++) {
        if (sa[i] > lar2){
            lar2 = sa[i];
        }
    }

    int sma = sa[0];
    for (int i = 0; i < size; i++) {
        if (sa[i] != lar2 && sa[i] > sma) {
            sma = sa[i];
        }
    }

    cout << sma << endl;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (fa[i] == fa[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << "Unique element in first array (after swapping): " << fa[i] << endl;
            return 0;
        }
    }

    cout << endl;
}
