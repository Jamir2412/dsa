bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr, arr+n);
        for(int i=0; i<n-2; i++){
            int j= i+1;
            int k= n-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]==0) return 1;
                
                else if(arr[i]+arr[j]+arr[k]<0) j++;
                
                else k--;
            }
        }
        return 0;
    }