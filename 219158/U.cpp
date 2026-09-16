#include<iostream>

using namespace std;

int main()
{
  double x;
  cin >> x;
  int y = x;

  if(x == y) {
    cout << "int " << y << endl;
  }
  else {
    cout << "float " << y << ' ' << x - y << endl;
  }
  return 0;
}
