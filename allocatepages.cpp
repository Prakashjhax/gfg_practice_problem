// allocate minimum number of pages required for a given size 

class Solution {
  public:

    // Helper function to check if allocation possible with given max pages
    bool isPossible(vector<int> &arr, int n, int k, int mid) {
        int studentCount = 1;
        int pageSum = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) 
                return false; // single book has more pages than mid → not possible

            if (pageSum + arr[i] > mid) {
                studentCount++;
                pageSum = arr[i];

                if (studentCount > k) 
                    return false; // need more students → not possible
            } 
            else {
                pageSum += arr[i];
            }
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (n < k) return -1;  // not enough books for each student

        int low = *max_element(arr.begin(), arr.end());   // min possible max pages
        int high = accumulate(arr.begin(), arr.end(), 0); // max possible max pages
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(arr, n, k, mid)) {
                ans = mid;       // store possible answer
                high = mid - 1;  // try to minimize
            } else {
                low = mid + 1;   // increase allowed pages
            }
        }
        return ans;
    }
};




