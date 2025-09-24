
// Given an array, arr[]. Sort the array using bubble sort algorithm.


class Solution {
  public:
    void bubbleSort(vector<int>& arr) 
    {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;

            // Compare adjacent elements
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            // If no two elements were swapped → array already sorted
            if (!swapped)
                break;
        }
    }
};