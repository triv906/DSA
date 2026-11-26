class Solution {
public:
    bool canAliceWin(int n) {
        // for(int i=10;i<=0;i--){
        //     if(n>=i){
        //         return true;
        //     }
        //     else {
        //         return false;
        //     }
        // }
        int i=10;int k=0;
        while(n>=i){
            n-=i;
            i--;
            k++;
        }

        return k%2==1?true:false;
        
    }
};