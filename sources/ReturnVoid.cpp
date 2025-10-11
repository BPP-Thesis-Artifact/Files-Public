// ReturnVoid by Ulrich Eisenecker, April 8, 2021

#include <iostream>
#include <string> // because of string
#include <algorithm> // because of swap()
using namespace std;

void reverseString1(string & s)
{
   for (string::size_type i { 0 },
        l { s.length() }, 
        m { l  / 2 - 1 }; 
        i <= m; ++i)
   {
      swap(s.at(i),s.at(l - i - 1));
   }
}

int main()
{
   string someString { };
   cout << "String: "
        << flush;
   cin >> someString;
   reverseString1(someString);

   cout << "Reversed string = "
        << someString
        << endl;
}
