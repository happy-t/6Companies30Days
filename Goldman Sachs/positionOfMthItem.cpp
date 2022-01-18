int findPosition(int N , int M , int K) {

        if(N == 1)
            return 1;
  
        int ans = (K+M-1)%N;
        if(ans == 0)
            return N;
         return ans;
    }
