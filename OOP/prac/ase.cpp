#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    fstream out("abc.doc",ios::out|ios::app);
    
    out.put('a');
    out.close();
    ifstream in("abc.doc");
    char s[56];
    in.get(s[0]);
    in.get(s[0]);
    in.get(s[0]);in.get(s[0]);
    in.get(s[0]);in.get(s[0]);in.get(s[0]);
    cout<<g();
    cout << s[0] << endl;
    return 0;
}