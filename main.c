#include<stdio.h>
#include<string.h>
int main(){

         int b,i,n;
         char a[100];
         scanf("%d\n",&n);
         for(i=1;i<=n;i++){


         scanf("%s",&a);

                b=strlen(a);
         if(b>10){
        printf("%c%d%c\n",a[0],b-2,a[b-1]);

         }else{
            printf("%s\n",a);
         }
         }

return 0;

}
