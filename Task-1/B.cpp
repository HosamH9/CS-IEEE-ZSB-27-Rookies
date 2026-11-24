#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n][3];
    int count=0;
    if (n>1000 || n<1)
    {
        return 0;
    }
    for (int i=0; i < n; i++)
    {
        for (int j=0; j < 3; j++)
        {
            cin>>s[i][j];
            if (s[i][j]>1 || s[i][j]<0)
            {
                return 0;
            }
        }
    }
    for (int i=0; i < n; i++)
    {
        if (s[i][0]+s[i][1]+s[i][2]>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}