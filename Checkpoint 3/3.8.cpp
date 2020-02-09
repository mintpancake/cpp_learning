#include <iostream>
using namespace std;

int main()
{
  double weight = 0.0, height = 0.0, bmi = 0.0;
  cin >> weight >> height;
  bmi = weight / (height * height);
  cout << "Your BMI = " << bmi << endl;
  cout << "BMI VALUES" << endl;
  cout << "Underweight: less than 18.5" << endl;
  cout << "Normal: between 18.5 and 24.9" << endl;
  cout << "Overweight: between 25 and 29.9" << endl;
  cout << "Obese: 30 or greater" << endl;
  return 0;
}
