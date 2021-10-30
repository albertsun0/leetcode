
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

//arr = [1,2,3, 1];
//console.log(rob(arr));
//logic: each house in dp is the maximum attainable value at that house

//https://leetcode.com/problems/house-robber-ii/

//the list is circular, only difference is that you cannot rob the first and last one
//special case?

//create 2 dps for each case?

const rob2 = function(nums) {
    if(nums.length == 1) return nums[nums.length-1];
    if(nums.length == 2) return Math.max(nums[0], nums[1]);
    return Math.max(robHelp(nums,0), robHelp(nums,1));
}; 

//start index is either 0 or 1
const robHelp = (nums, startIndex) => { 
    let endIndex = nums.length - (startIndex == 1 ? 0:1);
    dp = [];
    dp[0] = nums[startIndex];
    dp[1] = Math.max(nums[startIndex+1] , dp[0]);
    console.log(dp);
    console.log(endIndex);
    // cost[cost.length] = 0;
    // console.log(dp);
    console.log(endIndex);
    for(i = 2; i<endIndex-startIndex; i++){
        dp[i] = Math.max(dp[i-2]+nums[i+startIndex], dp[i-1]);   
    }
    console.log(dp);
    return Math.max(dp[dp.length-1], dp[dp.length-2]);
}
// 3 2 2 3
arr2 = [1,2,3];
console.log(rob2(arr2, 0));
//https://leetcode.com/problems/delete-and-earn/ 