#include <iostream>

using namespace std;

class Ship
{
protected:
    string shipName;
    string builtYear;

public:
    Ship() : shipName("unknown"), builtYear("January") {}

    Ship(string name, string year) : shipName(name), builtYear(year) {}

    virtual void Print() const
    {
        cout << "Ship Name : " << shipName << "\n"
             << "Built : " << builtYear << "\n";
    }
};

class CruiseShip : public Ship
{
private:
    int maxPassengers;

public:
    CruiseShip() : Ship(), maxPassengers(50) {}

    CruiseShip(string name, int maxNum) : Ship(name, "Unknown"), maxPassengers(maxNum) {}

    void Print() const override
    {
        cout << "Ship Name: " << shipName << "\n"
             << "Max Passengers allowed : " << maxPassengers << "\n";
    }
};

class CargoShipClass : public Ship
{
private:
    int capacity;

public:
    CargoShipClass() : Ship(), capacity(50) {}

    CargoShipClass(string name, int maxCapacity) : Ship(name, "Unknown"), capacity(maxCapacity) {}

    void Print() const override
    {
        cout << "Ship Name: " << shipName << "\n"
             << "Ship Capacity : " << capacity << "\n";
    }
};

int main()
{

    Ship *ships[3]{
        new Ship("Titanic", "july"),
        new CruiseShip("Diamond", 100),
        new CargoShipClass("Heer", 45)};

    for (int i = 0; i < 3; i++)
    {
        ships[i]->Print();
        cout << "-----------\n";
    }

    for (int i = 0; i < 3; i++)
    {
        delete ships[i];
    }

    return 0;
}