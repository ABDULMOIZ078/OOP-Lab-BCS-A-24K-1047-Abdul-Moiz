// Task #03 by Abdul Moiz - 25k-0770
#include <iostream>
using namespace std;

int sumArray(int size, int arr[]){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    int arr[100];

    cout << "Enter a size: ";
    cin >> size;

    cout << "Enter elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int Sum = sumArray(size, arr);

    cout << "Sum: " << Sum;
}
