class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(auto temp: s) {
            if (temp == '(' or temp == '{' or temp == '[') stack.push(temp);
            else {
                if (stack.empty() or 
                    (stack.top() == '(' and temp != ')') or 
                    (stack.top() == '{' and temp != '}') or 
                    (stack.top() == '[' and temp != ']')
                    ) {
                        return false;
                    }
                    stack.pop();
            }
        }
        return stack.empty();
    }
};