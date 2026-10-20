class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int p=0;
        int n1=1;

        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[p]=nums[i];
                p+=2;
            }
            else {
                ans[n1]=nums[i];
                n1+=2;
            }
            
        }
        return ans;
        
        
    }
};