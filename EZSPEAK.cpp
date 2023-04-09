/*
Solved on 9 Apr by Karim Elmasry
CodeChef username: karimelmasry42
https://www.codechef.com/problems/EZSPEAK
Easy Pronunciation
Code: EZSPEAK
Contest Code: LTIME110
Difficulty Rating:  1000

Words that contain many consecutive consonants, like "schtschurowskia", are
generally considered somewhat hard to pronounce. We say that a word is hard to
pronounce if it contains 4 or more consonants in a row; otherwise it is easy to
pronounce. For example, "apple" and "polish" are easy to pronounce, but
"schtschurowskia" is hard to pronounce.

You are given a string S consisting of N lowercase Latin characters. Determine
whether it is easy to pronounce or not based on the rule above — print YES if it
is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and
the consonants are the other 21 characters.

Input Format
The first line of input will contain a single integer T, denoting the number of
test cases. Each test case consists of two lines of input. The first line of
each test case contains a single integer N, the length of string S. The second
line of each test case contains the string S.

Output Format
For each test case, output on a new line the answer — YES if S is easy to
pronounce, and NO otherwise. Each character of the output may be printed in
either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS
will all be treated as identical.
*/
#include <bits/stdc++.h>
using namespace std;
bool is_in(char ch, vector<char> vowels) {
  bool is_vowel = false;
  for (char vowel : vowels) {
    if (ch == vowel) {
      is_vowel = true;
      break;
    }
  }
  return is_vowel;
}

int main() {
  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    for (char ch : s) {
      bool is_vowel = is_in(ch, vowels);
      if (is_vowel)
        count = 0;
      else
        count++;

      if (count >= 4) {
        cout << "NO" << endl;
        break;
      }
    }
    if (count < 4)
      cout << "YES" << endl;
  }

  return 0;
}