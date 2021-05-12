#include <iostream>
#include <vector>
#include <stdlib.h>

char ** readFile(){
    FILE *file;
    char string[300];
    char ** array = malloc(sizeof(char*) * 30000); // array of pointers -> reprents strings
    file = fopen("data_4.txt","r");
    int i = 0;
    for ( i = 0; i < 30000; i++){
       array[i] = malloc(sizeof(char)* 20);
    }
    i = 0;
    while(fgets(string,300,file) != NULL){
     sscanf(string,"%s", array[i]);
     i++;
    }
    return array;
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver code 
int main() 
{ 
    char ** array = readFile();
     for ( int i = 0; i < 30000; i++){
    printf( "%s \n",array[i]);
    }
    // int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    // int n = sizeof(arr)/sizeof(arr[0]); 
    // bubbleSort(arr, n); 
    // cout<<"Sorted array: \n"; 
    // printArray(arr, n); 
    return 0; 
} 