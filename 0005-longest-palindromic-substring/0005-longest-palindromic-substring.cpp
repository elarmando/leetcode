
void findPalindrome(int& left, int& right, bool &samechars, const std::string& input) {
	if (left - 1 >= 0 && right + 1 <= input.size() - 1 && input[left - 1] == input[right + 1]) {

		if(samechars)
			samechars = input[left - 1] == input[left] && input[right + 1] == input[right];

		left = left - 1;
		right = right + 1;

		findPalindrome(left, right, samechars, input);
	}
	else if (samechars && left - 1 >= 0 && input[left - 1] == input[left]) {
		left = left - 1;

		findPalindrome(left, right, samechars, input);
	}
	else if (samechars && right + 1 <= input.size() - 1 && input[right] == input[right + 1]) {
		right = right + 1;
		findPalindrome(left, right, samechars, input);
	}
}


std::string solveLongest(const std::string& input) {
	if (input.size() == 0)
		return "";

	int currentLeft = -1;
	int currentRight = -2;

	for (auto i = 0; i < input.size(); i++) {
		int left = i;
		int right = i;
		bool same = true;

		findPalindrome(left, right, same, input);

		if ((right - left) > (currentRight - currentLeft)) {
			currentRight = right;
			currentLeft = left;
		}
	}

	return input.substr(currentLeft, (currentRight - currentLeft + 1));
}

class Solution {
public:
    string longestPalindrome(string s) {
        return solveLongest(s);
    }
};