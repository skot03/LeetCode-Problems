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
// alternative method using loops
/* string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    for (int i = 0; i < strs[0].size(); ++i) {
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); ++j) {
            if (i >= strs[j].size() || strs[j][i] != c)
                return strs[0].substr(0, i);
        }
    }
    return strs[0];
} */
