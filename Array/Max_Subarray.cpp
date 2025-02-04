// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//          int cnt = 0;
//        int mx = INT_MIN;
//         for (int i = 0; i < nums.size(); i++) {
//            cnt = cnt + nums[i];
//             mx = max(mx, cnt);
//             if (cnt < 0) {
//                 cnt = 0;
//             }
//             else if (  nums.size()==1) {
//                 return nums[i];
//             }
//         }

//         return mx;
//     }
// };