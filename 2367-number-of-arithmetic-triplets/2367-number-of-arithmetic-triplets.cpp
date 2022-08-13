class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,bool>um;
        int ans=0;
        for(auto x: nums){
            um[x]=true;
        }
        for(auto x: nums){
            if(um.find(x-diff)!=um.end() && um.find(x+diff)!=um.end()){
                ans++;
            }
        }
        return ans;
    }
};