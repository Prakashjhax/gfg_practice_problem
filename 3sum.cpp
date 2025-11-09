class Solution{
    public:
    bool hasTripletSum(vector<int>&arr, int target){
        sort(arr.begin(), arr.end()); // step 1: sort
        
        int n = arr.size();
        
        for(int i=0; i<n-2; i++){  // fix first element 
            int l = i+1;      //  step 3 : left pointer
                              
            int r = n-1;    // step4: right pointer 
            
            while(l<r){
                int sum = arr[i]+arr[l] + arr[r];
                if (sum == target)
                return true; // triplet found 
                
                else if (sum< target)
                l++;
                else
                r--;
                
            }
            
        }
        return false;  // if there is no treplet 
    }
};