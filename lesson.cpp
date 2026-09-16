/*#include<iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  for(int x = 0; x < t; x++) { 

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i ++) {
      cin >> a[i];
    }

    
    for(int i = 0; i < n; i ++) { // start of the subarray

      int mx = -1'000'000; // write any value <= -10^5 
      for(int j = i; j < n; j++) { // end of the subarray
	mx = max(mx, a[j]);
	cout << mx << ' ';
      }
    }
    cout << endl;
    
    /*
    for(int l = 1; l <= n; l++) { // fix the length
      for(int i = 0; i + l -1 < n; i++) { // fix the first point
	int mx = -1'000'000;
	for(int j = i; j <= i + l - 1; j++) {
	  mx = max(mx, a[j]);
	}

	cout << mx << ' ';
	
      }
    }
    */
  }
  return 0;
} // index

*/

#include<iostream>

using namespace std;

int main()
{
  int n;
  cin >> n; // 1 value

  int odd = 0, even = 0, pos = 0, neg = 0;
  
  for(int i = 0; i < n; i ++) // n values
    {
      int x;
      cin >> x; // 1 value

      if(x % 2 == 0) {
	even += 1;
      }
      else {
	odd += 1;
      }

      if(x > 0) {
	pos += 1;
      }
      else if(x < 0) {
	neg += 1;
      }
      
    }

  cout << "Even: " << even << endl;
  
  return 0;
}
