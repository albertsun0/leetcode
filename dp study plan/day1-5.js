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
// arr2 = [1,2,3];
// console.log(rob2(arr2, 0));

//TODO: make better solution


//https://leetcode.com/problems/delete-and-earn/ 

//

const deleteAll = (nums) => {
    let m = new Map();
   // console.log(a.length);
    max = 0;
    nums.forEach(num => {
        max = Math.max(num, max);
        const total = m.get(num) || 0;
        m.set(num, total + num); 
    });
    console.log(m);
    dp = [];
    dp[0] = m.get(0) || 0;
    dp[1] = m.get(1) || 0;
    
    for(i = 2; i< max+1; i++){
        c = m.get(i) || 0;
        dp[i] = Math.max(dp[i-2] + c, dp[i-1]);
    }
    return Math.max(dp[dp.length-1], dp[dp.length-2]);
}


// let a = [3,4,2];

// console.log(deleteAll(a));

//DAY 4
//jump game https://leetcode.com/problems/jump-game/

//if all are >0 can reach end
//can only stop if stuck at 0
//if there is a 0, there must be atleast 

var canJump = function(nums) {
    if(nums[0] == 0 && nums.length != 1) return false;
    maxDistance = [];
    maxDistance[0] = nums[0];
    for(i = 1; i< nums.length-1; i++){
        maxDistance[i] = Math.max(maxDistance[i-1]-1, nums[i]);
        if(maxDistance[i] <= 0){
            return false;
        }
    }
    console.log(maxDistance);
    return true;
};

// let j = [3,2,1,0,4];
// let k = [2,3,1,1,4];
// let l = [2, 0, 0];
// console.log(canJump(l));


//Jump game 2 https://leetcode.com/problems/jump-game-ii/

var jump = function(nums) {
    let dp = [];
    dp.length = nums.length;
    dp.fill(10001);
    dp[0] = 0;
    for(i = 0; i< nums.length; i++){
        for(j = i; j < i + nums[i]+1; j++){
           // console.log(nums[i] + " " +j);
            if(j < nums.length){
                dp[j] = Math.min(dp[j] , dp[i]+1);
               // console.log(i + "   " +dp + " " + dp[i]); 
            }
        }
        if(dp[dp.length-1] !== 10001){return dp[dp.length-1];}
    }
    return dp[dp.length-1];
};
// let t = [1,1,1,1,1,1];
// let n = [2,3,1,1,4];
// let x = [2,3,0,1,4];
// console.log(jump(x));
// O(N) non dp solution?


// maximum subarray https://leetcode.com/problems/maximum-subarray/ 

var maxSubArray = function(nums) {
    let max = -99999;
    let cur = 0;
    //atleast one positive, max subarray
    //if all neg, ans is largest element
    allNeg = true;
    biggest = -99999;
    for(i = 0; i<nums.length; i++){
        cur += nums[i];
        if(nums[i] > 0) allNeg = false;
        if(nums[i] > biggest) biggest = nums[i];
        if(cur < 0){
            cur = 0;
        }
        if(cur > max){
            max = cur;
        }
    }
    if(!allNeg) return max;
    return biggest;
};

var maxSubArrayDP = function(nums) {
    let max = -99999;
    let dp = [];
    allNeg = true;
    biggest = -99999;
    dp[0] = nums[0];
    for(i = 1; i<nums.length; i++){
        dp[i] = nums[i] + dp[i-1];
        if(nums[i] > 0) allNeg = false;
        if(nums[i] > biggest) biggest = nums[i];
        if(dp[i] < 0){
            dp[i] = 0;
        }
        if(dp[i] > max){
            max = dp[i];
        }
    }
    if(!allNeg) return max;
    return biggest;
};

// let a = [-2,1,-3,4,-1,2,1,-5,4];
// // let b = [-1,-2,-1,-1,-1];
// console.log(maxSubArrayDP(a));

//kadanes algorithm

var kadanes = function(nums) {
    let max = -99999;
    let localMax = 0;
    for(i = 0; i<nums.length; i++){
        localMax = Math.max(nums[i], localMax+nums[i]);
        if(localMax > max){
            max = localMax;
        }
    }
    return max;
}

//let a = [-2,1,-3,4,-1,2,1,-5,4];
// let b = [-1,-2,-1,-1,-1];
//console.log(kadanes(a));

//



var kadanes2 = function(nums, len) {
    let max = -99999;
    let localMax = 0;
    let localLen = 1;
    for(i = 0; i<nums.length; i++){
        let temp = localMax+nums[i];
        if(localLen > len){
            temp -= nums[i-len];
        }

        if(nums[i] > temp){
            localMax = nums[i];
            localLen = 0;
        }
        else{
            localMax = temp;
            localLen++;
        }

        if(localMax > max){
            max = localMax;
        }

        console.log(localMax + "  "+temp + " "+ localLen);
    }
    return max;
}

//we want to run kadanes but with a lenght of len
//if lenght > len, we remove dp[i-len];
let a = [5,-3,5];
let b = [...a, ...a];
console.log(b);
console.log(kadanes2(b, 3));

