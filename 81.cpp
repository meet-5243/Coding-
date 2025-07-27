class Solution {
public:
    bool search(vector<int>& arr, int t) {
        int low = 0;
        int high = arr.size()-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid]==t) return true;

            if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                low = low + 1;
                high = high - 1;
                continue;
            }

            if(arr[low] <= arr[mid]){
                if(arr[low] <= t && t <= arr[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else{
                if(arr[mid] <= t && t <= arr[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }

        return false;
    }
};