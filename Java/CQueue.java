import java.util.*;
class CQueue
{
    protected int queue[];
    protected int front,rear;
    public CQueue(int capacity)
    {
        queue=new int[capacity];
        front=rear=-1;
    }
    public boolean isEmpty()
    {
        return front==-1;
    }
    public void insert(int no)
    {
        if((front==0&&rear==queue.length-1)||(rear+1==front))
        System.out.println("Overflow");
        else
        {
            if(rear==-1)//First item to be inserted
            front=rear=0;
            else if(rear==queue.length-1)
            rear=0;
            else
            rear++;
            queue[rear]=no;
        }
    }
    public int remove()
    {
        int elem;
        if(isEmpty()==true)
        return -999;
        else
        {
            elem=queue[front];
            if(front==rear)
            front=rear=-1;
            else if(front==queue.length-1)
            front=0;
            else
            front++;
            return elem;
        }
    }
    public void display()
    {
        if(isEmpty())
        System.out.println("Empty");
        else
        {
            if(front<=rear)
            {
                for(int i=front;i<=rear;i++)
                System.out.print(queue[i]+" ");
            }
            else
            {
                for(int i=front;i<=queue.length;i++)
                System.out.print(queue[i]+" ");
                for(int j=0;j<=rear;j++)
                System.out.print(queue[j]+" ");
            }
        }
        System.out.println();
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter capacity");
        int cap=sc.nextInt();
        CQueue z=new CQueue(cap);
        while(true)
        {
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