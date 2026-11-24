#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    if (t<1 || t>9261)
    {
        return 0;
    }
    int c[t][3];
    for (int i=0; i < t; i++)
    {
        for (int j=0; j < 3; j++)
        {
            cin>>c[i][j];
            if (c[i][j]>20 || c[i][j]<0)
            {
                return 0;
            }
        }
    }
    for (int i=0; i < t; i++)
    {
        if (c[i][0]+c[i][1]==c[i][2] || c[i][0]+c[i][2]==c[i][1] || c[i][1]+c[i][2]==c[i][0])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}