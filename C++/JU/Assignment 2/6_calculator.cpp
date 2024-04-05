#include <iostream>
using namespace std;

class Calculator
{
    float num1, num2;
    public:
        Calculator(float, float);
        class NestedCalculator
        {
            Calculator &outer;
            public:
                NestedCalculator(Calculator &);
                float add() const;
                float sub() const;
                float mul() const;
                float div() const;
        };
};

Calculator::Calculator(float a, float b)
    : num1(a), num2(b)
{
}

Calculator::NestedCalculator::NestedCalculator(Calculator &out)
    : outer(out)
{
}

float Calculator::NestedCalculator::add() const
{
    return outer.num1 + outer.num2;
}

float Calculator::NestedCalculator::sub() const
{
    return outer.num1 - outer.num2;
}

float Calculator::NestedCalculator::mul() const
{
    return outer.num1 * outer.num2;
}

float Calculator::NestedCalculator::div() const
{
    return outer.num1 / (float) outer.num2;
}

int main()
{
    float num1, num2; bool flag = true; int choice;
    string menu[] = {"1. Add", "2. Subtract", "3. Multiply", "4. Divide", "5. Exit"};
    const int size = sizeof(menu) / sizeof(menu[0]);
    Calculator *calcobj; Calculator::NestedCalculator *nestedcalcobj;
    while (flag)
    {
        cout << "========== MENU ==========" << endl;
        for (int i = 0; i < size; i++)
            cout << menu[i] << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter 2 numbers: ";
            cin >> num1 >> num2;
            calcobj = new Calculator(num1, num2);
            nestedcalcobj = new Calculator::NestedCalculator(*calcobj);
            cout << "Result: ";
        }
        switch(choice)
        {
            case 1:
                cout << nestedcalcobj->add() << endl;
                break;
            case 2:
                cout << nestedcalcobj->sub() << endl;
                break;
            case 3:
                cout << nestedcalcobj->mul() << endl;
                break;
            case 4:
                cout << nestedcalcobj->div() << endl;
                break;
            case 5:
                flag = false;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
        if (choice >= 1 && choice <= 4)
        {
            delete nestedcalcobj;
            delete calcobj;
        }
    }
    return 0;
}