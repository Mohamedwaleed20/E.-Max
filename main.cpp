#include <iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    int x =0 ;
    while(n--)
    {
        int num ;
        cin >> num;
        x=max(x,num);
    }
    cout << x << endl;

    return 0;
}
