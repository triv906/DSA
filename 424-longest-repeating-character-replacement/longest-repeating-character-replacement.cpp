class Solution {
public:
    int characterReplacement(string s, int k) {
        int counts[26]={0};
        int left=0;
        int maxf=0;
        int maxLen=0;

        for(int right=0;right<s.length();++right){
            counts[s[right]-'A']++;
            maxf=max(maxf,counts[s[right]-'A']);

            if((right-left+1)-maxf>k){
                counts[s[left]-'A']--;
                left++;
            }
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};