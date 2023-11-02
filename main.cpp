//my first bubble sort


#include <iostream>

using namespace std;



void sort(int myArray[] , int size);



int main(){
    
    
    int myArray[] = {35, 12, 44, 8, 21, 67, 5, 42, 10, 53};
    
    int size = sizeof(myArray)/sizeof(int);
    
    
    sort(myArray, size);
    
    for(int num : myArray)
        cout << num << " ";
    
    
    
}


void sort(int myArray[] , int size){
    int temp;

    
    for(int i = 0 ; i < size - 1 ; i++){
        
        for( int j = 0 ; j < size - j -1 ; j++){
            if (myArray[j] > myArray[j+1]){
                
                temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j+1] = temp;
                
            }
        }
        
    }
    
    
    
}

