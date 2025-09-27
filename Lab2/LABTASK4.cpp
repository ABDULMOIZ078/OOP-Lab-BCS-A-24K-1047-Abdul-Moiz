// Task #04 by Abdul Moiz - 25k-0770
#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter size N for the square matrix: ";
    cin >> N;

    int **mat = new int*[N];
    for(int i = 0; i < N; i++){
        mat[i] = new int[N];
    }

    cout << "Enter the elements: " << endl;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> mat[i][j];
        }
    }

    int md = 0, sd = 0;
    for(int i = 0; i < N; i++){
        md += mat[i][i];
        sd += mat[i][N-i-1];
    }

    cout << endl;
    cout << "Sum of main diagonal is: " << md << endl;
    cout << "Sum of side diagonal is: " << sd << endl;

    for(int i = 0; i < N; i++){
        delete[] mat[i];
    }
    delete[] mat;
}
