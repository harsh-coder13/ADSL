#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;         //accept size
    int a[n];   
    
    cout<<"Enter the numbers(1 and 0): \n";  //accept numbers of size
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    for (int i = 0; i < n; i++){
        if(a[i] == 0 && a[i+1]==1){
            cout<<"The input is invalid";    //check whether the input is valid
            return 0;
        }
    }
    
    int low = 0;
    int high = n-1;
    int k = -1;

    while (low<=high){  //run binary search

        int mid = (low+high)/2;

        if(a[mid]==0){
                k = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
        }
    }
    
    if(k==-1){
        cout<<"No zeros found"<<endl;  //if no zero found
        return 0;
    }

    cout<<"K: "<<k<<endl;
    int ans = n - k;     //display the output
    cout<<"Ans: "<<ans<<endl;
    return 0;
}



/*
implement the problem of moving all the zeros to end of the array.
*/
