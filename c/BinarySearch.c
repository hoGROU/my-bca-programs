#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int low = 0, high = 5-1;
    int mid;
    int found = 0;
    int n;
    printf("The elements are: 1,2,3,4,5\n");
    printf("Search element: ");
    scanf("%d",&n);
    while (low <= high){
        mid = (low + high)/2;
        if (arr[mid]==n){
            printf("Found at index: %d",mid);
            found = 1;
            break;
        }
        if (n<arr[mid]){
            high = mid-1;
        }
        if (n>arr[mid]){
            low = mid+1;
        }
    }
    if (found == 0){
        printf("Element not found\nTry again");
    }
    return 0;
}