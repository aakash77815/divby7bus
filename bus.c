#include <stdio.h>
 int main(){
     int num;
    scanf("%d",&num);
    if(num%7==0||num%10==7){
        printf("bus");
    }
    else{
        printf("none");
    }
}
