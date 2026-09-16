#include<iostream>

using namespace std;

int main()
{
  int x, y;
  char c;
  cin >> x >> c >> y;

  bool evaluation;

  if(c == '>') {
    evaluation = (x > y);
  }
  else if(c == '<') {
    evaluation = (x < y);
  }
  else {
    evaluation = (x == y);
  }

  if(evaluation) {
    cout << "Right\n";
  }
  else {
    cout << "Wrong\n";
  }
  return 0;
}
