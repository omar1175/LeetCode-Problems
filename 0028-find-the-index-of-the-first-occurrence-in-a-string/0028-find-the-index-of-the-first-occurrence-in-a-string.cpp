class Solution {
public:
  int strStr(string haystack, string needle) {
	int size = haystack.length() - needle.length();
	if(needle.length() == 0) return 0;

	for (int j = 0;j <= size;j++)
	{
	    if(needle == haystack.substr(j,needle.length()))
		return j;
	}
	return -1;

}


};