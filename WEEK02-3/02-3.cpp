#include <iostream>

using namespace std;

int main()
{
    int a, b, maxx;
    cin >> a >> b;
    if (a > 2000000 || b > 2000000)
    {
        return 0;
    }
    else if (a > b)
    {
        maxx = a;
    }
    else
    {
        maxx = b;
    }
    for (int i = maxx; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
