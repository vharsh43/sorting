#include <iostream>
using namespace std;

int main() {
    
    char sort;

    cout << "Choose one to implement: \n a. heapsort \n b. mergesort \n c. quicksort \n ";
    cout << "Please input a, b, or c !!" ;
    
    cin >> sort;
    
    int size=0; 
    int arr[size-1];
    
    cout << "\n Please enter the size of List" ;
    cin >> size; 
    
    cout << "\n Input elements of array: \n"; 
    
    for(int i=0;i<size;i++){ 
        cin >> arr[i]; 
    } 

    if (sort == 'a') //heapsort
    {


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