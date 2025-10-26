class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums , 0 , nums.size()-1);
        return nums;
    }


    void mergesort(vector<int>&arr, int start , int end){
        if(start == end){
            return ;
        }
        int mid = start + (end-start)/2 ;


        mergesort(arr,start,mid); //left
        mergesort(arr,mid+1,end); //right


        merge(arr, start , mid , end);
    }


    void merge(vector<int>&arr ,int start , int mid , int end){
        vector<int>temp(end-start+1);
        int left = start , right = mid+1 , index=0 ;


        while(left<=mid && right <=end){
            if(arr[left] <= arr[right]){
                temp[index]=arr[left];
                index ++;
                left ++;
            }
            else{
                temp[index] = arr[right];
                index++;
                right++;
            }
        }


        //left m elements bche hue copy krdo
        while(left<=mid){
            temp[index]=arr[left];
            index++;
            left++;
        }
        //right m elements bche hue copy krdo
        while(right<=end){
            temp[index]=arr[right];
            index++;
            right++;
        }


        //Ab bade array m merge krdo sbko
        index=0;


        while(start<=end){
            arr[start]=temp[index];
            start++;
            index++;
        }
    }
};
