#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool validAnagram(string,string);
int main(){

string s = "anagram";
string t = "nagaram";

cout << validAnagram(s,t);
  return 0;
}
bool validAnagram(string s, string t){
  if(s.length() != t.length()) return false;

  unordered_map<char,int> ms,mt;
  for(int i = 0; i <s.length(); i++){
   ms[s[i]]++;
    mt[t[i]]++;  
  }
  for(auto x:s){
    if(ms[x] != mt[x]) return false;
  }
  return true;
  
}
  
 

//u1.insert(std::make_pair(key,val));
