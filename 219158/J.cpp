#include<iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if(a % b == 0 or b % a == 0) {
    cout << "Multiples\n";
  } else {
    cout << "No Multiples\n";
  }
  return 0;
}

/*

  // clever way
  
  if(a % b != 0 and b % a != 0)
    cout << "No ";
  cout << "Multiples"
  
 */
