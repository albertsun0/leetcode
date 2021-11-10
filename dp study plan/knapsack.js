let val = [ 60, 100, 120 ];
let wt = [ 10, 20, 30 ];
let W = 50;
let i = 0;


const knapsackR = (W, wt, val, i) =>{
    if(W == 0 || i == val.length) return 0;

    if(W - wt[i] < 0){
        return knapsackR(W, wt, val, i+1);
    }
    else{
        return(Math.max(
            val[i] + knapsackR(W - wt[i], wt, val, i+1),
            knapsackR(W , wt, val, i+1)
        ));
    }
}


console.log(knapsackR(W, wt, val, i));

const knapsackDP = (W, wt, val) =>{
    let dp = Array(val.length).fill(Array(W));
    for(i = 0; i< W; i++){
        dp[0][i] = 0;
    }
    for(i = 0; i< val.length; i++){
        dp[i][0] = 0;
    }

    for(i = 1; i< val.length; i++){
        for(j = 0; j< W; j++){
            curW = wt[i-1];
            if(wt[i-1] + dp[i-1][j]< W){
                dp[i][curW+dp[i-1][j]] = dp[]
            }

            //dp stores the values
        }
    }

    console.log(dp);
    
}


console.log(knapsackDP(W, wt, val))
