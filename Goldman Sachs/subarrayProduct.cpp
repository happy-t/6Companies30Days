int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0, j=0;
        long long int product = 1;
        int ans = 0;
        bool flag = true;
        
        while(j < n && i < n)
        {
            if(flag)
                product *= a[j];
            
            if(product >= k)
            {
                product = product/a[i];
                i++;
                flag = false;
            }
            
            else if(product < k)
            {
                flag = true;
                ans += 1 + j-i;
                j++;
            }
        }
        return ans;
    }
