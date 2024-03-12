class Solution {
    fun removeElement(nums: IntArray, `val`: Int): Int {
       var list = mutableListOf<Int>()

       for(i in nums)
       {
		if(`val` != i)
		{
			list.add(i)
		}
       } 

	   for(i in list.indices)
	   {
		nums[i] = list[i]
	   }

		return list.count()        
    }
}