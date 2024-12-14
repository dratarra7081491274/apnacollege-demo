#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<5;i++)
 {
    for(int k=0;k<5-i;k++){
    printf(" ");
 }
    
for(j=0;j<2*i-1;j++){

    printf("*");
}
 for(int k=0;k<5-i;k++){
    printf(" ");
 }
 printf("\n");}
return 0;

}