#include <iomanip>
#include <iostream>
#include "salary.h"

using namespace std;
int main() {
  double hWage;
  double hWorked;
  
  cout << "Hourly wage: ";
  cin >> hWage;
  cout << "Hours worked: ";
  cin >> hWorked;

  if (hWage >= 0 && hWorked>= 0)
  {
    double money = ComputeToSalary(hWage, hWorked);
    cout << fixed << setprecision(2) << "Total Salary Owed: $"<< money;
  }
  else
  {
    cout << "Invalid input";
  }

  return 0;
}
