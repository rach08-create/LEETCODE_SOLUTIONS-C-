class Solution {
public:
    int maximumSwap(int num) {
        int max_ele=-1;
        int max_idx=-1;
        int lowest_idx=-1;
        int r_idx=-1;
        string temp=to_string(num);
        for(int i=temp.size()-1;i>=0;i--){
            if(max_ele<temp[i]){
                max_ele=temp[i];
                max_idx=i;
                continue;
            }
            if(max_ele>temp[i]){
                lowest_idx=i;
                r_idx=max_idx;
            }
        }
        if(lowest_idx==-1) return num;
        swap(temp[lowest_idx],temp[r_idx]);
        return stoi(temp);
    }
};