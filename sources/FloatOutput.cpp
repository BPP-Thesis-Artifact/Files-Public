// FloatOutput by Ulrich Eisenecker, November 2,2021

#include <iomanip> // because of setprecision
#include <iostream> // implicitly includes <ios>
using namespace std;

int main()
{
   double d { };
   cout << "Formatting floating point values\n"
        << "Enter 42.0 to terminate program.\n" 
        << endl;
   do
   {
      cin >> d;
      cout << "default: " << d << endl
           << "scientific: " 
           << scientific << d << endl
           << "fixed: "
           << fixed << d << endl
           << "setprecision(20): "
           << setprecision(20)
           << d << endl
           << "hexfloat: " 
           << hexfloat << d << endl
           << "defaultfloat: "
           << defaultfloat << d << endl;
   } while (d != 42.0);
}
