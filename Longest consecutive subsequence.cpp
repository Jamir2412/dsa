int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
        unordered_set<int> S;
        int ans = 0;
 
    
        for (int i = 0; i < n; i++)
            S.insert(arr[i]);
 
    
        for (int i = 0; i < n; i++) {
        
            if (S.find(arr[i] - 1) != S.end()) {
                continue;
            }
            else {
            
            int j = arr[i];
            while (S.find(j) != S.end())
                j++;
 
            
            ans = max(ans, j - arr[i]);
            }
        }
    return ans;
    }