class Solution {
public:
string mergeAlternately(string word1, string word2)
{
	string result = word1 + word2;
	int p1 = 0, p2 = 0;
	for (int i = 0; i < word1.length() + word2.length(); i++)
	{
		if (p1 == word1.length())
		{
			result[i] = word2[p2];
			p2++;
		}
		else if (p2 == word2.length())
		{
			result[i] = word1[p1];
			p1++;
		}
		else {
			if (i % 2 == 0) {
				result[i] = word1[p1];
				p1++;
			}
			else {
				result[i] = word2[p2];
				p2++;
			}
		}

	}

	return result;

}


};