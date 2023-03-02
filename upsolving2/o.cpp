#include <iostream>
using namespace std;
int main()
{
    int max = 0, cnt = 1;
    char substring;
    string a;
    cin >> a;
    if (a.size() == 1)
    {
        cout << a << " " << cnt;
        return 0;
    }
    
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == a[i + 1])
        {
            cnt++;
            if (max < cnt)
            {
                max = cnt;
                substring = a[i];
            }
            
        }
        else cnt = 1;
    }
    cout << substring << " " << max;
}