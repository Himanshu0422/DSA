// let ele = React.createElement('h1', null, 'Hello World');
// let div = document.querySelector('div');

let ele = React.createElement('div', null, React.createElement('p', null, 'helo'));

// let ele = <h1>Hello</h1>
let div = document.querySelector('div');

ReactDOM.render(ele, div);