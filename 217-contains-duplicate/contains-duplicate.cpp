class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int >st;
        for(int num:nums){
            if(st.find(num)!=st.end()){
                return true;

            }
            st[num]=1;
        }
        return false;
    
    }
};