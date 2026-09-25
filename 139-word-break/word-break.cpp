class Solution {
public:
       vector<int>memo;
bool help(string s,int index, unordered_set<string>&dict){
     if(index==s.size()){
            return true;
        }
         if(memo[index]!=-1){
            return memo[index];
   }
        for(int i=index;i<s.size();i++){
            string word=s.substr(index,i-index+1);
            if(dict.find(word)!=dict.end()){
                if (help(s,i+1,dict)){
                    memo[index]=1;
                return true;
                }
            }
        }
                memo[index]=0;
                return false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        memo.resize(s.size(),-1);
        return help(s,0,dict);
    }
};