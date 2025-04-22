using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index_value;
        for(int i=0;i<nums.size();++i){
            int missing = target - nums[i];
            if(index_value.count(missing)){
                return {index_value[missing],i};
            }
            index_value[nums[i]]=i;
        }
        return {};
    }
};
