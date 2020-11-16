#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout.width(5);cout<<123<<endl;
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    cout.setf(ios::right,ios::adjustfield);
    cout<<0.12222<<endl;
    return 0;
}
