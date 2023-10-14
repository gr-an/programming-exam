#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
  string N; 

  ifstream file; 
  file.open("nnn.txt", ios_base::in); 
  
  file >> N;
  file.close();

  for (int i = 0; i < N.length(); ++i) {
    if (N[i] == '2') {
      cout << "True" << endl;
      return 0;
    }
  }
  cout << "False" << endl; 

  return 0;
}

