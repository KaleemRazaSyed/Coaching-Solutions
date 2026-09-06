#include<iostream>

using namespace std;

int main()
{
  char c;
  cin >> c;

  if(c == tolower(c)) {
    c = toupper(c);
  } else {
    c = tolower(c);
  }

  cout << c << endl;
    
  return 0;
}


// Another way
/*

  if(c <= 'Z') {
    c += 32;
  }
  else {
    c -= 32;
  }

  cout << c << endl;
  
  
  
 */
