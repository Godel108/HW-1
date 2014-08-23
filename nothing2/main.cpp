#include <iostream> 

using namespace std;

int main(int argc, char* argv[])
{
  cout<< "count="<< argc<< "\n";

  int i = 0;
  for (i = 0; i < 3; ++i)
    { 
      cout << "in the loop!" << endl;
      cout << "argv=" << argv[i] << "\n";
    }

  cout << "end" << endl;

  main(500, myarray);

  return 0;
}
