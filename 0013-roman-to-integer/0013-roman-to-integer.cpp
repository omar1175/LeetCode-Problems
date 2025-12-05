class Solution {
public:
int romanToInt(string s) {
	int result = 0, n = s.size();
	for ( int i = 0; i < n; i++)
	{
		if (s[n - i - 1] == 'I')
			result += 1;
		else if (s[n - i - 1] == 'V')
		{
			if (i == s.size() - 1)
			{
				result += 5;
				break;
			}
			if (s[n - i - 2] == 'I') {
				result += 4;
				i++;
			}
			else
				result += 5;
		}
		else if (s[n - i - 1] == 'X')
		{
			if (i == s.size() - 1)
			{
				result += 10;
				break;
			}
			if (s[n - i - 2] == 'I')
			{
				result += 9;
				i++;
			}
			else
				result += 10;
		}
		else if (s[n - i - 1] == 'L')
		{
			if (i == s.size() - 1)
			{
				result += 50;
				break;
			}
			if (s[n - i - 2] == 'X')
			{
				result += 40;
				i++;
			}
			else
				result += 50;
		}
		else if (s[n - i - 1] == 'C')
		{
			if (i == s.size() - 1)
			{
				result += 100;
				break;
			}
			if (s[n - i - 2] == 'X')
			{
				result += 90;
				i++;
			}
			else result += 100;
		}
		else if (s[n - i - 1] == 'D')
		{
			if (i == s.size() - 1)
			{
				result += 500;
				break;
			}
			if (s[n - i - 2] == 'C')
			{
				result += 400;
				i++;
			}
			else result += 500;
		}
		else if (s[n - i - 1] == 'M')
		{
			if (i == s.size() - 1)
			{
				result += 1000;
				break;
			}
			if (s[n - i - 2] == 'C')
			{
				result += 900;
				i++;
			}
			else result += 1000;
		}
	}
	return result;
}
};