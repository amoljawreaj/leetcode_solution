class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        for(int num:nums1){
            st.insert(num);
        }
        unordered_set<int>ans;
        for(int num:nums2){
            if(st.find(num)!=st.end()){
                ans.insert(num);
            }
        }
        vector<int>res;
        for(int num:ans){
            res.push_back(num);
        }
        return res;
        
    }
};