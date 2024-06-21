/*
Union of Two Sorted Arrays
Difficulty: MediumAccuracy: 31.39%Submissions: 235K+Points: 4
Given two sorted arrays of size n and m respectively, find their union. The Union of two arrays can be defined as the common and distinct elements in the two arrays. Return the elements in sorted order.

Example 1:

Input: 
n = 5, arr1[] = {1, 2, 3, 4, 5}  
m = 5, arr2 [] = {1, 2, 3, 6, 7}
Output: 
1 2 3 4 5 6 7
Explanation: 
Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
*/
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
      vector<int> ans;
      map<int,int> mp;
      
      for(int i=0;i<n;i++){
          mp[arr1[i]];
      }
      for(int i=0;i<m;i++){
          mp[arr2[i]];
      }
      for(auto i:mp){
          ans.push_back(i.first);
      }
      
      return ans;
    }
