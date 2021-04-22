#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  int N = s.size();

  long sum = 0;
  for (int bit = 0; bit < (1 << (N - 1)); bit++)
  {
    if (bit == 0)
    {
      sum += stol(s);
      continue;
    }

    int begin = 0;
    for (int i = 0; i < N - 1; i++)
    {
      // +があれば直前の+の後の数値をsumに足す
      if (bit & (1 << i))
      {
        string w = s.substr(begin, i - begin + 1);
        if (w != "")
        {
          sum += stoi(w);
          // cout << "sum" << sum << endl;
          begin = i + 1;
        }
      }
    }

    if (begin < N)
    {
      string w = s.substr(begin, N - begin);
      sum += stoi(w);
    }
  }

  cout << sum << endl;
}
