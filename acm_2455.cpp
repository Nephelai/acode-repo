#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int max_people = 0;
  int train = 0;
  for(int i = 0; i < 4; i++)
  {
      int p_in, p_out;
      cin >> p_out >> p_in;
      train += p_in;
      train -= p_out;
      
      if(max_people < train)
      {
          max_people = train;
      }
  }
  
  cout << max_people << endl;
  return 0;
}