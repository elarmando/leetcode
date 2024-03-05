class Solution {
    fun isValid(s: String): Boolean {
         var stack = ArrayDeque<Char>()

        for(c in s)
        {
            if(c == '(' || c == '{' || c == '[')
            {
                stack.addLast(c)
            }
            else if(c == ')' || c == '}' || c == ']')
            {
                if(stack.count() == 0)
                    return false
                var expected = stack.removeLast();

                if(c == ')' && expected != '(')
                    return false
                else if(c == '}' && expected != '{')
                    return false
                else if(c == ']' && expected != '[')
                    return false
            }
        }

        if(stack.count() > 0)
            return false

        return true
    }
}