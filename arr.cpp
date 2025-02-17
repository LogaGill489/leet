#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sortArr(int arr[], int size) {
    for (int i = 2; i < size + 1; i++) {
        for (int j = 0; j < i - 1; j++) {
            if (arr[i - 1] < arr[j]) {
                int temp = arr[i - 1];
                for (int k = i - 1; k > j; k--) {
                    arr[k] = arr[k - 1];
                }
                arr[j] = temp;
                break;
            }
        }
    }
}

int main() {
    const int SIZE = 100;
    int arr[SIZE];

    // Seed the random number generator
    srand(time(0));

    // Fill the array with random numbers from 1 to 9
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 9 + 1;
    }

        // Print the array
    for (int i = 0; i < SIZE; ++i) {
            cout << arr[i] << " ";
    }
        cout << endl;

    sortArr(arr, SIZE);

    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << endl;
}
    return 0;
}