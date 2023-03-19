#include <iostream>
#include <string>
using namespace std;
namespace color
{
    void red(string text)
    {
       cout << "\x1B[31m" + text << "\x1B[0m";
    }
 
    void green(string text)
    {
       cout << "\x1B[32m" << text << "\x1B[0m";
    }
 
    void yellow(string text)
    {
        cout << "\x1B[33m" << text << "\x1B[0m";
       
    }
 
    void blue(string text)
    {
        cout << "\x1B[34m" << text << "\x1B[0m";
    }
 
    void purple(string text)
    {
        cout << "\x1B[35m" << text << "\x1B[0m";
    }
 
    void cyan(string text)
    {
      cout << "\x1B[36m" << text << "\x1B[0m";
    }
    void orange(string text)
    {
         cout<<"\x1b[91m"<<text<<"\x1b[0m";
    }
}
 
int main() {
	color::blue("blue\n");
	color::cyan("cyan\n");
	color::green("green\n");
	color::purple("purple\n");
	color::red("red\n");
	color::yellow("yellow\n");
    color::orange("Orange\n");
 
	return 0;
}