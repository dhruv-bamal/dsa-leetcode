class Solution {
public:
    int productOfDigits(int i) {
        if(i == 0) return 0;
        int product = 1;
        while(i > 0) {
            product *= (i % 10);
            i /= 10;
        }
        return product;
    }

    int smallestNumber(int n, int t) {
        for(int i = n; i <= 100; i++) {
            int product = productOfDigits(i);
            if(product % t == 0) return i;
        }
        return -1;
    }
};