
bool is_palindrome(const std::string& s) {
	auto l = s.length();
	auto h = l / 2;

	for (auto i = 0; i < h; i++) 
		if (s[i] != s[l - i - 1])
			return false;

	return true;
}

std::string find_first_palindrome(std::vector<std::string>& strings) {
	for (auto p : strings) 
		if (is_palindrome(p))
			return p;

	return "";
}

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        return find_first_palindrome(words);
    }
};