// vytvor tabulku z hviezdiciek
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int stlpce, riadky,dokopydefault;
    cout<<"Zadaj pocet stlpcov"<<endl;
    cin>>stlpce;
    cout<<"Zadaj pocet riadkov"<<endl;
    cin>>riadky;
    dokopydefault=riadky+stlpce;
    for (int j=1; j<=riadky; j++)
    {
        cout<<"\n";
        for(int i=1; (i<=stlpce); i++)
        {
            cout<<"*";
        }

    }

    return 0;
}
