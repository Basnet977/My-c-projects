#include <iostream>
#include <numbers>
using namespace std;

class BasicShape
{
private:
    double area;

protected:
    void setArea(double newArea) { area = newArea; }

public:
    BasicShape() : area(0) {} // default constructor

    double getArea() const
    {
        return area;
    }
    virtual double calcArea() = 0;

    void Print() const { cout << "Area : " << area << endl; }

    ~BasicShape() {} // destructor
};

class Circle : public BasicShape
{
private:
    long int xCoordinate;
    long int yCoordinate;
    double radius;

public:
    Circle(long int x, long int y, double r) : xCoordinate(x), yCoordinate(y), radius(r)
    {
        calcArea();
    }

    long int getCenterX() { return xCoordinate; }
    long int getCenterY() { return yCoordinate; }

    double calcArea() override
    {
        double calculateArea = numbers::pi * (radius * radius);
        setArea(calculateArea);
        return calculateArea;
    }
};

class Rectangle : public BasicShape
{
private:
    long int width;
    long int length;

public:
    Rectangle(long int w, long int l) : width(w), length(l)
    {
        calcArea();
    }
    long int getWidth() { return width; }
    long int getLength() { return length; }

    double calcArea()
    {
        double calculateAreaRectangle = width * length;
        setArea(calculateAreaRectangle);
        return calculateAreaRectangle;
    }
};

int main()
{
    Circle circle(3, 2, 4);
    Rectangle rectangle(2, 6);

    cout << "Circle Area" << endl;
    circle.Print();
    cout << "----------------\n";
    cout << "Rectangle Area" << endl;
    rectangle.Print();
    return 0;
}