let ball = document.querySelectorAll('.ball');

for(let b of ball){
    window.addEventListener('load', function(){
        let top = Math.round(Math.random()*600);
        let left = Math.round(Math.random()*1390);
        
        b.style.marginTop = top+"px";
        b.style.marginLeft = left+"px";
    })
}

for(let b of ball){
    b.addEventListener('click', function(e){
        let top = Math.round(Math.random()*600);
        let left = Math.round(Math.random()*1390);
        
        b.style.marginTop = top+"px";
        b.style.marginLeft = left+"px";
    });
}