class Solution {
public:
    int aggressiveCows(vector<int> &stalls, int k) {
        int n = stalls.size();
        sort(stalls.begin(), stalls.end()); // Sort stalls

        int start = 1;                       // Minimum possible distance
        int end = stalls[n - 1] - stalls[0]; // Maximum possible distance
        int ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2; // Candidate distance
            int count = 1;                        // Place first cow
            int lastPos = stalls[0];              // Position of last placed cow

            // Try placing remaining cows with at least 'mid' distance
            for (int i = 1; i < n; i++) {
                if (stalls[i] - lastPos >= mid) {
                    count++;
                    lastPos = stalls[i];
                }
            }

            if (count >= k) { // 'mid' distance is possible
                ans = mid;    // Store answer
                start = mid + 1; // Try for a larger distance
            } else {           // 'mid' distance not possible
                end = mid - 1; // Try smaller distance
            }
        }

        return ans; // Largest minimum distance
    }
};