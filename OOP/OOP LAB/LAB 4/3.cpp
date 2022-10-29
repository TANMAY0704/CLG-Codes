#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    inline void get()
    {
        cout << "\nEnter two numbers : ";
        cin >> a >> b;
    }
    void add();
    void product();
};
inline void test ::add()
{
    cout << "\nThe sum is " << a + b;
}
inline void test ::product()
{
    cout << "\nThe product is " << a * b;
}
int main()
{
    class test t;
    t.get();
    t.add();
    t.product();
}