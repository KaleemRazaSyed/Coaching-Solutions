#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  double A, B, C, D;
  cin >> A >> B >> C >> D;

  if(B * log2(A) > D * log2(C)) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}
