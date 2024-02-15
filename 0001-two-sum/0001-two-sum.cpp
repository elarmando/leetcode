class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int index1 = -1;
        int index2 = -1;

        for(auto i = 0; i < nums.size(); i++){            
            for(auto j  = i + 1; j < nums.size(); j++){            
                if(nums[i] + nums[j] == target){
                    index1 = i;
                    index2 = j;
                }
            }            
        }

        auto res = vector<int>();
        res.push_back(index1);
        res.push_back(index2);

        return res;        
    }
};