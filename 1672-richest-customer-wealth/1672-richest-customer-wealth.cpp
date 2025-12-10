class Solution {
public:
        int maximumWealth(vector<vector<int>>& accounts) {
	
	int sum = 0, max = INT_MIN;
	for (size_t i = 0; i < accounts.size(); i++)
	{
		for (size_t j = 0; j < accounts[i].size(); j++)
			sum += accounts[i][j];
			
		if (sum > max)
			max = sum;
        sum = 0;
 	}
	return max;
}
};