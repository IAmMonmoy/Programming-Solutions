#include<iostream>

using namespace std;

int main(){

    int N=20;
    while((cin>>N) &&N){
        int i=0,v=0,x=0,l=0,c=0;
        for(int k=1;k<=N;k++)
        {
                int tens  = k/10;
                if(tens<4)       x+=tens;
                else if(tens==4) x++,l++;   
                else if(tens==9) x++,c++;   
                else             l++,x+=tens-5;
                int units = k%10;
                if(units<4)       i+=units;
                else if(units==4) i++,v++;  
                else if(units==9) i++,x++;  
                else   i+=units-5,v++;
        }
        cout<<N<<": "<<i<<" i, "<<v<<" v, "<<x<<" x, "<<l<<" l, "<<c<<" c"<<endl;
    }
    return 0;
}
