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
    fun reverseList(head: ListNode?): ListNode? {
		var stack = ArrayDeque<Int>() 
		var node = head

		while(node != null){
			stack.addLast(node.`val`)
			node = node.next
		}

		node = head

		while(node != null){
			node.`val` = stack.removeLast()
			node = node.next
		}

		return head
    }
}