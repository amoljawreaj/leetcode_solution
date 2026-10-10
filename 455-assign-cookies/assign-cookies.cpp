class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int i=0; //child
        int j=0;//cookie
        int cnt=0;
         while (i < g.size() && j < s.size()){
            if(s[j]>=g[i]){
                cnt++;
                i++;
                j++;
            }
            else{
                j++;
            }
         }
         return cnt;
    }
};