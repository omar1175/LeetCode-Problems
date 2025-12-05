class Solution {
public:
  int arraySign(vector<int>& nums) 
{
	int sign_counter = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == 0)
			return 0;

		if (nums[i] < 0)
			sign_counter++;
	}
	if (sign_counter % 2 == 0)
		return 1;
	else return -1;
}
};