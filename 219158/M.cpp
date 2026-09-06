#include<iostream>

using namespace std;

int main()
{
  char X;
  cin >> X;

  if(isdigit(X)) {
    cout << "IS DIGIT\n";
  }
  else
    {
      cout << "ALPHA\n";

      if(X == toupper(X)) {
	cout << "IS CAPITAL\n";
      }
      else {
	cout << "IS SMALL\n";
      }
    }
  return 0;
}
