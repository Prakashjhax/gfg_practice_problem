class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = (long long)arr.size() + 1;  // total numbers = size+1
        long long sum = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];  // accumulate in long long
        }
        
        long long ans = n * (n + 1) / 2;  // expected sum in long long
        
        return (int)(ans - sum);  // final result fits in int
    }
};