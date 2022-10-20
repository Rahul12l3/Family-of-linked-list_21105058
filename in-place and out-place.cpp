//                       Roshan Tripathi
//                       ECE 21105086
/*                         
                                                            ans->1;
An "In-Place" sorting algorithm is algorithm whose space complexity lies between O(1) and O(logn) both included.
We can say an in-place algorithm is an algorithm that does need a small extra space and produces an output in the same memory,
that contains the data by transforming the input ‘in-place’.Where as an "Out-Place" sorting algorithm is algorithm whose space complexity is 
greater than O(logn). */

                                                            //ans->2;

//In-Place Algorithm for insertion sort
#include <iostream>
using namespace std;

void inplace_insertion_sort(int arr[],int n){
    int i=0;
    int j=i+1;
    while(j<=n-1){
        int temp=arr[j];
        while(i>=0){
            if(arr[i]>temp){
                arr[i+1]=arr[i];
                i--;
            }
            if(i==-1){
                arr[0]=temp;
                break;
            }
            if(arr[i]<=temp){
                arr[i+1]=temp;
                break;
            }
        }
        j++;
        i=j-1;
    }
    return;
}

//out-Place Algorithm for insertion sort
void outplace_insertion_sort(int arr[],int si,int ei){

    //si=starting index  ;;  ei=ending index
    if(si==ei){
        return;
    }
    int j=si+1;
    int temp=arr[j];
    while(si>=0){
        if(arr[si]>temp){
            arr[si+1]=arr[si];
            si--;
        }
        if(si==-1){
            arr[0]=temp;
            break;
        }
        if(arr[si]<=temp){
            arr[si+1]=temp;
            break;
        }
    }
    outplace_insertion_sort(arr,si+1,ei);
}
//Function to print array
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    //Taking Input array
    cout<<"enter no of elements in array-> ";
    cin>>n;
    int arr[n],arr2[n];//Two array with same size and elements
    cout<<"enter elements seperated by space-> ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //copying arr to arr2
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    cout<<endl;
    cout<<"before sorting-> ";printarray(arr,n);
    //Calling insertion sort using in-place algorithm.
    inplace_insertion_sort(arr,n);
    cout<<endl;
    cout<<"after inplace algo-> ";
    //printing the array
    printarray(arr,n);
    cout<<endl;
    //calling insertion sort using out-place algorithm.
    outplace_insertion_sort(arr2,0,n-1);
    cout<<"after outplace algo-> ";
    //printing the array
    printarray(arr,n);
    cout<<endl;

}

/*
ans->3;
In-place techniques have lesser space complexity but are difficult to apply in algorithm whereas out-place techniques are easy to apply but 
increases the space complexity of algorithm. For exapmle if we want to reverse an array then its in-place algorithm will be swaping the first
and last element of array until we reach the middle of array,If we want to solve the same problem using out-place algorithm we have to create 
one extra array of same size and copy elements of original array from back to the front of new array,this algorithm increases the space complexity 
to O(n) as we have creaed an extra array.

NOT IN-PLACE algorithm is used in Merge Sort, Because merge sort requires O(n) extra space.
IN-PLACE algorithm are used in Bubble sort, Selection Sort, Insertion Sort, Heapsort.
*/

