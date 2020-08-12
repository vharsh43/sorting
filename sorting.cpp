#include <iostream>
using namespace std;


/* hSort */
void heapify(int array[], int n, int x) 
{ 
    int biggest = x; // Initialize Root
    int l = 2 * x + 1; // left 
    int r = 2 * x + 2; // right
  
    
    if (l < n && array[l] > array[biggest])      // For left > root 
        biggest = l; 
  
    
    if (r < n && array[r] > array[biggest])     // For right child > biggest till now
        biggest = r; 
  
    
    if (biggest != x) {                // For biggest != root 
        swap(array[x], array[biggest]); 
  
        // Recursively  
        heapify(array, n, biggest); 
    } 
} 
  
void hSort(int array[], int n)         // hSort

{ 
    for (int x = n / 2 - 1; x >= 0; x--)         // Rearrayange array
        heapify(array, n, x); 
  
    for (int x = n - 1; x >= 0; x--) {               // Extraction 

        swap(array[0], array[x]);                        //swap root to end 
        heapify(array, x, 0);                          // call to reduced heap 

    } 
} 
  

/* MergeSort */

void merge(int array[], int l, int m, int r) 
{ 
    int x, y, z; 
    int no1 = m - l + 1; 
    int no2 = r - m; 
  
    int L[no1], R[no2];                       // Temporary 

  
    for (x = 0; x < no1; x++)                // Duplicate data to Temp array
        L[x] = array[l + x]; 

    for (y = 0; y < no2; y++) 
        R[y] = array[m + 1 + y]; 
  
    x = 0;  
    y = 0;  
    z = l; 
    while (x < no1 && y < no2) { 
        if (L[x] <= R[y]) { 
            array[z] = L[x]; 
            x++; 
        } 
        else { 
            array[z] = R[y]; 
            y++; 
        } 
        z++; 
    } 
  

    while (x < no1) {                // If anything remains for L[] it copy
        array[z] = L[x]; 
        x++; 
        z++; 
    } 
  
    
    while (y < no2) {                // If anything remains for R[] it copy
        array[z] = R[y]; 
        y++; 
        z++; 
    } 
} 
  

void mergeSort(int array[], int l, int r)  // l=Left, r=Right
{ 
    if (l < r) { 
        int m = l + (r - l) / 2; 
  
        // Sort Both Halves
        mergeSort(array, l, m); 
        mergeSort(array, m + 1, r); 
  
        merge(array, l, m, r); 
    } 
}   
 
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}  

int partition (int array[], int low, int high) 
{ 
    int pivot = array[high];    // pivot 
    int x = (low - 1);  
  
    for (int y = low; y <= high- 1; y++) 
    { 
        if (array[y] <= pivot) 
        { 
            x++;     
            swap(&array[x], &array[y]); 
        } 
    } 
    swap(&array[x + 1], &array[high]); 
    return (x + 1); 
} 
  

void quickSort(int array[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(array, low, high); 
  
        quickSort(array, low, pi - 1); 
        quickSort(array, pi + 1, high); 
    } 
} 


  
/* Print Function */
void printarrayay(int array[], int n) 
{ 
    for (int x = 0; x < n; ++x) 
        cout << array[x] << " "; 
    cout << "\n"; 
} 





int main() {
    
    
    cout << "------------------------------ \n";
    cout << "Welcome to Sorting C++ Program \n";
    cout << "------------------------------ \n";

    int n; 
    char sort;

    
    cout << "\nPlease enter the size of List \n" ;
    cin >> n; 

    int array[n];

    cout << "\nInput elements of array: \n"; 
    
    for(int x=0;x<n;x++)
    { 
        cin >> array[x]; 
    } 

    cout << "Choose one to implement: \n a. HeapSort \n b. Mergesort \n c. Quicksort \n ";

    
    cout << "\nPlease input a, b, or c !! \n" ;
    cin >> sort;
    
    cout << "\n";

    if (sort == 'a' || sort == 'A') //hSort
    {
        hSort(array, n); 

        cout << "Sorted array is \n"; 
        printarrayay(array, n); 

        return 0;
    }
    else if (sort == 'b' || sort == 'B') //mergesort
    {
         
        mergeSort(array, 0, n - 1);
        printf("\nSorted array is \n"); 
        printarrayay(array, n); 
        return 0; 
    
    }
    else if (sort == 'c' || sort == 'C') //quicksort
    {

    quickSort(array, 0, n-1); 
    printf("Sorted array: "); 
    printarrayay(array, n); 
    return 0; 
    }
    if (sort != 'a' && sort != 'b' && sort != 'c' && sort != 'A' && sort != 'B' && sort != 'C' )
    {
        cout << "\nPlease Try again with Valid Input";
    }
    

	
	return 0;
}
