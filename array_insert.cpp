#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  cin >> n;
  int a[20];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int pos;
  cin >> pos;
  int num;
  cin >> num;
  if (pos > n)
  {
    cout << "Invalid Input";
    return 0;
  }

  for (int j = n - 1; j >= pos - 1; j--)
  {
    a[j + 1] = a[j];
  }
  a[pos - 1] = num;

  cout << "Array after insertion is" << endl;
  for (int i = 0; i < n + 1; i++)
  {
    cout << a[i] << endl;
  }

  return 0;
}
