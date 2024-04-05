#include<iostream>
using namespace std;

class ClassY
{
    public:
        int data;
        ClassY(int value)
        {
            data = value;
        }
};
class ClassX
{
    public:
        ClassY* objY;
        bool deepCopy;
        ClassX(int valueY)
        {
            objY = new ClassY(valueY);
        }
        ClassX(const ClassX& other, bool deepCopy)
        {
            this->deepCopy = deepCopy;
            if (deepCopy)
            {
                objY = new ClassY(other.objY->data);
                cout<<"Deep Copy Created"<<endl;
            }
            else
            {
                cout<<"Shallow Copy Created"<<endl;
                objY = other.objY;
            }
        }
        ~ClassX()
        {
            if (deepCopy)
                delete objY;
        }
};
int main()
{
    int num = 5;
    ClassX obj(num);
    ClassX shallow_copy(obj,false);
    ClassX deep_copy(obj,true);
    cout<<"Shallow copied data : "<<shallow_copy.objY->data<<endl;
    cout<<"Deep copied data : "<<deep_copy.objY->data<<endl;

}