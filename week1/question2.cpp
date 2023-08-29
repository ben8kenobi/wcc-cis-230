// Q2 Review Selection IF/Else
//
// Using IF & IF/Else,
//
// Prompt the user to input 2 #'s, then determine and output
//
//   Which is larger, smaller or are they equal?
//
//   Is n1 divisible by n2? Is n2 divisible by n1?
//
//   What is the Sum, Difference, Product & Quotient?



#include <iostream>
using namespace std;



int main()
{
   int n1 = 0;
   int n2 = 0;



   // Prompt the user to input 2 #'s
   cout << "Please enter an integer: ";
   cin >> n1;

   cout << "Please enter a second integer: ";
   cin >> n2;

   cout << endl << "n1 = " << n1 << ", n2 = " << n2 << endl;



   // Which is larger, smaller or are they equal?
   if (n1 > n2)
      cout << "n1 is larger than n2." << endl;
   else if (n1 < n2)
      cout << "n1 is smaller than n2." << endl;
   else if (n1 == n2)
      cout << "n1 is equal to n2." << endl;



   // Is n1 divisible by n2?
   if ((n1 % n2) == 0)
      cout << "n1 is divisible by n2." << endl;
   else
      cout << "n1 is not divisible by n2." << endl;

   // Is n2 divisible by n1?
   if ((n2 % n1) == 0)
      cout << "n2 is divisible by n1." << endl;
   else
      cout << "n2 is not divisible by n1." << endl;



   // What is the Sum, Difference, Product & Quotient?
   cout << "Sum: " << (n1 + n2) << endl;
   cout << "n1 - n2 Difference: " << (n1 - n2) << endl;
   cout << "n2 - n1 Difference: " << (n2 - n1) << endl;
   cout << "Product: " << (n1 * n2) << endl;
   cout << "n1/n2 Quotient: " << (float) ((float) n1 / (float) n2) << endl;
   cout << "n2/n1 Quotient: " << (float) ((float) n2 / (float) n1) << endl;



   cout << endl << endl;
   return 0;
}
