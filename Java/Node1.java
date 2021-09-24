class Node1
{
    int data;
    Node1 next;Node1 start;
    Node1()
    {
        start=next=null;
        data=0;
    }
    Node1(int d,Node1 n)
    {
        data=d;
        next=n;
    }
    void insertatlog(int no)
    {
        Node1 nptr=new Node1(no,null);
        nptr.next=start;
        start=nptr;
    }
    void insertatend(int no)
    {
        Node1 nptr=new Node1(no,null);
        Node1 ptr=start;
        while(ptr.next!=null)
        ptr=ptr.next;
        ptr.next=nptr;
    }
    void display()
    {
        Node1 ptr=start;
        while(ptr!=null)
        System.out.print(ptr.data+" -> ");
        ptr=ptr.next;
    }
}