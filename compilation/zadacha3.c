#include <stdio.h>

int main()
{
    int arr[] = {5, 6, 2, 3, 4, 1};
    int arrlen = 7;

    #ifdef _WIN32
    for(int i = 0; i < arrlen; i++){
        for(int j = 0; j < arrlen - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
            }
        }
    }
    #elif defined __linux__
    for(int i=0; i < arrlen; i++){
        int min = i;
        for(int j = i + 1; j < arrlen; j++){
            if(arr[j] < arr[min]){
                min = j;
            } 
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
            
    }
    #elif defined __APPLE_
    for (int i = 1; i < arrlen; i++) {
        int k = arr[i];
        int j = i;
        while (j > 0 && arr[j - 1] >= k) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = k;
    }
    #else
    for (int i = 0; i < arrlen; i++) {
        int j = arrlen - 1 - i;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }

    
    #endif
    for(int i = 0; i < arrlen; i++){
       printf("%d", arr[i]); 
    }
    
    return 0;
}