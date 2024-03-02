/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */
class Solution {
    fun mergeTwoLists(list1: ListNode?, list2: ListNode?): ListNode? {
          var newList: ListNode? = null
        var rootList: ListNode? = null;
        var l1  = list1
        var l2 = list2

        while(l1 != null || l2 != null)
        {
            var newVal: Int = 0

            if(l1 == null)//end of list1, just take the rest of list2
            {
                if(l2 != null){
                    newVal = l2.`val`
                    l2 = l2.next
                }
            }
            else if(l2 == null)//end of list2, just take the rest of list1
            {
                if(l1 != null){
                    newVal = l1.`val`
                    l1 = l1.next
                }
            }
            else{
                if(l1.`val` <= l2.`val`)
                {
                    newVal = l1.`val`
                    l1 = l1.next
                }
                else{
                    newVal = l2.`val`
                    l2 = l2.next
                }
            }

            var newNode = ListNode(newVal)

            if(newList == null){
                newList = newNode
                rootList = newNode
            }
            else {
                newList.next = newNode
                newList = newList.next
            }
        }

        return rootList
    }
}