
class Solution {
public:
    bool match(char left,char right){
        return (left == '(' && right == ')' ) ||
        (left == '{' && right == '}') ||
        (left == '[' && right == ']');
    }
    bool isValid(string s) {
    string stack;
    for(char c:s){
        if(c=='(' || c=='{' || c=='[') stack.push_back(c);
        else if (stack.empty() || !match(stack.back(),c)) return false;
        else stack.pop_back();
        

    }
    return stack.empty();
    }
};
