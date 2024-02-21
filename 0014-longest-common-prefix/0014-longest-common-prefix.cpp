bool is_same_char(int index, vector<string>& strs) {
	bool first = true;
	char c = 'c';

	for (auto s : strs) {

		if (index >= s.size())
			return false;

		if (first) {
			c = s[index];
			first = false;
		}
		else if (c != s[index])
		{
			return false;
		}
	}

	return true;
}

string find_longest_prefix(vector<string>& input) {
	if (input.size() == 0)
		return "";

	int i = 0;

	while (is_same_char(i, input))
		i++;

	return input[0].substr(0, i);
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        return find_longest_prefix(strs);
    }
};