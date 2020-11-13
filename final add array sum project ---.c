#include <stdio.h>
#include <stdlib.h>

int b, k;
int summ(int nums[b]);
int main()
{
    b= 20;
    int nums[b];
    int x, result;
    int i, j, w, checker;
    w= 0;
    printf("please enter 20 nums : \n");
    for (i=0; i<20; i++){
        checker= 1;
        scanf("%d", &x);
        for (j=0; j<i; j++){
            if (x == nums[j]){
                checker= 0;
                b-= 1;
}           else{
                continue;
            }
            }
        if (checker == 1){
            nums[w]= x;
            w+= 1;
        }
        else{
            continue;
        }
        }
    for (k=0; k<b; k++){
        printf("%d\t", nums[k]);
    }

summ(nums);

    return 0;
}

int summ(int nums[b]){
    int sum;
    sum= 0;
    for (k=0; k<b; k++){
        sum+= nums[k];
    }
    printf("\nsum equals :%d", sum);

}







