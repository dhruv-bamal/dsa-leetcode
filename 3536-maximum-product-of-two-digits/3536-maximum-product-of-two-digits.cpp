class Solution {
public:
    int maxProduct(int n) {
        int temp = n;
        vector<int> vec;
        while(temp > 0) {
            vec.push_back(temp % 10);
            temp /= 10;
        }
        int maxi = INT_MIN;
        for(int i = 0; i < vec.size() - 1; i++) {
            for(int j = i + 1; j < vec.size(); j++) {
                int product = vec[i] * vec[j];
                if(product > maxi) maxi = product;
            }
        }
        return maxi;
    }
};