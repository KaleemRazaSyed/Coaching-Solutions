#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
  const float pi = 3.141592653;
  
  long double r;
  cin >> r;

  cout << fixed << setprecision(20);
  
  cout << r * r * pi << endl;
  //cout << pi << endl;

  //cout << fixed << setprecision(5);
  return 0;
}
