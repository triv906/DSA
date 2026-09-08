class Solution {
public:
    int reverse(int x) {
        long long reverse=0;
        int lastdigit;
        do{
            lastdigit=x%10;
            reverse=(reverse*10) + lastdigit;
            x=x/10;
        }
        while(x!=0);
        if(reverse>INT_MAX || reverse<INT_MIN){
        return 0;
        }
        return reverse;
    }
};