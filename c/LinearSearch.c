#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,};
    int n;
    int i;
    int found = 0;
    printf("the elements are: 1,2,3,4,5,6 \n");
    printf("what element are u looking for: ");
    scanf("%d",&n);
    for (i=0;i<6;i++){
        if (arr[i]==n){
            printf("your element found at inder: %d\n",i);
            found = 1;
        }
    }
    if (found == 0){
        printf("element not found\ntry again");
    }
    return 0;

}