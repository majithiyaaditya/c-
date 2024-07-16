#include <iostream>
using namespace std;

namespace name1
{
    float x = 4.56;
    int m = 100;
    namespace name2
    {
        double y = 1.23;
    }
}
namespace name3
{
    int m = 200;
    int n = 300;
}

int main()
{
    using namespace name1;
    cout << "x = " << x << "\n";
    cout << "m = " << m << "\n";
    cout << "y = " << name2 ::y << "\n";
    // using name3 :: n;
    cout << "m = " << name3 ::m << "\n";
    cout << "n = " << name3 ::n << "\n";
    return 0;
}