#include<bits/stdc++.h>
using namespace std;
// void reverse(vector<int> &nums , int i , int j){
//     while(i<j){
//         int temp = nums[i];
//         nums[i]=nums[j];
//         nums[j]=temp;
//         i++;j--;
//     }
//     return;
// }

void nextPermutation(vector<int> &nums){
    int n = nums.size();
    //1). finding pivot index
    int idx = -1;
    for(int i=n-2 ; i>=0 ; i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){  //if array is greatest
        reverse(nums.begin(),nums.end());
        return;
    }
    //2).sorting/reverse after pivot
    reverse(nums.begin()+idx+1, nums.end());
    //3).swapping idx and idx+1
    int temp = nums[idx];
    nums[idx] = nums[idx+1];
    nums[idx+1] = temp;
    return;
}
int main(){
    vector<int> nums1();
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(4);
    nums1.push_back(2);

    for(int i =0 ;i<nums.size() ;i++){
        cout<<nums[i]<<" "
    }
    nextPermutation(nums);
    for(int i =0 ;i<nums.size() ;i++){
        cout<<nums[i]<<" "
    }

}