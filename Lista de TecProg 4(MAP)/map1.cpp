#include <map>
#include <iostream>

using namespace std;

int main()
{

   int n;
   map<int, int> qdd;

   cout << "Insira um valor: " << endl;
   cin >> n;

   for (int i = 1; i <= n; i++)
   {
      qdd[i] = i * i;
   }

   for (auto &elemento : qdd)
   {
      cout << "{" << elemento.first << ": " << elemento.second << "}" << endl;
   }
   return 0;
}
