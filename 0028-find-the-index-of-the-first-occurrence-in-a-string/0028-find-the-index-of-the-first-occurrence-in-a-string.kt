class Solution {
	fun contains(needle: String, index: Int, haystack: String): Boolean{

		for(i in needle.indices)
		{
			if(i + index >= haystack.count())
			{
				return false
			}

			if(needle[i] != haystack[i + index])
			{
				return false
			}
		}

		return true
	}

    fun strStr(haystack: String, needle: String): Int {

		for(i in haystack.indices)
		{
			if(contains(needle, i, haystack))
				return i
		}
        
		return -1 
    }
}