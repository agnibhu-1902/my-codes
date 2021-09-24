import java.util.*;
class LinkedList1
{
    protected Node start;
    public LinkedList1()
    {
        start=null;
    }
    public boolean isEmpty()
    {
        return start==null;
    }
    void insertAtBeg(int no)
    {
        Node nptr=new Node(no,null);
        nptr.next=start;
        start=nptr;
    }
    void insertAtEnd(int no)
    {
        Node nptr=new Node(no,null);
        Node ptr=start;
        while(ptr.next!=null)
        ptr=ptr.next;
        ptr.next=nptr;
    }
    void display()
    {
        Node ptr=start;
        while(ptr!=null)
        {
            if(ptr.next!=null)
            System.out.print(ptr.data+" --> ");
            else
            System.out.print(ptr.data);
            ptr=ptr.next;
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        LinkedList1 z=new LinkedList1();
        for(int i=1;i<=3;i++)
        {
            if(z.isEmpty()==true)
            System.out.println("Node is empty\n");
            System.out.println("Enter a number");
            int no=sc.nextInt();
            System.out.println("\n1.Insert at beginning\n2.Insert at end\n");
            System.out.println("Enter choice");
            int ch=sc.nextInt();
            System.out.println();
            switch(ch)
            {
                case 1:
                    z.insertAtBeg(no);
                    break;
                case 2:
                    z.insertAtEnd(no);
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
        System.out.print("Final linked list : ");
        z.display();
    }
}