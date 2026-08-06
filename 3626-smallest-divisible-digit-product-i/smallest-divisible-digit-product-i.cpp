class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
         int temp=n;
        int product=1;

         if(n==0){
                product=0;
            }
                while(temp>0){
                int dig=temp%10;
                product*=dig;
                temp/=10;
            }
            if(product%t == 0){
                return n;
            }
            else{
                n++;
            } 
        }
            return n;
        
    }
};