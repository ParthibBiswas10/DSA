import java.util.*;

 class ListNode {
     int val;
     ListNode next;
     ListNode(int val) { this.val = val; }
  
 }

public class pallindrome {
    static ListNode reverse(ListNode head){
       
        ListNode prev=null;
        while(head!=null){
            ListNode next=head.next;
            head.next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    static boolean isPalindrome(ListNode head) {
        ListNode slow=head;
        ListNode fast=head;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        if(fast!=null){
            slow=slow.next;
        }
        fast=head;
        slow=reverse(slow);
        while(slow!=null){
            if(fast.val!=slow.val) return false;
            fast=fast.next;
            slow=slow.next;
        }
        return true;

    }
    public static void main(String args[]){
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of nodes in the linked list:");
        int n=sc.nextInt();
        ListNode head=null;
      
        for(int i=0;i<n;i++){
            int x=sc.nextInt();
            ListNode newNode=new ListNode(x);
            if(head==null){
                head=newNode;
            }
            else{
                ListNode temp=head;
                while(temp.next!=null){
                    temp=temp.next;
                }
                temp.next=newNode;
            }
        }
        
        ListNode temp = head;
        while (temp != null) {
              System.out.print(temp.val + "->");
                temp = temp.next;
        }
        System.out.print("null");

        boolean ans=isPalindrome(head);
        if(ans==true){
            System.out.println("\nThe linked list is a palindrome.");
        }
        else{
            System.out.println("\nThe linked list is not a palindrome.");
        }
    }
}