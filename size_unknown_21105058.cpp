//name-->rahul
//sid-->21105058

#include <iostream>         
using namespace std;         


// QUESTION:How would you search for an element in an array/list whose size is unknown?

int simple_binary_search(int arr[],int i,int j,int key){

    int m=(i+j)/2;

    while(i<=j){
    if(arr[m]==key){
      return m;           // if key to be searched is present we will return index of the key
    }

    else{
        if(arr[m]<key){
          i=m+1;
        }

        else{
          j=m-1;
        }

    }
    m=(i+j)/2;

    }
    return -1;       // if element is not present we will return -1
}

//modified Binary search for array with unknown lenght
int binary_search_unknown(int arr[],int key){
    //Initialize i as 0 and j as 1.
    int i=0,j=1;
    while(arr[j]<key){
        i=j;
        j=2*j;
    } 
    
    // calling Simple Binary Search on range i to j.
    return simple_binary_search(arr,i,j,key);
}

int main(){
    int n;
    cin>>n;
    
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    int element=binary_search_unknown(arr,key);
    cout<<element;
    return 0;
    delete[] arr;
}
