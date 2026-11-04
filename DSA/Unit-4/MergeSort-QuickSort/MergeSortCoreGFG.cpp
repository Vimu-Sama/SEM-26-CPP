class Solution {
  public:
  
    void merge(vector<int> &arr, int l, int m, int r){
        int n1 = m-l+1 ;
        int n2 = r-m ;
        vector<int> ar1(n1) ;
        vector<int> ar2(n2) ;
        for(int i=0;i<n1;i++){
            ar1[i] = arr[l+i] ;
        }
        for(int i=0;i<n2; i++){
            ar2[i] = arr[m+1+i] ;
        }
        int i = 0;
        int  j= 0;
        int k = l ;
        while(i<n1 && j<n2){
            if(ar1[i]<=ar2[j]){
                arr[k] = ar1[i] ;
                i++ ;
            } else {
                arr[k] = ar2[j] ;
                j++ ;
            }
            k++ ;
        }
        while(i<n1){
            arr[k] = ar1[i] ;
            i++ ;
            k++ ;
        }
        while(j<n2){
            arr[k] = ar2[j] ;
            j++ ;
            k++ ;
        }
        
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r){
            return ;
        }
        int mid = (l+r)/2 ;
        mergeSort(arr, l, mid) ;
        mergeSort(arr, mid+1, r) ;
        merge(arr, l, mid, r) ;
    }
};