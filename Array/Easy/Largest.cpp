// Brute force 

// APPROACH 

/*   We can sort the array in ascending order, hence the largest element will be at the last index of the array. */


// CODE :


#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;
}

// T.C : O(N*log(N))    ,    // S.C : O(1)


// Optimal Approach 

/*  We can maintain a max variable that will update whenever the current value is greater than the value in the max variable.  */

// CODE :


// #include <bits/stdc++.h>
 
// using namespace std;
// int findLargestElement(int arr[], int n) {
 
//   int max = arr[0];
//   for (int i = 0; i < n; i++) {
//     if (max < arr[i]) {
//       max = arr[i];
//     }
//   }
//   return max;
// }
// int main() {
//   int arr1[] = {2,5,1,3,0};
//   int n = 5;
//   int max = findLargestElement(arr1, n);
//   cout << "The largest element in the array is: " << max << endl;
 
//   int arr2[] =  {8,10,5,7,9};
//   n = 5;
//   max = findLargestElement(arr2, n);
//   cout << "The largest element in the array is: " << max<<endl;
//   return 0;
// }

// T.C : O(N) ,  S.C : O(1) .

