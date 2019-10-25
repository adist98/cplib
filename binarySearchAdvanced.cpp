// This version of binary search is used to find the first value satisfying some condition in a sorted given sequence

// PROBLEM STATEMENT //
// find the first value in the sequence that is greater than or equal to x
// A[i] >= number
#include<bits/stdc++.h>

using namespace std;

int main(){
  int l = 0;
  int r = n-1;
  int number;
  cin >> number;
  int ans = -1;
  int mid = -1; 
  while(l <= r){
    mid = l + (r-l)/2;
    if(a[mid] >= number){
      ans = mid;
      r = mid - 1;
    }else{
      l = mid + 1;
    }
  cout << ans << endl;
  }
}
