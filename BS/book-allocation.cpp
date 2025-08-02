#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int maxPage, int M){
  int pages = 0;
  int students = 1;
  for (int i = 0; i < arr.size(); i++){
    if(pages + arr[i] <= maxPage){
      pages += arr[i];
    } 
    else {
      students ++;
      pages = arr[i];
    }
  }
  if(students <= M) return true;
  else return false;
}

int bookAllocation (vector<int> &arr, int M){
  int ans = -1;
  int sum = 0;
  int n = arr.size();
  for(int i = 0; i < n; i++){
    sum += arr[i];
  }
  int start = *max_element(arr.begin(), arr.end());
  int end = sum;
  while (start <= end) {
    int mid = start + (end - start)/2;
    if(isValid(arr, mid, M)){
      ans = mid;
      end = mid-1;
    }
    else start = mid+1;
  }
  return ans;
}

int main(){
  vector<int> v;
  v = {10, 5, 20, 25, 17, 23, 2, 9, 4, 13}; 
  int M = 7;
  int abc = bookAllocation(v, M);
  cout<<abc;
}