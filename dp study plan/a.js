let g = {};

input = [["Toby", "Sid"],
    ["Sid", "Alexander"],
    ["Alexander", "Bob"],
    ["James", "Klukus"]];
    
for(i = 0; i<input.length; i++){
    temp = g[input[i][0]] || [];
    //console.log(temp);
    temp[temp.length] = input[i][1];
    
    g[input[i][0]] = temp;
}

console.log(g);

let ans = 0;
const recurse = (s, count) =>{
    if(count > ans){
        ans = count;
    }
    let a = g[s];
    for(i = 0; i< a.length; i++){
        recurse(a[i], count + 1);
    }
    
}
recurse("Toby", 0);
console.log(ans);