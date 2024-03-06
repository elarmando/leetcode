class Solution {
    fun removeDuplicates(nums: IntArray): Int {
        var prevNum = -111
        var nonrepeated = mutableListOf<Int>()


        for(i in nums.indices)
        {
            if(prevNum != nums[i])
            {
                nonrepeated.add(nums[i])
                prevNum = nums[i]
            }
        }

        for(i in nonrepeated.indices)
            nums[i] = nonrepeated[i]

        return nonrepeated.count()
    }
}