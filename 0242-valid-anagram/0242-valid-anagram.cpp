class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int> str1,str2;
    if (s.size() != t.size())
	return false;
	for (int i = 0; i < s.length(); i++)
	{
		str1[s[i]]++;
		str2[t[i]]++;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if(str1[s[i]] != str2[s[i]])
			return false;
	}
	return true;
}

    
};