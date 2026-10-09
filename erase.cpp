#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main(){

   vector<int> vec={1,2,3,4,5};
   // if we want to remove any value from vec
   // lets suppose we want to remove 1 
   vec.erase(vec.begin());
   // if we want to remove 3 begin +1 goes at 2 and again +1 goes to 3 so
   vec.erase(vec.begin()+1);

   for(int val :vec){
    cout<<val<<" ";
   }
}