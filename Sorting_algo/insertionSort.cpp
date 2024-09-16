//=> First element k sorted dhori baki puro ta unsorted dhorbo
//=> Then unsorted part ar 1st ele k sorted array ar last theke check korbo  
#include <bits/stdc++.h>
using namespace std;

void printArr (int arr[] , int size) {
  for (int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
  return;
}
void insertionSort (int arr[], int size){
  for (int i = 1; i < size; i++){
    int current = arr[i];
    //finding position for current element
    int j = i-1;
    while ( j >= 0 && current < arr[j]){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = current;
  }
} 

int main() {
int arr[] = {2, 6, 12, 8};
  int size = 4;

  insertionSort(arr, size);
  printArr(arr, size);

  return 0;
}

//=> wrost case -> for desnding order -> no. of operation: n(n-1)/2 -> TC: O(n2), SC: O(1)
//=> best case -> TC: O(n2), SC: O(1)