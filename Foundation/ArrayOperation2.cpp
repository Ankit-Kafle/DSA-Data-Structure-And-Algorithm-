#include <iostream>
using namespace std;

// Display array
void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

// Searching operation
void search(int arr[], int size) {
    bool found = false;

    for(int i = 0; i < size; i++) {
        if(arr[i] == 28) {
            cout << "The element you are searching is located at index: " << i << "\n";
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "The element you are searching is not found\n";
    }
}

// Deletion operation
void deletion(int arr[], int size, int index) {
    for(int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int arr[20] = {7, 8, 9, 28, 88};
    int size = 5, index = 3;

    display(arr, size);
    search(arr, size);

    deletion(arr, size, index);
    size = size - 1;   // correct size update

    display(arr, size);
    search(arr, size);

    return 0;
}

