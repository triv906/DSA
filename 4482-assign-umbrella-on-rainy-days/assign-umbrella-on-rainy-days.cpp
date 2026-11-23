class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string>ans;
         int aliceCount = 0;
        int bobCount = 0;
        for(int i=0;i<rain.size();i++){
            
            bool bobNeeds = (rain[i] == 1);
            bool aliceNeeds = (i + 1 < rain.size() && rain[i] == 1 && rain[i + 1] == 1);

            if (aliceNeeds && bobNeeds) {

                if (aliceCount <= bobCount) {
                    ans.push_back("Alice");
                    aliceCount++;
                }
                else {
                    ans.push_back("Bob");
                    bobCount++;
                }

            }
            else if (aliceNeeds) {
                ans.push_back("Alice");
                aliceCount++;
            }
            else if (bobNeeds) {
                ans.push_back("Bob");
                bobCount++;
            }
            else {
                ans.push_back("None");
            }
        }

        return ans;
    }
};