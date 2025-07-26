#include<iostream>

using namespace std;

int countTrailingZeros(int n){
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5){
        count += n / i;
    }
    return count;
    
}

int smallest_Number_with_N_trailing_zeros(int k){
    int low = 0, high = 5 * k;
    int result = -1;

    while (low <= high){
        int mid = (low+high)/2;
        int tz = countTrailingZeros(mid);

        if(tz < k){
            low = mid + 1;
        }else{
            if(tz == k){
                result = mid; 
            }
            high = mid - 1;
        }
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter the number of trailing zeros you want: ";
    cin>>n;

    int result = smallest_Number_with_N_trailing_zeros(n);
    if(result != -1){
        cout<<"The smallest number whose factorial contains exactly "<<n<<" trailing zeros is: "<<result<<endl;
    }else{
        cout<<"No number exists whose factorial has exactly "<<n<<" trailing zeros."<<endl;
    }

    return 0;
}
