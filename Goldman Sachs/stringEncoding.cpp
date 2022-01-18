string encode(string src)
{     
    int n = src.length(), current = 1;
    int i=0, j=0;
    string ans = "";
    for(; j<n; j++)
    {
        if(src[j] == src[i])
        {
            current = j-i+1;
        }
        else
        {
            string low = src[i] + to_string(current);
            i = j;
            current = 1;
            ans += low;
        }
    }
    
    string low = src[i] + to_string(current);
    ans += low;
    
    return ans;
}
