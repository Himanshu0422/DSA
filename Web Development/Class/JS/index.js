var arr=  [1,2,3,4,"hello","xyz","rohan"];

var newarr = [];

arr.forEach((ele)=>{
    if(typeof(ele)=='string'){
        newarr.push(ele);
    }
})

console.log(newarr)