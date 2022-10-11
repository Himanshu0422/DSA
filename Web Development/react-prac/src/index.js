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

import React from "react";
import ReactDom from "react-dom";

const d = new Date().toLocaleDateString();
const t = new Date().toLocaleTimeString();
const name = "Himanshu";
ReactDom.render(
	<React.Fragment>
		<h1>{`My name is ${name}.`}</h1>
		<p>{`Today's Date is ${d}`}</p>
		<p>{`Time: ${t}`}</p>
	</React.Fragment>,
	document.getElementById('root')
)