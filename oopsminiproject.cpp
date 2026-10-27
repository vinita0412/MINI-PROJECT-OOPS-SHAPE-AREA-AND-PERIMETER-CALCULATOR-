//OOPS MINI PROJECT 
#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape
{
    float radius;

public:
    void getData()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void area()
    {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of Circle = "
             << 2 * 3.14 * radius << endl;
    }
};

class Rectangle : public Shape
{
    float length, breadth;

public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area()
    {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of Rectangle = "
             << 2 * (length + breadth) << endl;
    }
};

class Triangle : public Shape
{
    float a, b, c;

public:
    void getData()
    {
        cout << "Enter three sides: ";
        cin >> a >> b >> c;
    }

    void area()
    {
        float s = (a + b + c) / 2;
        float result = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area of Triangle = " << result << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of Triangle = "
             << a + b + c << endl;
    }
};

int main()
{
    int choice;
    Circle c;
    Rectangle r;
    Triangle t;
    Shape *s;

    cout << "----- Shape Calculator -----" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        c.getData();
        s = &c;
        break;

    case 2:
        r.getData();
        s = &r;
        break;

    case 3:
        t.getData();
        s = &t;
        break;

    default:
        cout << "Invalid choice!" << endl;
        return 0;
    }

    s->area();
    s->perimeter();

    return 0;
}
```

