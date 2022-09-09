#include "square.h"
#include "rectangle.h"
#include "triangle.h"

int main(void)
{
    int ch;
    do
    {
        // code
        cout << "===== MENU =====\n1. Square\n2. Rectangle\n3. Triangle\n4. Exit\n\n\tEnter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\tEnter side value: ";
            double side;
            cin >> side;
            {
                Square square(side);
                cout << endl;
                square.print();
                cout << "Area: " << square.getArea() << endl;
                cout << "Perimeter: " << square.getPerimeter() << endl << endl;
            }
            break;
        case 2:
            cout << "\n\tEnter length value: ";
            double length;
            cin >> length;
            cout << "\tEnter width value: ";
            double width;
            cin >> width;
            {
                Rectangle rectangle(length, width);
                cout << endl;
                rectangle.print();
                cout << "Area: " << rectangle.getArea() << endl;
                cout << "Perimeter: " << rectangle.getPerimeter() << endl << endl;
            }
            break;
        case 3:
            cout << "\n\tEnter first side value: ";
            double side1;
            cin >> side1;
            cout << "\tEnter second side value: ";
            double side2;
            cin >> side2;
            cout << "\tEnter third side value: ";
            double side3;
            cin >> side3;
            {
                Triangle triangle(side1, side2, side3);
                cout << endl;
                triangle.print();
                cout << "Area: " << triangle.getArea() << endl;
                cout << "Perimeter: " << triangle.getPerimeter() << endl << endl;
            }
            break;
        case 4:
            cout << "\nTerminating..." << endl;
            break;
        default:
            cout << "\nInvalid choice!" << endl << endl;
        }
    } while (ch != 4);
    return 0;
}