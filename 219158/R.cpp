#include<iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;
  cout << N / 365 << " years\n";
  N %= 365;
  cout << N / 30 << " months\n";
  N %= 30;
  cout << N << " days\n";
  return 0;
}
