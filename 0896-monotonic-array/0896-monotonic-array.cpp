class Solution {
public:
  bool isMonotonic(vector<int>& nums) {
	int flag = 0;
	for (int i = 0; i< nums.size()-1 &&flag == 0; i++)
		flag = nums[i + 1] - nums[i];
	if (flag > 0) {
		for (int i = 1; i < nums.size() - 1; i++)
			if (nums[i + 1] - nums[i] < 0)
				return false;
	}
	else if (flag == 0)
		return true;
	else {
		for (int i = 1; i < nums.size()-1; i++)
			if (nums[i + 1] - nums[i] > 0)
				return false;
	}
	return true;
}
};