class Solution {
public:
    bool isPowerOfFour(int n) {
         int  ans = 1;
        for(int i =0;i<=30;i++){
           
            if (n==ans)
            {return true;}
            if(ans<INT_MAX/2)
            ans=ans*4;
        }
        return false ;
    }
};