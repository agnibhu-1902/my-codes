import java.util.*;
class LinkedList2
{
    protected Node start;
    public LinkedList2()
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
    public void append(int val)
    {
        Node ptr,nptr,save=null;
        nptr=new Node(val,null);
        boolean ins=false;
        if(start==null)//For first node
        start=nptr;
        else if(val<=start.data)//New item less than first node
        {
            nptr.next=start;
            start=nptr;
        }
        else//In between insertion
        {
            save=start;
            ptr=start.next;
            while(ptr!=null)
            {
                if(val>=save.data&&val<=ptr.data)
                {
                    save.next=nptr;
                    nptr.next=ptr;
                    ins=true;
                    break;
                }
                else
                {
                    save=ptr;
                    ptr=ptr.next;
                }
            }
            if(ins==false)//At end
            save.next=nptr;
        }
    }
    public boolean delete(int val)
    {
        boolean res=false;
        if(start.data==val)
        {
            start=start.next;
            res=true;
        }
        else
        {
            Node ptr=start;
            while(ptr.next!=null)
            {
                if(ptr.next.data==val)
                {
                    ptr.next=ptr.next.next;
                    res=true;
                    break;
                }
                else
                ptr=ptr.next;
            }
        }
        return res;
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
        LinkedList2 z=new LinkedList2();
        while(true)
        {
            if(z.isEmpty()==true)
            System.out.println("Node is empty\n");
            System.out.println("\n1.Insert at beginning\n2.Insert at end\n3.Append\n4.Delete\n5.Display\n6.Exit\n");
            System.out.println("Enter choice");
            int ch=sc.nextInt();
            System.out.println();
            int no;
            switch(ch)
            {
                case 1:
                    System.out.println("Enter a number");
                    no=sc.nextInt();
                    z.insertAtBeg(no);
                    break;
                case 2:
                    System.out.println("Enter a number");
                    no=sc.nextInt();
                    z.insertAtEnd(no);
                    break;
                case 3:
                    System.out.println("Enter a number");
                    no=sc.nextInt();
                    z.append(no);
                    break;
                case 4:
                    System.out.println("Enter a number");
                    no=sc.nextInt();
                    if(z.delete(no)==true)
                    System.out.println("Value deleted");
                    else
                    System.out.println("Value not found");
                    break;
                case 5:
                    System.out.print("Final linked list : ");
                    z.display();
                    break;
                case 6:
                    System.out.println("Program terminated");
                    System.exit(1);
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}