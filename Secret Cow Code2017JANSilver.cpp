#include<cstdio>
#include<cstring>
#define MN 30
using namespace std;
char ch[MN];
long long n;
long long i;
int num;
int main(){
    freopen("code.in","r",stdin);
    freopen("code.out","w",stdout);
    scanf("%s",ch);
    scanf("%lld",&n);
    num=strlen(ch);
    while(n>num){
        i=num;
        while(n>(i<<1))i<<=1;
        n-=(i+1);
        if(n==0)n=i;    
    }
    printf("%c\n",ch[n-1]);
    fclose(stdin);
    fclose(stdout);
}
