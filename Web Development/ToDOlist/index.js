var taskIndex = 0;

const list = document.querySelector('.main-list');

function Add() {
    const text = document.getElementById('newText').value;
    if (text === '') {
        alert("Pls Enter Task")
    } else {
        const task =
            `<li>
            <div class="item" id="${taskIndex}">
            <button class="delete" onclick="deleteTask('${taskIndex}')">X</button>
            <button class="up" onclick="up('${taskIndex}')">↑</button>
            <button class="down" onclick="down('${taskIndex}')">↓</button>
            <div class="text">${text}</div>
            </div>    
            </li>
            `
        list.innerHTML += task;
        taskIndex++;
    }
}

function deleteTask(i) {
    document.getElementById(i).style.display = 'none';
}