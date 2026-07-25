class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        set<int>st;
        for(int x : nums){
            st.insert(x);
        }
        int maxlen=INT_MIN;
        for(int x : st){
            if(st.find(x-1)==st.end()){
               int curr=x;
               int len=1;
               while(st.find(curr+1)!=st.end()){
                curr+=1;
                len+=1;
               }
               maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};