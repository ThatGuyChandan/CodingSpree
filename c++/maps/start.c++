#include <iostream>
#include<map>
using namespace std;

int main(){
    map<int,int> mymap;
    mymap[1]=2;
    mymap[2]=3;
    mymap[3]=4;
    mymap[4]=4;
    
    for(int x=1;x<=mymap.size();x++){
        cout<<mymap[x]<<"\n";
    }
    for(auto x=mymap.begin();x!=mymap.end();x++){
        cout<<x->first<<"-->";
        cout<<x->second<<"\n";
    }

}