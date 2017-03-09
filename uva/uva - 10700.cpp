#include <bits/stdc++.h>
using namespace std;  
stack<long long>Min;  
stack<long long>Max;   
int main(){  
    int T;  
    scanf("%d",&T);  
    while(T--){  
        while(!Min.empty()) Min.pop();  
        while(!Max.empty()) Max.pop();  
  
        long long a, t;   
        char ch;  
        scanf("%lld",&a);  
        Min.push(a);  
        Max.push(a);  
        while((ch=getchar())!='\n'){  
            scanf("%lld",&a);  
            if(ch=='+'){  
                Min.push(a);  
                t = Max.top();  
                Max.pop();  
                t += a;  
                Max.push(t);  
            }  
            else if(ch=='*'){  
                Max.push(a);  
                t = Min.top();  
                Min.pop();  
                t *= a;  
                Min.push(t);  
            }  
        }  
        long long ans_min=0, ans_max=1;  
        while(!Min.empty()){  
            ans_min+=Min.top();  
            Min.pop();  
        }  
        while(!Max.empty()){  
            ans_max *= Max.top();  
            Max.pop();  
        }  
        printf("The maximum and minimum are %lld and %lld.\n",ans_max,ans_min);  
    }  
    return 0;  
}  
