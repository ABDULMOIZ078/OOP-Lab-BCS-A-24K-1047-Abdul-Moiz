#include <iostream>
using namespace std;

void findPrimesInRange(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;

    for (int num = start + 1; num < end; num++) {
        int count = 0;

        if (num > 1) {
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    count++;
                    break;
                }
            }

            if (count == 0) {
                cout << num << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;

    findPrimesInRange(start, end);

    return 0;
}
