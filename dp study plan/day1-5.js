
// DAY 3

//https://leetcode.com/problems/house-robber/

var rob = function(nums) {
    if(nums.length == 1) return nums[nums.length-1];
    dp = [];
    dp[0] = nums[0];
    dp[1] = Math.max(nums[1] , nums[0]);
    // cost[cost.length] = 0;
    // console.log(dp);
    for(i = 2; i<nums.length; i++){
        dp[i] = Math.max(dp[i-2]+nums[i], dp[i-1]);   
    }
    // console.log(dp);
    return Math.max(dp[nums.length-1], dp[nums.length-2]);
};  

//arr = [2,1,3,4];
//console.log(rob(arr));
//logic: each house in dp is the maximum attainable value at that house

//https://leetcode.com/problems/house-robber-ii/

//the list is circular, only difference is that you cannot rob the first and last one
var rob2 = function(nums) {
    if(nums.length == 1) return nums[nums.length-1];
    dp = [];
    dp[0] = nums[0];
    dp[1] = Math.max(nums[1] , nums[0]);
    // cost[cost.length] = 0;
    // console.log(dp);
    for(i = 2; i<nums.length; i++){
        dp[i] = Math.max(dp[i-2]+nums[i], dp[i-1]);   
    }
    console.log(dp);
    return Math.max(dp[nums.length-1], dp[nums.length-2]);
};  
// 3 2 2 3
arr2 = [2,3,2];
console.log(rob2(arr2));
//https://leetcode.com/problems/delete-and-earn/ 