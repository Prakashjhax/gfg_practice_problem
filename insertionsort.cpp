// Given an array arr[] of positive integers.
// The task is to complete the insertsort() function which is used to implement Insertion Sort.

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 1; i < n; i++) {
            int key = arr[i];   // current element to insert
            int j = i - 1;

            // Shift elements greater than key to one position ahead
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            // Place key at its correct position
            arr[j + 1] = key;
        }
    }
};