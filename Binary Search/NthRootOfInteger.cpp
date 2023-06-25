int multiply(int number, int n){
  int ans = 1;
  for(int i = 0; i <= n; i++){
    ans = ans * number;
  }
  return ans;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1;
  int high = m;

  int eps = 1e-6;

  while((high - low) > eps){
    int mid = (low + high)/2;
    if(multiply(mid,n)<m){
      low = mid;
    }

    else{
      high = mid;
    }
  }

  return low;
}

