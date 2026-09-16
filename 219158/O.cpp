#include<iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  int a[2] = {};
  char op;
  int j = 0;
  for(int i = 0; i < s.size(); i++) {
    if('0'<= s[i] && s[i] <= '9')
      a[j] = (a[j] * 10) + s[i] - '0';
    else
      op = s[i], j++;
  }

  if(op == '+')
    cout << a[0] + a[1] << endl;
  else if(op == '-')
    cout << a[0] - a[1] << endl;
  else if(op == '*')
    cout << a[0] * a[1] << endl;
  else
    cout << a[0] / a[1] << endl;

  
  return 0;
}
