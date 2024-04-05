#include <iostream>
#include <fstream>
using namespace std;

class City
{
    private:
        int no_of_cities;
        string *city_name;
        float *max_temp;
        float *min_temp;
    public:
        City(int);
        ~City();
        void input();
        void sort(char);
        friend void display(City &);
};

City :: City(int n)
    : no_of_cities(n)
{
    city_name = (string *) malloc(no_of_cities * sizeof(string));
    max_temp = (float *) malloc(n * sizeof(float));
    min_temp = (float *) malloc(n * sizeof(float));
}

City :: ~City()
{
    free(city_name);
    free(max_temp);
    free(min_temp);
}

void City :: input()
{
    cout << "Enter details of cities:" << endl;
    for (int i = 0; i < no_of_cities; i++)
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter name of city " << i + 1 << ": ";
        cin >> city_name[i];
        cout << "Enter maximum temperature of city " << i + 1 << ": ";
        cin >> max_temp[i];
        cout << "Enter minimum temperature of city " << i + 1 << ": ";
        cin >> min_temp[i];
    }
}

void City :: sort(char ch)
{
    if (ch == 'a')
    {
        for (int i = 0; i < no_of_cities - 1; i++)
            for (int j = 0; j < no_of_cities - i - 1; j++)
                if (city_name[j] > city_name[j + 1])
                {
                    string tcity = city_name[j];
                    city_name[j] = city_name[j + 1];
                    city_name[j + 1] = tcity;
                    int tmax = max_temp[j];
                    max_temp[j] = max_temp[j + 1];
                    max_temp[j + 1] = tmax;
                    int tmin = min_temp[j];
                    min_temp[j] = min_temp[j + 1];
                    min_temp[j + 1] = tmin;

                }
    }
    else if (ch == 'm')
    {
        for (int i = 0; i < no_of_cities - 1; i++)
            for (int j = 0; j < no_of_cities - i - 1; j++)
                if (min_temp[j] > min_temp[j + 1])
                {
                    string tcity = city_name[j];
                    city_name[j] = city_name[j + 1];
                    city_name[j + 1] = tcity;
                    int tmax = max_temp[j];
                    max_temp[j] = max_temp[j + 1];
                    max_temp[j + 1] = tmax;
                    int tmin = min_temp[j];
                    min_temp[j] = min_temp[j + 1];
                    min_temp[j + 1] = tmin;

                }
    }
    else if (ch == 'x')
    {
        for (int i = 0; i < no_of_cities - 1; i++)
            for (int j = 0; j < no_of_cities - i - 1; j++)
                if (max_temp[j] > max_temp[j + 1])
                {
                    string tcity = city_name[j];
                    city_name[j] = city_name[j + 1];
                    city_name[j + 1] = tcity;
                    int tmax = max_temp[j];
                    max_temp[j] = max_temp[j + 1];
                    max_temp[j + 1] = tmax;
                    int tmin = min_temp[j];
                    min_temp[j] = min_temp[j + 1];
                    min_temp[j + 1] = tmin;

                }
    }
}

void display(City &city)
{
    cout << "City Name\tMaximum Temperature\tMinimum Temperature" << endl;
    for (int i = 0; i < city.no_of_cities; i++)
        cout << city.city_name[i] << "\t\t\t" << city.max_temp[i] << "\t\t\t" << city.min_temp[i] << endl;
}

int main()
{
    int n, ch; bool flag = true; char code;
    string menu[] = {"1. Input City Information", "2. Display City Information", "3. Sort City Information", "4. Save to File", "5. Read from File", "6. Exit"};
    int size = sizeof(menu) / sizeof(menu[0]);
    cout << "Enter the number of cities: ";
    cin >> n;
    City cityobj(n);
    ifstream in; ofstream out;
    while (flag)
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "========== MENU ==========" << endl;
        for (int i = 0; i < size; i++)
            cout << menu[i] << endl;
        cout << "Enter choice: ";
        cin >> ch;
        switch(ch)
        {
            case 1:
                cityobj.input();
                break;
            case 2:
                display(cityobj);
                break;
            case 3:
                cout << "Enter 'a' to sort alphabetically, 'm' to sort with respect to minimum temperature or 'x' to sort with respect to maximum temperature." << endl;
                cout << "Enter code [a/m/x]: ";
                cin >> code;
                cityobj.sort(code);
                break;
            case 4:
                out.open("city.bin", ios::app);
                if (!out)
                {
                    cout << "Cannot open file!" << endl;
                    return 1;
                }
                out.write((char *) &cityobj, sizeof(cityobj));
                out.close();
                cout << "Saved successfully!" << endl;
                break;
            case 5:
                in.open("city.bin", ios::in);
                in.seekg(0);
                if (!in)
                {
                    cout << "Cannot open file!" << endl;
                    return 1;
                }
                in.read((char *) &cityobj, sizeof(cityobj));
                display(cityobj);
                in.close();
                cout << "Read successfully!" << endl;
                break;
            case 6:
                flag = false;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}