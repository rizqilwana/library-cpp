//Input n and calculate the sum of all multiples of 3 or 5 (print out 5 data per line) between 1 and n

#include <iostream>
using namespace std;

int main() 
{
  int sum = 0, n;
  int count=0;
  cin >> n;
  for (int i = 1; i <= n; i++) 
  {
    if (i % 3 == 0 || i % 5 == 0) 
    {
      cout << i << '\t';
      count++;
      sum+=i;
      if (count % 5 == 0)
        cout << endl;
    }
  }
  cout << "\nsum=" << sum << endl;
}
