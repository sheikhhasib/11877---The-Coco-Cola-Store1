#include<stdio.h>
int main(){
    int n,sum;
    while(scanf("%d",&n)== 1){
        if(n == 0) break;
        sum = 0;
        while(n>2){
            sum = sum+n/3;
            n = n/3 + n%3;
        }
        if(n==2){
            sum++;
        }else{
            sum;
        }
        printf("%d\n",sum);
    }
    return  0;
}
