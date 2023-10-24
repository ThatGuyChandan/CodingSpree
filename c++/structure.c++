#include <iostream>
#include<string>
using namespace std;
int main(){
    struct{
        int i;
        string s;

    }myStructure;

    myStructure.i=10;
    myStructure.s="string";

    cout << myStructure.i << "\n";
  cout << myStructure.s  << "\n";
    return 0;
}