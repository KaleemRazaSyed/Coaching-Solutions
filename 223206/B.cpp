#include<iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  if(n % 2 == 0 and n != 2) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
     
  
  /*
  if(n % 2 == 1 or n == 2) {
    cout << "NO\n";
  }
  else {
    cout << "YES\n";
  }
  */
  return 0;
}
