
#include <bits/stdc++.h>

using namespace std;

struct compare
{
	bool operator()(const int &i,const int &j){

		return i>j;
	}
	
};
int main(int argc, char const *argv[])
{
 
  priority_queue<int,vector<int>,std::greater<int> >  mypq;


  mypq.push(30);
  mypq.push(100);
  mypq.push(25);
  mypq.push(40);

  std::cout << "Popping out elements...";
  while (!mypq.empty())
  {
     std::cout << ' ' << mypq.top();
     mypq.pop();
  }
  std::cout << '\n';

  return 0;
	return 0;
}