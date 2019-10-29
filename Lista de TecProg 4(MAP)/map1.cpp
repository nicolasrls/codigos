#include <map>
#include <iostream>

using namespace std;

int main()
{

   map<int, int> multip;

   multip[1] = (1 * 1);
   multip[2] = (2 * 2);
   multip[3] = (3 * 3);
   multip[4] = (4 * 4);
   multip[5] = (5 * 5);

   for(auto& elemento: multip){
   cout << "{"<< elemento.first << ": " << elemento.second << "}"<<endl;

}
   return 0;
}
