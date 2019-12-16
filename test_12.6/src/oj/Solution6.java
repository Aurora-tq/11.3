package oj;
class ListNode {
      int val;
      ListNode next;
      ListNode(int x) {
          val = x;
      }
  }
//给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
      public class Solution6 {
          public ListNode removeNthFromEnd(ListNode head, int n) {
              if (head == null || head.next == null) {
                  return null;
              }
              ListNode fast = head;
              ListNode low = head;
              int count = 0;
              while (fast != null) {
                  fast = fast.next;
                  count++;
                  if (count >= n + 2) {
                      low = low.next;
                  }
              }
              if (count == n) {
                  return head.next;
              } else {
                  low.next = low.next.next;
                  return head;
              }
          }
      }
      //编写代码，以给定值x为基准将链表分割为两个部分，所有小于x的结点排在大于或等于x的结点之前

