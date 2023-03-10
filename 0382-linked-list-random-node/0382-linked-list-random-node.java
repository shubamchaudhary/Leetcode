/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
import java.io.*;
import java.util.*;
 import java.util.Random;
class Solution {
 private ListNode head;
    public Solution(ListNode head) {
      this.head=head;
    }
    
    public int getRandom() {
        ListNode curr=this.head;
          Vector<Integer> v = new Vector<Integer>();
            while(curr!=null){
                    v.add(curr.val);
                    curr=curr.next;
            }
            int n=v.size();
            Random rand = new Random();
           int ind = rand.nextInt(n);
            return v.get(ind);
            
            
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */