#include <stdio.h>

int main(void){

    int a,x,y;

    printf("Input an integer");
    scanf("%d",&a);

    if(a==1){

        x=1;
        y=2;
    }
    else{
        x=-1;
        y=-2;
    }

    printf("x=%d, y=%d\n" ,x,y);
    return 0;
}