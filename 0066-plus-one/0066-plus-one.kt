class Solution {
    fun plusOne(digits: IntArray): IntArray {
        var len = digits.count()

        if(len == 0)
            return digits

        var i = len - 1
        var carry = 1

        while(i >= 0){
            var new_digit = digits[i] + carry

            if(new_digit >= 10){
                carry = new_digit / 10
                new_digit = new_digit % 10
            }else{
                carry = 0
            }

            digits[i] = new_digit
            i--
        }

        if(carry > 0){
            var tmp = IntArray(1 + digits.count())
            tmp[0] = 1

            for(i in 1..(tmp.count() - 1)){
                tmp[i] = digits[i - 1]
            }

            return tmp
        }

        return digits
    }
}