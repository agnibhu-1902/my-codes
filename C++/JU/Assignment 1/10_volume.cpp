#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#define CHOICES 6

using namespace std;

class Volume
{
    public:
        static float volume(int);
        static float volume(float);
        static float volume(float, float);
        static float volume(float, int);
        static float volume(float, float, float);
};

float Volume :: volume(int radius)
{
    return 4 / (float) 3 * M_PI * pow(radius, 3);
}

float Volume :: volume(float size)
{
    return pow(size, 3);
}

float Volume :: volume(float radius, float height)
{
    return 1 / (float) 3 * M_PI * pow(radius, 2) * height;
}

float Volume :: volume(float radius, int height)
{
    return M_PI * pow(radius, 2) * height;   
}

float Volume :: volume(float length, float breadth, float height)
{
    return length * breadth * height;
}

int main()
{
    int choice; float length, breadth, height, radius; bool flag = true;
    string menu[] = {"1. Volume of cube", "2. Volume of cuboid", "3. Volume of cone", "4. Volume of cylinder", "5. Volume of sphere", "6. Exit"};
    cout << setprecision(2) << fixed;
    while(flag)
    {
        cout << "========== MENU ==========" << endl;
        for (int i = 0; i < CHOICES; i++)
            cout << menu[i] << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter size of the cube: ";
                cin >> length;
                cout << "Volume: " << Volume :: volume(length) << endl;
                break;
            case 2:
                cout << "Enter length, breadth & height of the cuboid: ";
                cin >> length >> breadth >> height;
                cout << "Volume: " << Volume :: volume(length, breadth, height) << endl;
                break;
            case 3:
                cout << "Enter radius & height of the cone: ";
                cin >> radius >> height;
                cout << "Volume: " << Volume :: volume(radius, height) << endl;
                break;
            case 4:
                cout << "Enter radius & height of the cylinder: ";
                cin >> radius >> height;
                cout << "Volume: " << Volume :: volume(radius, (int) height) << endl;
                break;
            case 5:
                cout << "Enter radius of the sphere: ";
                cin >> radius;
                cout << "Volume: " << Volume :: volume((int) radius) << endl;
                break;
            case 6:
                cout << "Terminating..." << endl;
                flag = false;
                break;
            default:
                cout << "Invalid choice. Try again!" << endl;
        }
    }
    return 0;
}