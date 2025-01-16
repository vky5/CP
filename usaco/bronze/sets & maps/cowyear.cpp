#include <bits/stdc++.h>
#include <map>
#include <string>
#include <vector>

using namespace std;

const vector<string> ZODIAC{"Ox",      "Tiger", "Rabbit", "Dragon",
                            "Snake",   "Horse", "Goat",   "Monkey",
                            "Rooster", "Dog",   "Pig",    "Rat"};

struct Relation {
  string name;
  int dir; // direction -1 for previous +1 for next
  int year;
  string relative;
};

int main(){
  int n;
  cin >> n;
  
  vector<Relation> relations(n);
  
  for (int i = 0; i<n; i++){
      string unused;
      string dir_str;
      string year;
      
      cin>>relations[i].name>>unused>>unused>>dir_str>>year>>unused>>unused>>relations[i].relative;
      
      relations[i].dir = (dir_str=="previous"?-1:1);
      
      relations[i].year = find(ZODIAC.begin(), ZODIAC.end(), year) - ZODIAC.begin();
      // in C++ subtracting two iterators gives us the distance between them
  }
  
  map<string, int> birthYears{{"Bessie", 0}};
  
  for (Relation r: relations){
      int year = birthYears[r.relative] + r.dir; 
      // so here we are assuming that the first relation will always be with bessie 
      // no it is written that it will be either bessie or cow mentioned above. 
      // here we make it 0 + 1 or 0 - 1 depending on direction
       
      
      
      // complete this question
      // 
      
      
      
  }

  return 0;
}
