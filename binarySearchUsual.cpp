// The usual Binary Search algorithm
// Find the target element in a given sequence
int main()
{
  int l,r;
  l = 0;
  r = n-1;
  // n is the size of sequence
  int mid = -1;
  int number;
  cin >> number;
  int target = number; // we have to find this number in a given sequence using binarysearch
  int flag = 0;
  while(l <= r){
    mid = l + (r-l)/2; // this is to avoid overflow
    if(a[mid] == target){
      cout << mid;
      flag = 1;
      break;
    }
    if(a[mid] < target){
      l = mid + 1;
    }else{
      r = mid - 1;
    }
  }
  if(flag == 0){
    cout << "Element not found" << endl;
  }
}
