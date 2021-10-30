//https://leetcode.com/study-plan/dynamic-programming/?progress=oxzv3mm

//DAY 1

//https://leetcode.com/problems/fibonacci-number/
var fib = function(n) {
    dp = [];
    dp[0] = 0;
    dp[1] = 1;
    for(i = 2; i<=n; i++){
        dp[i] = dp[i-1]+ dp[i-2];
    }
    return dp[n];
};

//https://leetcode.com/problems/n-th-tribonacci-number/

var tribonacci = function(n) {
    dp = [];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for(i = 3; i<=n; i++){
        dp[i] = dp[i-1]+ dp[i-2] + dp[i-3];
    }
    return dp[n];
};

//DAY 2

//https://leetcode.com/problems/climbing-stairs/
//is just fib by pattern recognition
// why??

var climbStairs = function(n) {
    dp = [];
    dp[0] = 1;
    dp[1] = 1;
    for(i = 2; i<=n; i++){
        dp[i] = dp[i-1]+ dp[i-2];
    }
    return dp[n];
};

//https://leetcode.com/problems/min-cost-climbing-stairs/

//start with small array
//dp[0] is value of minimum cost to reach that stair
var minCostClimbingStairs = function(cost) {
    dp = [];
    dp[0] = cost[0];
    dp[1] = cost[1];
    cost[cost.length] = 0;
    for(i = 2; i<cost.length+1; i++){
        dp[i] = Math.min(dp[i-1]+cost[i], dp[i-2] + cost[i]);
        
    }
    return dp[cost.length-1];
};

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

//TODO: make better solution


//https://leetcode.com/problems/delete-and-earn/ 

//