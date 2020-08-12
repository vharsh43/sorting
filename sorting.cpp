#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2 * i + 1; // left = 2*i + 1 
    int r = 2 * i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
  
// main function to do heap sort 
void heapSort(int arr[], int size) 
{ 
    // Build heap (rearrange array) 
    for (int i = size-1 / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    // One by one extract an element from heap 
    for (int i = n - 1; i >= 0; i--) { 
        // Move current root to end 
        swap(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 
  
// Print array
void printArray(int arr[], int size) 
{ 
    for (int i = 0; i < size-1; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
  


int main() {
    
    char sort;

    cout << "Choose one to implement: \n a. heapsort \n b. mergesort \n c. quicksort \n ";
    cout << "\n Please input a, b, or c !! \n" ;
    
    cin >> sort;
    
    int size=0; 
    int arr[size-1];
    
    cout << "\n Please enter the size of List \n" ;
    cin >> size; 

    size--;
    
    cout << "\n Input elements of array: \n"; 
    
    for(int i=0;i<size;i++){ 
        cin >> arr[i]; 
    } 
    cout << "\n"; 

    if (sort == 'a') //heapsort
    {
         heapSort(arr, size); 
  
        cout << "Sorted array is \n"; 
        printArray(arr, size); 

    }
    else if (sort == 'b') //mergesort
    {

    }
    else if (sort == 'c') //quicksort
    {

    }
    if (sort != 'a' && sort != 'b' && sort != 'c')
    {
        cout << "Please Try again with Valid Input";
    }
    
    

	
	return 0;
}