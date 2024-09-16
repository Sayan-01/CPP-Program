//=> Repeatedly find min element in unsorted part of the array & place it at begaining
//=> 1st time loop cholbe the smalest element ta 0th a position a place hobe then ebar min element unsorted part a find fobe i+1 theke
//=> Unstable sorting algo

#include <bits/stdc++.h>
using namespace std;

void printArr (int arr[] , int size) {
  for (int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
  return;
}

void selectionSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
      int minidx = i;
      for (int j = i+1; j < size; j++){
        if (arr[j] < arr[minidx]){
          minidx = j;
        }
      }
      int tem = arr[i];
      arr[i] = arr[minidx];
      arr[minidx] = tem;
    }
  return;
}

int main() {
  int arr[] = {2, 6, 12, 8};
  int size = 4;

  selectionSort(arr, size);
  printArr(arr, size);
  return 0;
}

//=> wrost case -> for desnding order -> no. of operation: n(n-1)/2 -> TC: O(n2), SC: O(1)
//=> best case -> TC: O(n2), SC: O(1)