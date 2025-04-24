class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return {};

        std::sort(strs.begin(),strs.end());

        std::string first = strs.front();
        std::string last = strs.back();
        int i = 0;
        while(i<first.size() && i<last.size() && first[i] == last [i]){
            i++;
        }
        return first.substr(0,i);
        
    }
    
};
