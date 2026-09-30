/*When the provided integer n is divisible by 3, print fizz. When the provided integer is divisible by 5, print buzz.
When it is divisible by both 3 and 5, print fizzbuzz. Otherwise print the integer.*/
#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter the number: ";
   cin >> n;
   
   if (n % 3 == 0 && n != 15)
   {
      cout << "fizz" << endl;
   }
   if (n % 5 == 0 && n != 15)
   {
      cout << "buzz" << endl;
   }
   if (n % 3 == 0 && n % 5 == 0)
   {
      cout << "fizzbuzz" << endl;
   }
   if (n % 3 > 0 && n % 5 > 0)
   {
      cout << n << endl;
   }

   return 0;
}
