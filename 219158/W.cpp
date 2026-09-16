#include<iostream>

using namespace std;

int main()
{
  long long A, B, C;
  char S, Q;
  cin >> A >> S >> B >> Q >> C;
  
  int value;

  if(S == '+') {
    value = A + B;
  }
  else if(S == '-') {
    value = A - B;
  }
  else {
    value = A * B;
  }

  if(value == C) {
    cout << "Yes\n";
  }
  else {
    cout << value;
  }

  return 0;
}
