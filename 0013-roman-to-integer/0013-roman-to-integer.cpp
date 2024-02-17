class Solution {
public:
    int romanToInt(string s) {
   	if (s.length() == 0)
		return 0;

	if (s.rfind("IV", 0) == 0)
		return 4 + romanToInt(s.substr(2, s.length() - 2));
	if (s.rfind("IX", 0) == 0)
		return 9 + romanToInt(s.substr(2, s.length() - 2));
	if (s.rfind("XL", 0) == 0)
		return 40 + romanToInt(s.substr(2, s.length() - 2));
	if (s.rfind("XC", 0) == 0)
		return 90 + romanToInt(s.substr(2, s.length() - 2));
	if (s.rfind("CD", 0) == 0)
		return 400 + romanToInt(s.substr(2, s.length() - 2));
	if (s.rfind("CM", 0) == 0)
		return 900 + romanToInt(s.substr(2, s.length() - 2));

	if (s.rfind("I", 0) == 0)//starts with I
		return 1 + romanToInt(s.substr(1, s.length() - 1));
	if (s.rfind("V", 0) == 0)
		return 5 + romanToInt(s.substr(1, s.length() - 1));
	if (s.rfind("X", 0) == 0)
		return 10 + romanToInt(s.substr(1, s.length() - 1));
	if (s.rfind("L", 0) == 0)
		return 50 + romanToInt(s.substr(1, s.length() - 1));
	if (s.rfind("C", 0) == 0)
		return 100 + romanToInt(s.substr(1, s.length() - 1));
	if (s.rfind("D", 0) == 0)
		return 500 + romanToInt(s.substr(1, s.length() - 1));
	if (s.rfind("M", 0) == 0)
		return 1000 + romanToInt(s.substr(1, s.length() - 1));

	return 0;
    }
};