#include <iostream>
using namespace std;

int main() {
    
    char sort;

    cout << "Choose one to implement: \n a. heapsort \n b. mergesort \n c. quicksort \n ";
    cout << "Please input a, b, or c !!" ;
    
    cin >> sort;
    
    int size=0; 
    int arr[size];
    
    cout << "\n Please enter the size of List" ;
    cin >> size; 
    
    cout << "\n Input elements of array: \n"; 
    
    for(int i=0;i<size;i++){ 
        cin >> arr[i]; 
    } 

    switch (sort)
    {
        case a: // heapsort
        
        break;

        default:
        
    }
    
    

	
	return 0;
}