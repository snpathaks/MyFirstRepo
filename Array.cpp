// Traversal of an  array:
/*
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the elements:"<<" ";
    cin>>n;
    cout<<endl;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"Traversal of an Array: "<<" ";
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}*/
//leetcode
class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> res;
            //2D Array
            sort(nums.begin(), nums.end());
            int n = nums.size();
            for(int i = 0; i < n; i++) { //i = 0; Start
                if(i > 0 && nums[i] == nums[i - 1]) continue;
                //This is where two pointers comes in!
                int j = i + 1; //i = 0; j = 0 + 1 = 1 //Middle
                int k = (n - 1); //End
                while(j < k) {
                    int total = nums[i] + nums[j] + nums[k];
                    if(total > 0) {
                        k--;
                    } else if(total < 0) {
                        j++;
                    } else {
                        res.push_back({nums[i], nums[j], nums[k]});
                        j++;
                        while(nums[j] == nums[j - 1] && j < k) j++;
                    }
                }
            }
            return res;
        }
    };

