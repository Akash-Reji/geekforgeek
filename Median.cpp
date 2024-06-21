/*
Given an array arr[] of N integers, calculate the median.

NOTE: Return the floor value of the median.
 

Example 1:

Input: N = 5
arr[] = 90 100 78 89 67
Output: 89
Explanation: After sorting the array 
middle element is the median 

Example 2:

Input: N = 4
arr[] = 56 67 30 79
Output: 61
Explanation: In case of even number of 
elements, average of two middle elements 
is the median.

 

Your Task:
You don't need to read or print anything. Your task is to complete the function find_median() which takes the array as input parameter and return the floor value of the median.
 

Expected Time Complexity: O(n * log(n))
Expected Space Complexity: O(1)
*/
int find_median(vector<int> v)
		{
		    // Code here.
		    int n=v.size();
		    sort(v.begin(),v.end());
		    if(n%2!=0){
		        return v[(n/2)];
		    }else{
		        return (v[(n-1)/2]+v[n/2])/2;
		    }
		}
