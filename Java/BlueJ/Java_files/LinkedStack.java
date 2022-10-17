import java.util.*;
class LinkedStack
{
    protected Node top;
    public LinkedStack()
    {
        top=null;
    }
    public boolean isEmpty()
    {
        return top==null;
    }
    public void push(int data)
    {
        top=new Node(data,top);
    }
    public int pop()
    {
        if(isEmpty()==true)
        return 0;
        Node tmp=top;
        top=tmp.next;
        return tmp.data;
    }
    public void display()
    {
        Node ptr=top;
        while(ptr!=null)
        {
            System.out.print(ptr.data+" --> ");
            ptr=ptr.next;
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        LinkedStack z=new LinkedStack();
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
                    z.push(no);
                    break;
                case 2:
                    z.pop();
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