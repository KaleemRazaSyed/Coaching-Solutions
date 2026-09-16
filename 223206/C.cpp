#include<iostream>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int A = 0, B = 0;

  for(int i = 0; i < n; i ++) {
    int x;
    cin >> x;
    A += x; // A = A + x;
  }

  // A = A + x
  
  for(int i = 0; i < m; i++) {
    int x;
    cin >> x;
    B += x;
  }

  if(A == B) {
    cout << "Yes\n";
  }
  else {
    cout << "No\n";
  }
    
  return 0;
}
