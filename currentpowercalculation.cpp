
#include <iostream>
using namespace std;

double circuitPower (double, double);

int main ()
{
  double volt, current, power;

  cout << "Enter voltage : ";
  cin >> volt;

  cout << "Enter current : ";
  cin >> current;

  power = circuitPower (volt, current);

  cout << "The circuit power is " << power << " watt." << endl;


  return 0;
}

double circuitPower (double x, double y)
{
  return x * y;
}
