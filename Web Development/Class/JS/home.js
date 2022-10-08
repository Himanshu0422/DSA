// let data = '{"ticker":{"base":"BTC","target":"USD","price":"19608.48254384","volume":"15269.05968751","change":"7.82433285"},"timestamp":1664857084,"success":true,"error":""}'

// let jsonData = JSON.parse(data);
// console.log(jsonData.ticker.price);

// let req = new XMLHttpRequest();
// const root = document.querySelector('#root');
// req.open('GET', 'https://inshorts.deta.dev/news?category=science');

// req.send();

// req.onload = function(){
//     let parseData = JSON.parse(this.response);
//     console.log(parseData);

//     let ul = document.createElement('ul');
//     root.appendChild(ul);

//     let arr = parseData.data;
//     // console.log(arr);
    // arr.forEach(element => {
    //     let li = document.createElement('li');
    //     li.innerHTML = `<img src="${element.imageUrl}"> `
    //     ul.append(li);
    // });

// }

// req.onerror = function(){
//     console.log(this.response); 
// }

const root = document.querySelector('#root');
fetch('https://inshorts.deta.dev/news?category=science').then(function (res) {
    return res.json();
}).then(function (d) {
    console.log(d);
    let ul = document.createElement('ul')
    root.appendChild(ul);

    let m = d.data;
    m.forEach(element => {
        let p = document.createElement('p');
        let li = document.createElement('li');
        li.innerHTML = `<img src="${element.imageUrl}"> `
        p.innerHTML = `${element.author}`
        ul.append(p);
        ul.append(li);
    });
}).catch(function () {

})