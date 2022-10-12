#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                return mid;
            }
        }
        return -1;
    };
};
int main(int argv,char* argc[]){
    Solution* s=new Solution();
    vector<int> obj;
    obj.push_back(-1);
    obj.push_back(0);
    obj.push_back(3);
    obj.push_back(5);
    obj.push_back(9);
    obj.push_back(12);
    cout << s->search(obj,9) <<endl;
    return EXIT_SUCCESS;
}