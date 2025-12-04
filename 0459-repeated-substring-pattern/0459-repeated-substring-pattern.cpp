class Solution {
public:
    bool repeatedSubstringPattern(string s) {

	int size = s.length() ;
	cout << s << endl;
	string result;
	for (int i = 1; i <size / 2 + 1; i++)
	{ 
		result = "";
		if (size % i == 0)
		{
			string subString = s.substr(0, i);
			for (int j = 0 ; j < size / i  ; j++)
			{
				result += subString;
			}
			if (result == s)
			{
				return true;
			}
		}

	}
	return false;
}
};