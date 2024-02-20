int calc_missing_number(vector<int>& nums) {
	int sum = 0;
	int n = nums.size();

	for (auto i = 0; i < n; i++)
		sum += nums[i];

	return  (n * (n + 1) / 2) - sum;
}

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        return calc_missing_number(nums);
    }
};