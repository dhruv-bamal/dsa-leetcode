class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        vector<vector<int>> vec;
        int left = 0, right = n - 1;
        while (left <= right) {
            if (people[left] + people[right] <= limit) {
                vec.push_back({people[left], people[right]});
                left++;
                right--;
            } else {
                vec.push_back({people[right]});
                right--;
            }
        }
        return vec.size();
    }
};