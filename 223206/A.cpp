#include<iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  for(int i = 0; i < s.size(); i ++)
    {
      // i, s.size() - i - 1
      if(s[i] != '?') {
	if(s[s.size() - i - 1] == '?') {
	  s[s.size() - i - 1] = s[i];
	}
	else if(s[s.size() - i - 1] != s[i]) {
	  cout << "-1\n";
	  return 0;
	}
      }
      else {
       	if(s[s.size() - i - 1] != '?') { // != means not equals to
	  s[i] = s[s.size() - i - 1];
	}
	else {
	  s[i] = s[s.size() - i - 1] = 'a';
	}
	
      }
      
    }
  cout << s << endl;
  return 0;
}
