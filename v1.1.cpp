#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter the number: ";
   cin >> n;

   bool fizz = n % 3 == 0;
   bool buzz = n % 5 == 0;

   if (fizz == true)
   {
      cout << "fizz";
   }
   if (buzz == true)
   {
      cout << "buzz";
   }
   if (fizz != true && buzz != true)
   {
      cout << n;
   }

   cout << endl;

   return 0;
}
