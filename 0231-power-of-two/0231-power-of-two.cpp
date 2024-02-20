
bool is_power_of_two(int n) {
	if (n == 0)
		return false;

	if (n < 0)
		return false;

	if (n == 1 || n == -1)
		return true;

	do {
		auto res = n % 2;

		if (res != 0)
			return false;
		n = n / 2;

	} while (n > 1);

	return true;
}


class Solution {
public:
    bool isPowerOfTwo(int n) {
        return is_power_of_two(n);
    }
};