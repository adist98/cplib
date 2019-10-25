#The usual Binary Search algorithm

int main()
{
  int l,r;
  l = 0;
  r = n-1;
  int mid = -1;
  int target = number; // we have to find this number in a given sequence using binarysearch
  while(l <= r){
    mid = l + (r-l)/2; // this is to avoid overflow
    if(a[mid] == target){
      cout << mid;
      break;
    }
    if(a[mid] < target){
      l = mid + 1;
    }else{
      r = mid - 1;
    }
  }
