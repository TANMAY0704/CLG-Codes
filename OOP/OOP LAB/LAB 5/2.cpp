#include <iostream>
#include <iomanip>
using namespace std;
class test
{
    int n, s;
public:
    test(int k)
    {
        s = k;
    }
    void initialize()
    {
        cout << "Enter the last number : ";
        cin >> n;
    }
    void display()
    {
        cout << "The sum : " << s;
    }
    void calc();
};
void test ::calc()
{
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
}
int main()
{
    int p;
    cout << "Enter the deafault value : ";
    cin >> p;
    test ob(p);
    ob.initialize();
    ob.calc();
    ob.display();
}