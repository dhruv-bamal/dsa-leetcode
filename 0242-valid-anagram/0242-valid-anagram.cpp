class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> countS, countT;
        for (auto& it : s)
            countS[it]++;
        for (auto& it : t)
            countT[it]++;
        return countS == countT;
    }
};