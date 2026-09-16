#include<iostream>

using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  int mi = min(min(A, B), C), mx = max(max(A, B), C);
  
  cout << mi << '\n' << A + B + C - mi - mx << '\n' << mx << "\n\n" << A << '\n' << B << '\n' << C << '\n';
  
  return 0;
}
