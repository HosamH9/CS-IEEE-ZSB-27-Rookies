#include <iostream>
using namespace std;
int main(){
    string c="codeforeces";
    int t;
    cin>>t;
    if (t<1 || t>26)
    {
        return 0;
    }
    for (int i=0; i < t; i++)
    {
        char a;
        cin>>a;
        if (a<'a' || a>'z')
        {
            return 0;
        }
        if (c.find(a) != string::npos)
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