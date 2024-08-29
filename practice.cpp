#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

void solFuntion(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1; j++) { // Updated to 'size - 1' to avoid out of bounds
      if (arr[j] == 0) {
        int tem = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tem;
      }
    }
  }
}

int main() {
  int arr[] = {0, 5, 0, 3, 42};
  int size = 5;

  solFuntion(arr, size); // Correct function name
  printArr(arr, size);

  return 0;
}
