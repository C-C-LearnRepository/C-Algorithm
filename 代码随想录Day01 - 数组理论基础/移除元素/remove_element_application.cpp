#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == val) {
                for (int j = i + 1; j < size; j++) {
                    nums[j - 1] = nums[j];
                }
                i--;
                size--;
            }
        }
        return size;
    }
};

int main(int argv,char* argc[]){
    Solution* s=new Solution();
    vector<int> nums={3,2,2,3};
    cout<<s->removeElement(nums,3)<<endl;
    return EXIT_SUCCESS;
}