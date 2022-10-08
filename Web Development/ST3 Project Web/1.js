// const step1 = function () {
//     return new Promise(function (resolve, reject) {
//         setTimeout(function () {
//             console.log("1");
//             resolve();
//         }, 4000);
//     });
// };

// const step2 = function () {
//     return new Promise(function (resolve, reject) {
//         setTimeout(function () {
//             console.log("2");
//             resolve();
//         }, 3000);
//     });
// };

// const q = function(){
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             console.log();
//         }, 1000);
//     })
// }

// const step3 = function () {
//     return new Promise(function (resolve, reject) {
//         setTimeout(function () {
//             console.log("3");
//             resolve();
//         }, 2000);
//     });
// };

// const step4 = function () {
//     return new Promise(function (resolve, reject) {
//         setTimeout(function () {
//             console.log("4");
//             resolve();
//         }, 1000);
//     })
// }

// const step5 = ()=>{
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             console.log("5");
//         }, 1000);
//     })
// }

// async function wer(){
//     await step1();
//     await step2();
//     await step3();
//     await step4();
// }
// wer();

// step1().then(function(){
//     step2().then(function(){
//         step3().then(function(){
//             step4().then(()=>{
//                 step5();
//             });
//         })
//     })
// })

// step1().then(()=>{
//     step2().then(()=>{
//         step3().then(()=>{
//             step4();
//         })
//     })
// })

// var i = 0;

// var l = setInterval(() => {
//     i++;
//     console.log(i);
//     if(i === 10){
//         clearInterval(l);
//     }
// }, 1000);

// var i = 0;
// setInterval(() => {
//     console.log(i);
//     i++;
// }, 1000);

// var count = 10;
// var timer = setInterval(() => {
//     if (count == 0) {
//         console.log("Time's Up");
//         clearInterval(timer);
//         return;
//     }
//     console.log(count);
//     count--;
// }, 1000);

// const add = (function(){
//     let count = 0;
//     return function(){
//         count++;
//         return count;
//     }
// })

// const ans = add();
// console.log(ans());

// var user = true;

// var promise = new Promise((resolve, reject) => {

//     setTimeout(() => {
//         if (user) {
//             resolve();
//         } else {
//             reject();
//         }
//     }, 2000)

// });

// promise.then(() => {
//     console.log("Success");
// }).catch(() => {
//     console.log("Fail");
// })

// var h = document.querySelector("body");
// var him = document.createElement("h1");
// him.innerText = "him"
// h.append(him);


// const init = () => {
//     var name = "Hlo";

//     const display = ()=> {
//         console.log(name);
//     }
//     return display;
// }
// const f = init();
// f();

// function int(){
//     var naem = "h";

//     function display(){
//         console.log(naem);
//     }
//     display();
// }
// int();

var d = document.getElementById("hl");

d.addEventListener("click", function(){
    function m(){
        console.log("2");
    }
    console.log("1");
    m();
})