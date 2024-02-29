class Solution {
    fun searchInsert(nums: IntArray, target: Int): Int {
         var pos = -1

        for(i in 0..nums.count() - 1){
            if(target == nums[i])
                return i;

            if(target < nums[i]){
                pos = i
                break
            }
        }

        if(pos == -1)
            pos = nums.count()

        return pos
    }
}