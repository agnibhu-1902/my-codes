#include "stack.cpp"

int main(void)
{
    typedef Stack <int> Istack;
    typedef Stack <float> Fstack;
    {
        Istack stack(10);
        stack.push(5);
        stack.push(6);
        stack.push(7);
        stack.push(3);
        cout << stack.pop() << endl;
        cout << stack.pop() << endl;
    }
    {
        Fstack stack(10);
        stack.push(5.4);
        stack.push(6.3);
        stack.push(7.9);
        stack.push(3.2);
        cout << stack.pop() << endl;
        cout << stack.pop() << endl;
    }
    return 0;
}