#include<bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s;
  cout << s << endl;
	cin >> t;
	cout << t << endl;
  s = s + t; //連結
	cout << s << endl;
  s.length(); //長さ
  s[1];    //i番目の文字を参照
  s.substr(0, 3); //i番目以降k文字を抽出して得られる文字列
  s.find(t);  //sの中に文字列tがあればその先頭のアドレスを返す．なければs.nopsを返却
  s.replace(0, 3, t); //i番目以降k文字を文字列tで置換する．tを空文字列にすれば削除の動作
  s.insert(0, t); //i番目の文字の前に文字列tを挿入
}
