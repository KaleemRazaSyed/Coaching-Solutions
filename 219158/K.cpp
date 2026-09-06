#include<iostream>

using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if(a > b) {
    swap(a, b);
  }

  if(a > c) {
    swap(a, c);
  }

  // now a is the min value

  if(b > c) {
    swap(b, c);
  }
  // c is the max value

  cout << a << ' ' << c << endl;
  
  return 0;
}

// clever way: cout << min(min(a, b), c) << ' ' << max(a, max(b, c)) << endl;
