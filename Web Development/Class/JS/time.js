var arr = [0,1,2,3,4,5,6,7,8,9,10];

for(let i = 1; i<11; i++){
    setTimeout(()=>{
        console.log(arr[i]);
    },1000*i)
}