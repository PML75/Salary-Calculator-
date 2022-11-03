#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double ComputeToSalary(double hWage, double hWorked)
{
  double final;
  if (hWorked < 40)
  {
    final = hWage * hWorked;
  }
  else if (hWorked >= 40 && hWorked <= 65)
  {
    final = (hWage * 40) + (hWorked -40) * (hWage * 1.5);
  }
  else
  {
    final = (hWage * 40) + (hWage * 1.5) * 25 + (hWorked -65) * hWage * 2;
  }

  return final;
}
