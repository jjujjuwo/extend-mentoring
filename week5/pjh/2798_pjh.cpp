#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, sum = 0, absn;
    cin >> x >> y;
    int *array = new int[x];
    for (int l = 0; l < x; l++)
    {
        cin >> array[l];
    }
    for (int j = 0; j < x - 2; j++)
    {
        for (int k = j + 1; k < x - 1; k++)
        {
            for (int i = k+1; i < x; i++)
            {
                absn = array[j] + array[k] + array[i];
                if(absn <= y && absn>sum){
                    sum=absn;
                }
            }
        }
    }
    cout << sum;
    delete[] array;
}
