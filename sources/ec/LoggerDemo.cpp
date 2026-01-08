// LoggerDemo.cpp by Ulrich Eisenecker, January 5, 2024

#include <iostream>
#include <string>
#include <cstdint> // Because of intmax_t

using namespace std;

constexpr bool loggingActive { false };

// Logger is for logging only
class Logger
{
   public:
      Logger(const string& name,const string& arguments = ""s):
         m_name { name },m_arguments { arguments }
      {
         if constexpr (loggingActive)
         {
            string indentation(++m_activeFunctions,'>');
            cout << indentation << ' '
                 << m_name << ' '
                 << m_arguments << endl;
         }
      }
      ~Logger()
      {
         if constexpr (loggingActive)
         {
            string indentation(m_activeFunctions--,'<');
            cout << indentation << ' '
                 << m_name << ' '
                 << m_arguments << endl;
         }
      }
   private:
      static inline size_t m_activeFunctions { 0 };
      const string m_name { },
                   m_arguments { };
};

intmax_t factorial(intmax_t n)
{
   Logger log { "factorial",to_string(n) };
   if (n == 0)
   {
      return 1;
   }
   else
   {
      return n * factorial(n - 1);
   }
}

int main()
{
   Logger log { "main"s };
   intmax_t n;
   cin >> n;
   cout << factorial(n) << endl;
}
