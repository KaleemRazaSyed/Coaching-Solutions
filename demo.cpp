#include<iostream>
#include<cmath>

using namespace std;


/*
  // parameters

  Datatype FunctionName(Datatype Nickname1, Datatype Nickname2, ...)

  int fun(int x1, int y1, int x2, int y2) {
  
  }

 */

double Square(double x) {
  return x * x;
}

double distance(double x1, double x2, double y1, double y2) {

   double dx = x1 - x2;
   double dy = y1 - y2;
   double d = sqrt(Square(dx) + Square(dy));

   return d;

   // code
}


int main()
{

  int n;
  cin >> n;

  double x1, y1;
  cin >> x1 >> y1;

  double x[n], y[n]; // i-th (x[i], y[i])

  for(int i = 0; i < n; i ++) {
      cin >> x[i] >> y[i];
  }

  // Min distance
  
  double mi = 30'000;
  for(int i = 0; i < n; i ++) {
    mi = min(mi, distance(x[i], x1, y[i], y1));
  }
  
  // Max Distance
  double mx = 0;
   for(int i = 0; i < n; i ++) {
     mx = max(mx, distance(x1, x[i], y1, y[i]));
   }

   cout << mi << ' ' << mx << endl;

  
  /* cout << ((int)'0' == 0) << endl; 
  cout << (int)'0' << endl; // '' , ""

  if('3' == '3')
    cout << "Wola this works\n";

  
  char c = '5';
  int y = c - '0';
  
  int x = stoll("787832");

  string s;
  cin >> s;

  x = stoll(s);
  
  cout << x << ' ' << stoi("23902") << endl;

  string s = to_string(x);
  
  // c should be a digit

  string s = "a";

  
  char c;
  cin >> c;

  s = '0';

  cout << s << endl;
  
  int x = c - '0';
  cout << (int)c * 5 << endl;
  
  // print digit * 5

  // 'A' - '0' -> 65 - 48 = 17 * 5 = 85
  */
  return 0;
}
#include<iostream>
 
using namespace std;
 
int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;
 
  cout << "Difference = " << 1ll * A * B - (long long)C * D << endl;
  return 0;
}
