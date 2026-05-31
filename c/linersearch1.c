#include <stdio.h>
int main(){
    int arr[10];
    int n;
    int i;
    int a;
    int found = 0;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    printf("Enter the %d element for array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("\nWhat index you want to know out of these elements: ");
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if (arr[i]==a){
            printf("Found at index: %d",i);
            found = 1;
        }
    }
    if (found == 0){
        printf("The element is not in the array\n Try again.");
    }
    return 0;
}