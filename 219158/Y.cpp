#include<iostream>

using namespace std;

int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  A %= 100;
  B %= 100;
  C %= 100;
  D %= 100;

  int res = (A * B * C * D) % 100;

  if(res < 10) {
    cout << 0 << res << endl;
  } else {
    cout << res << endl;
  }
  
  return 0;
}
