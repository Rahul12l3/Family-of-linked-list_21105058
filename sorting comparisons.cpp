//name->rahul
//sid->21105058
//branch->ece

#include <iostream>
using namespace std;


//time complexity- O(n^2).
pair<int,int> bubbleSort(int *input, int size)
{
    int no_of_swaps = 0;
    int no_of_comparisons = 0;
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1 - j; i++)
        {
            if (input[i] > input[i + 1])
            {
                int temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
                no_of_swaps++;
            }
            no_of_comparisons++;
        }
    }
    pair<int,int> ans;
    ans.first = no_of_swaps;//first member would store the number of swaps.
    ans.second = no_of_comparisons;//second member would store the umber of comparisons.
    return ans;
}

//time complexity - O(n^2).
pair<int,int> SelectionSort(int *input,int size)
{
    int min_index;
    int no_of_swaps = 0;
    int no_of_comparisons = 0;
    for(int i=0;i<size;i++)
    {
        min_index = i;
        for(int j=i+1;j<size;j++)
        {
            if(input[j]<input[min_index])
            {
                min_index = j;
                no_of_swaps++;
            }
            no_of_comparisons++;
        }
        int temp = input[i];
        input[i] = input[min_index];
        input[min_index] = temp;
    }
    pair<int,int> ans;
    ans.first = no_of_swaps;
    ans.second = no_of_comparisons;
    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int,int> bubble = bubbleSort(arr,n);
    pair<int,int> selection = SelectionSort(arr,n);

    cout << "comparison of selection sort and bubble sort " << endl;
    cout << endl;

    cout << "on the basis of no of comparisons ->" << " ";
    if(bubble.second > selection.second){
        cout << "MORE COMPARSIONS ARE REQUIRED FOR BUBBLE SORT." << endl;
    }
    else if(bubble.second < selection.second){
        cout << "selection sort requires more comparisons" << endl;
    }
    else{
        cout <<"equal no of comparisons for both" << endl;
    }
    cout << endl;

    //second comparison

    cout << "on the basis of no of swaps ->" << " ";
    if(bubble.first > selection.first){
        cout << "bubble sort requires more swaps." << endl;
    }
    else if(bubble.first < selection.first){
        cout << "selection sort requires more comparisons" << endl;
    }
    else{
        cout << "equal no of comparisons for both" << endl;
    }
    cout << endl;
    cout << "3 . As both BubbleSort and SelectionSort are In-place algorithms, hence both of their Inplace Algorithms have been written above." << endl;

}

