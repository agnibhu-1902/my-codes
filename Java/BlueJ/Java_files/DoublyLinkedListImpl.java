package DLL;

import java.util.*;
 public class DoublyLinkedListImpl<E> {
 
    private Node head;
    private Node tail;
    private int size;
     
    public DoublyLinkedListImpl() {
        size = 0;
    }
    private class Node {
        E element;
        Node next;
        Node prev;
 
        public Node(E element, Node next, Node prev) {
            this.element = element;
            this.next = next;
            this.prev = prev;
        }
    }
    /**
     * returns the size of the linked list
     * @return
     */
    public int size() { return size; } 
    /**
     * return whether the list is empty or not
     * @return
     */
    public boolean isEmpty() { return size == 0; }
    /**
     * adds element at the starting of the linked list
     * @param element
     */
    public void addFirst(E element) {
        Node tmp = new Node(element, head, null);
        if(head != null ) {head.prev = tmp;}
        head = tmp;
        if(tail == null) { tail = tmp;}
        size++;
        System.out.println("adding: "+element);
    }
    /**
     * adds element at the end of the linked list
     * @param element
     */
    public void addLast(E element) {
         
        Node tmp = new Node(element, null, tail);
        if(tail != null) {tail.next = tmp;}
        tail = tmp;
        if(head == null) { head = tmp;}
        size++;
        System.out.println("adding: "+element);
    }
    /**
     * this method walks forward through the linked list
     */
    public void iterateForward(){
         
        System.out.println("iterating forward..");
        Node tmp = head;
        while(tmp != null){
            if(tmp.next==null)
            System.out.print(tmp.element);
            else
            System.out.print(tmp.element+" --> ");
            tmp = tmp.next;
        }
        System.out.println();
    }
    /**
     * this method walks backward through the linked list
     */
    public void iterateBackward(){
         
        System.out.println("iterating backward..");
        Node tmp = tail;
        while(tmp != null){
            if(tmp.prev==null)
            System.out.print(tmp.element);
            else
            System.out.print(tmp.element+" --> ");
            tmp = tmp.prev;
        }
        System.out.println();
    }
    /**
     * this method removes element from the start of the linked list
     * @return
     */
    public E removeFirst() {
        if (size == 0) throw new NoSuchElementException();
        Node tmp = head;
        try
        {
            head = head.next;
            head.prev = null;
            size--;
            System.out.println("deleted: "+tmp.element);
        }catch(NullPointerException io){System.out.println(io);}
        return tmp.element;
    }
    /**
     * this method removes element from the end of the linked list
     * @return
     */
    public E removeLast() {
        if (size == 0) throw new NoSuchElementException();
        Node tmp = tail;
        try
        {
            tail = tail.prev;
            tail.next = null;
            size--;
            System.out.println("deleted: "+tmp.element);
        }catch(NullPointerException ie){System.out.println(ie);}
        return tmp.element;
    }  
    public static void main(String args[]){
         Scanner sc=new Scanner(System.in);
         int no;
        DoublyLinkedListImpl<Integer> dll = new DoublyLinkedListImpl<Integer>();
        while(true)
        {
            System.out.println("\nMenu\n\n1.Add first\n2.Add last\n3.Remove first\n4.Remove last\n5.Iterate forward\n6.Iterate backward\n7.Exit");
            System.out.println("\nEnter choice");
            int ch=sc.nextInt();
            switch(ch)
            {
                case 1:
                System.out.println("Enter a number");
                no=sc.nextInt();
                dll.addFirst(no);
                break;
                case 2:
                System.out.println("Enter a number");
                no=sc.nextInt();
                dll.addLast(no);
                break;
                case 3:
                dll.removeFirst();
                break;
                case 4:
                dll.removeLast();
                break;
                case 5:
                dll.iterateForward();
                break;
                case 6:
                dll.iterateBackward();
                break;
                case 7:
                System.exit(0);
                break;
                default:
                System.out.println("Invalid choice");
            }
        }
    }
}