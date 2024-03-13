class Solution {
    fun pivotInteger(n: Int): Int 
	{
		for(i in 1..n)
		{		
			var n1 = 0
 
			for(j in 1..i)
			{
				n1 = j + n1
			}				

			var n2 = 0

			for(k in i..n )
			{
				n2 = k + n2
			}
				
			if(n1 == n2)
			{
				return i
			}  				 
		}

		return -1 
    }
}