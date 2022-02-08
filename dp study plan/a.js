// let g = {};

// input = [["Toby", "Sid"],
//     ["Sid", "Alexander"],
//     ["Alexander", "Bob"],
//     ["James", "Klukus"]];
    
// for(i = 0; i<input.length; i++){
//     temp = g[input[i][0]] || [];
//     //console.log(temp);
//     temp[temp.length] = input[i][1];
    
//     g[input[i][0]] = temp;
// }

// console.log(g);

// let ans = 0;
// const recurse = (s, count) =>{
//     if(count > ans){
//         ans = count;
//     }
//     let a = g[s];
//     for(i = 0; i< a.length; i++){
//         recurse(a[i], count + 1);
//     }
    
// }
// recurse("Toby", 0);
// console.log(ans);

let arr = [2,4,5,6,6,6,7,8,8,9,9,9,10];

let l = 0;
let r = arr.length;
let target = ;
while(l <= r){
    let m = Math.floor((l+r)/2);
    console.log(m);
    if(arr[m] >= target){
        r = m-1;
    }
    else{
        
        l = m+1;
    }
}
console.log(r);
