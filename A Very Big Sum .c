#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(void){
    int n;
    long sum=0,value;
    scanf("%d",&n);
        for(int i=0;i<n;i++){
       scanf("%li",&value);
            sum+=value;
        }
    printf("%li",sum);
    
   return 0;
}
