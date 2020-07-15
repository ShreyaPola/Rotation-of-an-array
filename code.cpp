/*
Rotate an array by d places in clockwise and anti-clockwise.
Solution-approach: reversal algorithm.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;cin>>s;
  int d;cin>>d;
  //rotate in clock-wise
  
  string s_clockwise=s;
  reverse(s_clockwise.begin(),s_clockwise.begin()+d);
  reverse(s_clockwise.begin()+d,s_clockwise.end());
  reverse(s_clockwise.begin(),s_clockwise.end());
  
  //rotate in anti-clockwise
  
  string s_anticlockwise=s;
  reverse(s_anticlockwise.begin(),s_anticlockwise.end());
  reverse(s_anticlockwise.begin(),s_anticlockwise.begin()+d);
  reverse(s_anticlockwise.begin()+d,s_anticlockwise.end());
  
  cout<<s_clockwise<<"\n"<<s_anticlockwise;
  return 0;
 }
