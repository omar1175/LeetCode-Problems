class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
	
	int base = 1,n = digits.size();
    long long number;
	for (int i = 0; i < n; i++)
	{
		number += base * digits[n - i - 1];
		base *= 10;

	}
	number++;
	for (int i = 0; i < n; i++)
	{
		digits[n-i-1] = number % 10;
		number /= 10;
	}
	if (number != 0)
	{
		digits[0] = number;
		digits.push_back(0);
	}
	return digits;
}

};