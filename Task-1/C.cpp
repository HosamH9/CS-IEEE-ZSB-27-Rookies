#include <iostream>
using namespace std;
int main(){
    int t;
    int r;
    cin>>t;
    if (t>10000 || t<1)
    {
        return 0;
    }

    for(int i=0; i<t;i++)
    {
        cin>>r;
        if (r<-5000 || r>5000)
        {
            return 0;
        }
        if (r<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if (r<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if (r<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if (r>=1900)
        {
            cout<<"Division 1"<<endl;
        }
    }
    return 0;
}