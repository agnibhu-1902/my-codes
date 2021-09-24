import java.util.*;
class LinkedQueue
{
    protected Node front,rear;
    protected int number;
    public LinkedQueue()
    {
        front=rear=null;
        number=0;
    }
    public boolean isEmpty()
    {
        return front==null;
    }
    public int size()
    {
        return number;
    }
    public void insert(int data)
    {
        Node tmp;
        tmp=new Node(data,null);
        if(rear==null)
        front=rear=tmp;
        else
        {
            rear.next=tmp;
            rear=rear.next;
        }
    }
    public int remove()
    {
        if(isEmpty()==true)
        return 0;
        Node tmp=front;
        front=tmp.next;
        if(front==null)
        rear=null;
        number--;
        return tmp.data;
    }
    public void display()
    {
        Node ptr=front;
        while(ptr!=rear)
        {
            System.out.print(ptr.data+" --> ");
            ptr=ptr.next;
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        LinkedQueue z=new LinkedQueue();
        while(true)
        {
            if(z.isEmpty()==true)
            System.out.println("Empty");
            System.out.println("\nMenu\n1.Insert\n2.Remove\n3.Display\n4.Exit\n");
            System.out.println("Enter choice");
            int ch=sc.nextInt();
            System.out.println();
            switch(ch)
            {
                case 1:
                    System.out.println("Enter a number");
                    int no=sc.nextInt();
                    z.insert(no);
                    break;
                case 2:
                    z.remove();
                    break;
                case 3:
                    z.display();
                    break;
                case 4:
                    System.exit(1);
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}