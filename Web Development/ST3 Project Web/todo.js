const text = document.querySelector('#text');
const button = document.querySelector('#add');
const item = document.querySelector('#item');

button.addEventListener('click', function(){

    if(text.value === ''){
        alert("Please enter some text🙂.")
    }
    else{
        const head = document.createElement('li');
        head.classList.add("newItem");
        item.appendChild(head);

        const b = document.createElement('button');
        b.classList.add("button1");
        head.appendChild(b);

        const cross = document.createElement('span');
        cross.innerText = 'X';
        b.appendChild(cross);

        const c = document.createElement('button');
        c.classList.add("button2");
        head.appendChild(c);

        const up = document.createElement('span');
        up.innerText='↑';
        c.appendChild(up);

        const d = document.createElement('button');
        d.classList.add("button3");
        head.appendChild(d);

        const down=document.createElement('span');
        down.innerText='↓';
        d.appendChild(down);

        const e = document.createElement('button');
        e.classList.add("button4");
        head.appendChild(e);

        const one=document.createElement('span');
        one.innerText='Edit';
        e.appendChild(one);

        const data = document.createElement('input');
        data.classList.add("input1");
        data.type = 'text';
        data.value = text.value;
        data.setAttribute('readonly', 'readonly');
        head.appendChild(data);
        text.value='';

        b.addEventListener('click', function(){
            head.remove();
        })
        c.addEventListener('click', function(){
            if(head.previousElementSibling){
                head.parentNode.insertBefore(head,head.previousElementSibling);
            }
        })
        d.addEventListener('click',function(){
            if(head.nextElementSibling){
                head.parentNode.insertBefore(head.nextElementSibling,head);
            }
        })

        e.addEventListener('click', function(){
			if (e.innerText.toLowerCase() == "edit") {
				e.innerText = "Save";
                data.removeAttribute('readonly', 'readonly');
				data.focus();
			} else {
                data.setAttribute('readonly', 'readonly');  
				e.innerText = "Edit";
			}
		});
    }
})