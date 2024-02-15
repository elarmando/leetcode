

class Solution {
public:
    bool isPalindrome(int x) {
        auto number = x;
        if (number < 0)
		    return false;

        if(number == 0)
            return true;
        
	    std::vector<int> digits;

	    int power = std::log10(number);

	    for (int p = power; p >= 0; p--) {
		    int base = std::pow(10, p);
		    int val = number / base;
		    number = number % base;
		    digits.push_back(val);
	    }

	    auto len = digits.size();
	    if (len == 0)
            return true;

	    for (auto i = 0; i <= len / 2; i++)
		    if (digits[i] != digits[len - i - 1])
			    return false;

	    return true;
    }
};