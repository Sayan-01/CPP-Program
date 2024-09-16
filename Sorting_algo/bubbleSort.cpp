//=> Por por duto nebo and ager ta boro hole swap kore debo
//=> Statable sorting algo

#include <bits/stdc++.h>
using namespace std;

void printArr (int arr[] , int size) {
  for (int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
  return;
}
int main() {
  int arr[] = {2, 6, 12, 8};
  int size = 5;
  int flag = false; //=> For optimization
  for (int i = 0; i < size-1; i++){ //=> 1st lop a 4rt element thik posite asbe 2nd a -> 3er element 3ed a -> 2nd then automatic vabe smallest element 1st ai thakbe tai size-1 holo
    for (int j = 0; j < size-i-1; j++){ //=> size - i - 1 hoyar karon dry run korei boza jabe -> karon prottek bar ekdom last er element gulo swap korte hobe na karon ora organize e thakbe already
      if (arr[j] > arr[j+1]) { //=> Por por duto nebo and ager ta boro hole swap kore debo
        flag = true;
        int tem = arr[j];
        arr[j] = arr[j+1] ;
        arr[j+1] = tem;
      }  
    }
    if (!flag) break;
  }
  printArr(arr, size);
  
  return 0;
}

//=> wrost case -> for desnding order -> no. of operation: n(n-1)/2 -> TC: O(n2), SC: O(1)
 //=> best case -> TC: O(n2), SC: O(1)