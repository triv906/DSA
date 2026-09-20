#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int left = 0;
        int maxsize = 0;

        for(int right = 0; right < s.size(); right++){
            m[s[right]]++;

            while(m[s[right]] > 1){
                m[s[left]]--;
                if(m[s[left]] == 0){
                    m.erase(s[left]);
                }
                left++;
            }

            int winsize = right - left + 1;
            maxsize = max(maxsize, winsize);
        }

        return maxsize;
    }
};