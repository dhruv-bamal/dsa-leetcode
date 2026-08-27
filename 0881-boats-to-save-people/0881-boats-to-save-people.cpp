class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left = 0, right = people.size() - 1;
        sort(people.begin(), people.end());
        vector<vector<int>> res;
        while(left < right) {
            if(people[left] + people[right] < limit) {
                res.push_back({people[left], people[right]});
                left++;
                right--;
            } else {
                res.push_back({people[right]});
                right--;
            }
        }
        return res.size();
    }
};