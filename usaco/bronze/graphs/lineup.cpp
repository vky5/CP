#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
  freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
  int n;
  cin >> n;

  string names[8] = {"Beatrice", "Sue", "Belinda", "Bessie",
                     "Betsy", "Blue", "Bella", "Buttercup"};

  sort(names, names + 8);

  // for (auto x : names)
  //   cout << x << endl;

  map<string, vector<string>> adjList;

  for (int i = 0; i < n; i++)
  {
    string frm, to, trash;
    cin >> frm >> trash >> trash >> trash >> trash >> to;

    adjList[frm].push_back(to);
    adjList[to].push_back(frm);
  }

  map<string, bool> added;

  for (auto x: names){
    added[x]= false;
  }

  vector<string> order;

  // we are going in sequence because we need to print it in lexographiclly order
  for (int i = 0; i < 8; i++)
  {
    // here we are only dealing with names that are not added and whose adjacent lenght is either 0 or 1 we are not dealing with 2 here
    // the main reason I think why is because if someone's adj list lenght is 2 then their position in the sequence will be decided by its adjecent memebers.

    // so we cant predict where that will exist. that is my first intution 

    // second thing is if we have lenght 2 then let's say X is string that is lexographicially smaller then both of them

    // then X must have our current names[i] string and if it has another string as well then it will be order based on that string but then it is also possible that the other string is lexographically greater than 

    // the other string that was associated with names[i] that we first ignored.... let's see how it goes

    // okay I figured it out lets say it is Z the other string associated with names[i] 
    // so when the associations beings, then the 

    /*
      names[A] = {X, Y}
      names[X] = {A, Z}
      names[Y] = {A}
      now when it first check A then cuz leng = 2 then ignore then x same story

      then when it comes to Y then it will handle it effectively 

      and string will become

      Y A X Z
    */
    if (!added[names[i]] && adjList[names[i]].size()<=1){
      
      added[names[i]] = true;
      order.push_back(names[i]); // this is where Y was added
      // if the size is 0 then just do it and move on but if not then 

      if (adjList[names[i]].size()==1){
          
          string curr = adjList[names[i]][0]; // this is gonna be A
          while (adjList[curr].size()==2){
            added[curr] = true;
            order.push_back(curr); // this is where we added A now we need to find other element assocaited with A and add it to the list



            if (!added[adjList[curr][0]]){ // checking if X is icnluded or not 
              curr = adjList[curr][0];
            }else{ //same condition update the current and let it go on
              curr = adjList[curr][1];
            }
          }

          added[curr] = true;

          order.push_back(curr);

      }



    }
  }


  for (auto x: order){
    cout<<x<<endl;
  }
}