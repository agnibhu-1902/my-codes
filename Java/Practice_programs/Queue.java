public class Queue
{
    private int[] queueArray;
    private int front, rear, currentSize, maxSize;
    public Queue(int size)
    {
        maxSize = size;
        queueArray = new int[size];
        front = 0; rear = -1; currentSize = 0;
    }
    public void insert(int item)
    {
        if (isQueueFull())
        {
            System.out.println("Queue is full!");
            return;
        }
        if (rear == maxSize - 1)
            rear = -1;
        queueArray[++rear] = item;
        currentSize++;
        System.out.println("Item added to queue: " + item);
    }
    public int delete()
    {
        if (isQueueEmpty())
            throw new RuntimeException("Queue is empty!");
        if (front == maxSize)
            front = 0;
        int temp = queueArray[front++];
        currentSize--;
        return temp;
    }
    public int peek()
    {
        return queueArray[front];
    }
    public boolean isQueueFull()
    {
        return maxSize == currentSize;
    }
    public boolean isQueueEmpty()
    {
        return currentSize == 0;
    }
    public static void main(String args[])
    {
        Queue queue = new Queue(10);
        queue.insert(2);
        queue.insert(3);
        System.out.println("Item deleted from queue: " + queue.delete());
        System.out.println("Item deleted from queue: " + queue.delete());
        queue.insert(5);
        System.out.println("Item deleted from queue: " + queue.delete());
    }
}
