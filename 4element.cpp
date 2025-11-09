// User function Template for C++

bool find4Numbers(int A[], int n, int X) {
    sort(A, A + n); // Step 1: Sort array
    
    for(int i = 0; i < n - 3; i++) { // Fix 1st number
        
        for(int j = i + 1; j < n - 2; j++) { // Fix 2nd number
            
            int start = j + 1;  // Pointer for 3rd number
            int end = n - 1;    // Pointer for 4th number
            
            while(start < end) {
                
                int sum = A[i] + A[j] + A[start] + A[end];
                
                if(sum == X)
                    return true; // Triplet Found ✅
                
                else if(sum < X)
                    start++; // Sum badhao
                
                else
                    end--;   // Sum ghatao
            }
        }
    }
    return false; // No quadruple found
}
