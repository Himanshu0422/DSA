// var React = require('react');
// var ReactDOM = require('react-dom');
// import React from 'react';
// import ReactDOM from 'react-dom';

// ReactDOM.render( 
// 	<div>
// 		<h1> Gambare - Gambare </h1> 
// 		<p>Hlo</p>
// 	</div>,
// 	document.getElementById("root")
// );

// ReactDOM.render( 
// 	<>
// 		<h1> Gambare - Gambare </h1> 
// 		<p>Hlo</p>
// 	</>,
// 	document.getElementById("root")
// );

// ReactDOM.render( 
// 	<React.Fragment>
// 		<h1>Anime List</h1> 
// 		<p>Hlo</p>
// 		<ol>
// 			<li>One Piece</li>
// 			<li>One Piece</li>
// 			<li>One Piece</li>
// 			<li>One Piece</li>
// 			<li>One Piece</li>
// 		</ol>
// 	</React.Fragment>,
// 	document.getElementById("root")
// );

// ReactDOM.render(React.createElement("h1", null, "Hlo - Gambare"), document.getElementById("root"));

// const name = "Himanshu"
// const last = "M"
// ReactDOM.render(
// 	<React.Fragment>
// 		<h1>{`Hlo, I m ${name} ${last}`}</h1>
// 	</React.Fragment>,
// 	document.getElementById('root')
// )

// import React from "react";
// import ReactDom from "react-dom";

// const d = new Date().toLocaleDateString();
// const t = new Date().toLocaleTimeString();
// const name = "Himanshu";
// ReactDom.render(
// 	<React.Fragment>
// 		<h1>{`My name is ${name}.`}</h1>
// 		<p>{`Today's Date is ${d}`}</p>
// 		<p>{`Time: ${t}`}</p>
// 	</React.Fragment>,
// 	document.getElementById('root')
// )

// import React from 'react';
// import ReactDOM from 'react-dom';
// import './index.css';

// const name1 = "Himanshu"
// const img1 = 'https://picsum.photos/200/300';

// ReactDOM.render(
// 	<React.Fragment>
// 		<h1 className="heading" contentEditable="true">My name is {name1}.</h1>
// 		<div className="im">
// 			<img src={img1} alt='random images' />
// 		</div>
// 	</React.Fragment>,
// 	document.getElementById('root')
// )

// import React from 'react';
// import ReactDOM from 'react-dom';

// const name1 = "Himanshu"
// const img1 = 'https://picsum.photos/200/300';
// const heading = {
// 	color: 'red',
// 	textAlign: 'center',
// 	fontFamily: '"Silkscreen", cursive',
// 	fontWeight: 'bold',
// 	textShadow: '0px 2px 4px green'
// }

// ReactDOM.render(
// 	<React.Fragment>
// 		<h1 style={heading} contentEditable="true">My name is {name1}.</h1>
// 		<div style={{display: 'flex', justifyContent: 'center'}}>
// 			<img src={img1} alt='random images' />
// 		</div>
// 	</React.Fragment>,
// 	document.getElementById('root')
// )

// import React from 'react';
// import ReactDOM from 'react-dom';
// import './index.css';

// const curr = new Date(2022, 10, 11, 5);
// const currH = curr.getHours();
// let val = '';
// const hlod = {};

// if(currH >= 1 && currH < 12){
// 	val = 'Good Morning';
// 	hlod.color = 'red';
// }else if(currH >=12 && currH < 19){
// 	val = 'Good Afternoon';
// 	hlod.color = 'orange';
// }else{
// 	val = 'Good Night';
// 	hlod.color = 'green';
// }

// ReactDOM.render(
// 	<React.Fragment>
// 		<div className='divn'>
// 			<h1>Hello, <span style={hlod}>{val}</span></h1>
// 		</div>
// 	</React.Fragment>,
// 	document.getElementById('root')
// )
// <h1>Hi, My name is Himanshu</h1>
// <p>My Anime List</p>

import React from "react";
import ReactDOM from "react-dom/client";
import App from "./App";

// ReactDOM.render(
// 	<React.Fragment>
// 		<App />
// 	</React.Fragment>,
// 	document.getElementById('root')
// )

ReactDOM.createRoot(document.getElementById('root')).render(<App />);