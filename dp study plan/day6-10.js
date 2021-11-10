//https://leetcode.com/problems/maximum-length-of-subarray-with-positive-product/

//maximum subarray with even number of - signs

var getMaxLen = function(nums) {
    max = 0;
    current = 0;
    for(i = 0 ;i < nums.length; i++){
        if(nums[i] == 0){
            current = 0;
        }
        else{
            
        }

        if(current > max){
            max = current;
        }
    }
};

nums = [0,1,-2,-3,-4];

console.log(getMaxLen(nums));