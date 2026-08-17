class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                stack.pop();
            } else if (operations[i] == "D") {
                stack.push(2 * stack.top());
            } else if (operations[i] == "+") {
                int temp = stack.top();
                stack.pop();
                int sum = temp + stack.top();
                stack.push(temp);
                stack.push(sum);
            } else {
                stack.push(stoi(operations[i]));
            }
        }
        int res = 0;
        while (!stack.empty()) {
            res += stack.top();
            stack.pop();
        }
        return res;
    }
};