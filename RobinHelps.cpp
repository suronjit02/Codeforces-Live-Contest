#include <iostream>
using namespace std;

int main()
{
    int taste_case;
    cin >> taste_case;

    for (int s = 1; s <= taste_case; s++)
    {
        int n, k;
        cin >> n >> k;

        int a[50];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int goldhave = 0, golddonate = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                goldhave += a[i];
            }
            if (a[i] == 0 && goldhave > 0)
            {

                golddonate++;
                goldhave--;
            }
        }
        cout << golddonate << endl;
    }

    return 0;
}
