class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>um;
        unordered_map<char,int>mu;
        int ans=-1;
        int res=INT_MAX;
        for(int i=0;i<s.length();i++){
            if(um.find(s[i])!=um.end()){
                continue;
            }
            else{
                um[s[i]]=i;
            }
        }
        for(auto x: s){
            mu[x]++;
        }
        for(auto x: mu){
            if(x.second==1){
                res=min(res,um[x.first]);
            }
        }
        if(res==INT_MAX) return ans;
        else return res;
    }
};