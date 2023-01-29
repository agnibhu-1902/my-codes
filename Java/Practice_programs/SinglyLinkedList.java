public class SinglyLinkedList
{
    class Node
    {
        int data;
        Node next;
        public Node(int data)
        {
            this.data = data;
            this.next = null;
        }
    }
    public Node head = null;
    public Node tail = null;
    public void addNode(int data)
    {
        Node newnode = new Node(data);
        if (head == null)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail.next = newnode;
            tail = newnode;
        }
    } 
    public void display()
    {
        Node current = head;
        if (head == null)
        {
            System.out.println("List is empty");
            return;
        }
        System.out.print("Nodes of singly linked list: ");
        while (current != null)
        {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }
    public static void main(String args[])
    {
        SinglyLinkedList sList = new SinglyLinkedList();
        //Add nodes to the list
        sList.addNode(1);
        sList.addNode(2);
        sList.addNode(3);
        sList.addNode(4);
        //Displays the nodes present in the list
        sList.display();
    }
}