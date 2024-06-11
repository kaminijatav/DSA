class Solution {
public:
    int peakElement(vector<int>arr){
        int start=0;
    int end=arr.size()-1; 
    
    int mid=start+(end-start)/2;
    while(mid<=end){
    if(arr[mid]<arr[mid-1]){
        mid--;
    }
    else if (arr[mid]<arr[mid+1]){
        mid++;
    }
    else if(arr[mid]>arr[mid+1]){
        return mid;
    }
    }
        return -1;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return peakElement(arr);
    }
};

