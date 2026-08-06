import java.util.*;
class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}
public class reverse {
    public static ListNode reverseList(ListNode head) {
        ListNode curr=head;
        ListNode pre=null;
        ListNode next=head;
        while(curr!=null){
            next=curr.next;
            curr.next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
    }


    public static void main(String[] args) {
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


        head = reverseList(head);
        temp = head;
        System.out.println("\n");
        while (temp != null) {
              System.out.print(temp.val + "->");
                temp = temp.next;
        }
        System.out.print("null");


    }
}