class Solution {
public:
    bool isPalindrome(int x) {
      
      if(x<0) return false;
      else if(x==0) return true;
      std::string s = std::to_string(x);
      std::string b = s;
      std::reverse(b.begin(),b.end()); 
      return b==s;
    }
};
