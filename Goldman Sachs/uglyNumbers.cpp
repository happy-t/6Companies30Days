ull getNthUglyNo(int n) {
	    vector<ull> arr(n);
	    arr[0] = 1;
	    int a=0, b=0, c=0;
	    for(int i=1; i<n; i++)
	    {
	        ull m_of_2 = arr[a]*2, m_of_3 = arr[b]*3, m_of_5 = arr[c]*5; 
	       
	        arr[i] = min(m_of_2, min(m_of_3, m_of_5));
	        
	        if(arr[i] == m_of_2) a++;	        
	        if(arr[i] == m_of_3) b++;
	        if(arr[i] == m_of_5) c++;
	    }
	    
	    return arr[n-1];
	}
