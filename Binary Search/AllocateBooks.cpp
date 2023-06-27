 bool isPossible(vector<int> &A, int &N, int B, int mid){
     int student = 1;
     int pageSum = 0;
     
     for(int i = 0 ;  i < N ; i++){
         if(pageSum + A[i] <= mid){
             pageSum += A[i];
         }
         
         else{
             student++; 
             if(student > B || A[i] > mid){ 
                 return false;
            }
            
            pageSum = A[i];
                 
             
         }
         
         if(student > B) return false;
     }
     
     return true;
 }

int Solution::books(vector<int> &A, int B) {
    int N = A.size();
    int s = 0;
    int sum = 0;
    
    for(int i =0 ; i<N ; i++){
        sum += A[i];
    }
    int e = sum;
    
    int ans = -1;
    
    int mid = s + (e - s)/2;
    
    while(s <= e){
        if(isPossible(A, N, B, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        
        mid = s + (e - s)/2;
    }
    
    return ans;
    
}
