/*Given an array arr of n positive integers, your task is to find all the leaders in the array. An element of the array is considered a leader if it is greater than all the elements on its right side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.

Examples

Input: n = 6, arr[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
Input: n = 5, arr[] = {10,4,2,4,1}
Output: 10 4 4 1
Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side
*/
vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int> arr1;
        int max1=arr[n-1];
        arr1.push_back(max1);
        for(int i=n-2;i>=0;i--){
            
            if(max1<=arr[i]){
                max1=arr[i];
                arr1.push_back(arr[i]);
            }
        }
        reverse(arr1.begin(),arr1.end());
        return arr1;
    }
