#include <iostream>
#include <iomanip>
using namespace std;
class a
{
    int a,b;
    public:

    void display()
    {
        cout << a << " " << b << endl;
    }
  
  
    void operator=(int x)
     {
       a=x/10;
       b=x%10;
    }
};

int main()
{   
    a t;
    t = 10;   
    t.display();
    return 0;
}