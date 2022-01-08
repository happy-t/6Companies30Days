class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        int x1t = L1[0], y1t = L1[1];
        int x1b = R1[0], y1b = R1[1];
        int x2t = L2[0], y2t = L2[1];
        int x2b = R2[0], y2b = R2[1];
        
        int flag = 0;

            
        if(((y1t <= y2t && y2b <= y1t) || (y2t <= y1t && y2t >= y1b))
                && ((x2t <= x1t && x2b >= x1t) || (x2t >= x1t && x2t <= x1b)))
                    flag = 1;
        
        
        return flag;
        
    }
};
