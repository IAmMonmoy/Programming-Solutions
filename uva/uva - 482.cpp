#include <iostream>
#include <cstdio>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a,index;
    string x,y,value;
    vector<pair<int,string> >mnmy;
    scanf("%d",&a);
    getchar();
    bool line = false;
    while(a--)
    {
       getchar();
        getline(cin,x);
        getline(cin,y);
        stringstream ss(x);
        stringstream ss1(y);
        while(ss>>index)
        {
            ss1>>value;
            mnmy.push_back(pair<int,string>(index,value));
        }
        sort(mnmy.begin(),mnmy.end());

        if(line == true)
            printf("\n");

        for(int i=0;i<mnmy.size();i++)
            cout<<mnmy[i].second<<endl;

        line = true;
        mnmy.clear();
    }
    return 0;
}
