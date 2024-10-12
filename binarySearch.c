#include<stdio.h>

int binarySearch(int arr[], int size, int target){
    int left = 0, right = size - 1;
    while(left <= right){
        int mid = left + (right - left)/2;

        if (arr[mid] == target){
            return mid;
        }

        // ignore the left half
        if (arr[mid] < target){
            left = mid+1;
        }

        //iignore the right half
        if (arr[mid] > target){
            right = mid-1;
        }

    }

    return -1;  //return -1 if target is not found
}
int main(){
int arr[]={1,3,4,7,9};
int target = 7;
int size = sizeof(arr)/sizeof(arr[0]);

int result = binarySearch(arr, size, target);
if (result != -1){
    printf("element found at index %d", result);
}else{
    printf("element not found");
}
return 0;
}

/*
Output:
element found at index 3
*/