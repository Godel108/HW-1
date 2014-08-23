#include <iostream> 

using namespace std;

class stat
{
public:
  int last;
  void last_number(int num){
     last= num;
  }

  int count;
  void count_seq(){
  }

  int sum;
  void sum(){
  }

  int mean;
  void mean(){
  sum of nums divided by the length
  }

  int smallest;
  void smallest(){
  }

  int largest;
  void largest(){
  }

  

};



int main(int argc, char* argv[])
{
  stat s;
  cout<< s.last << endl;
  s.last_number(5);
  cout<< s.last << endl;

  cout<< "count="<< argc<< "\n";
  cout << "end" << endl;


  return 0;
}
