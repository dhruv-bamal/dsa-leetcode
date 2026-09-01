class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> countS, countT;
        for (char& c : s)
            countS[c]++;
        for (char& c : t)
            countT[c]++;
        return countS == countT;
    }
};