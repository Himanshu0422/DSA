class Calculator {
    constructor(previousOperandText, currentOperandText) {
        this.previousOperandText = previousOperandText
        this.currentOperandText = currentOperandText;
        this.clear();
    }

    clear() {
        this.previousOperand = '';
        this.currentOperand = '';
        this.operation = undefined;
    }

    delete() {
        this.currentOperand = this.currentOperand.toString().slice(0, -1);
    }

    append(number) {
        if (number === '.' && this.currentOperand.includes('.')) return;
        this.currentOperand = this.currentOperand.toString() + number.toString();
    }

    choseOperation(operation) {
        if (this.currentOperand === '') return;
        if (this.previousOperand !== '') {
            this.compute();
        }
        this.operation = operation;
        this.previousOperand = this.currentOperand;
        this.currentOperand = '';
    }

    compute() {
        let computation;
        const prev = parseFloat(this.previousOperand);
        const current = parseFloat(this.currentOperand);

        if (isNaN(prev) || isNaN(current)) return;

        switch (this.operation) {
            case '+':
                computation = prev + current;
                break;

            case '-':
                computation = prev - current;
                break;
            case '*':
                computation = prev * current;
                break;
            case '/':
                computation = prev / current;
                break;
            default:
                return;
        }
        this.currentOperand = computation;
        this.operation = undefined;
        this.previousOperand = '';
    }

    getDisplayNumbder(number){
        const stringNumber = number.toString();
        const integerDigits = parseFloat(stringNumber.split('.')[0]);
        const decimalDigits = stringNumber.split('.')[1];
        let integerDisplay;
        if(isNaN(integerDigits)){
            integerDisplay = '';
        }else{
            integerDisplay = integerDigits.toLocaleString('en', {maximumFractionDigits: 0});
        }
        if(decimalDigits != null){
            return `${integerDisplay}.${decimalDigits}`
        }else{
            return integerDisplay;
        }
    }

    update() {
        this.currentOperandText.innerText = this.getDisplayNumbder(this.currentOperand);
        if(this.operation != null){
            this.previousOperandText.innerText = `${this.getDisplayNumbder(this.previousOperand)} ${this.operation}`;
        }else{
            this.previousOperandText.innerText = '';
        }
    }
}


const numberButtons = document.querySelectorAll("[data-number]");
const operationButtons = document.querySelectorAll("[data-operation]");
const equalButton = document.querySelector("[data-equals]");
const allClearButton = document.querySelector("[data-all-clear]");
const deleteButton = document.querySelector("[data-delete]");
const previousOperandText = document.querySelector("[data-previous-operand]");
const currentOperandText = document.querySelector("[data-current-operand]");

const calculator = new Calculator(previousOperandText, currentOperandText);

numberButtons.forEach((button) => {
    button.addEventListener('click', () => {
        calculator.append(button.innerText);
        calculator.update();
    })
});

operationButtons.forEach((button) => {
    button.addEventListener('click', () => {
        calculator.choseOperation(button.innerText);
        calculator.update();
    })
});

equalButton.addEventListener('click', () => {
    calculator.compute();
    calculator.update();
});

allClearButton.addEventListener('click', () => {
    calculator.clear();
    calculator.update();
});

deleteButton.addEventListener('click', () => {
    calculator.delete();
    calculator.update();
});

// let string = "";
// let buttons = document.querySelectorAll(".button");

// Array.from(buttons).forEach((button)=>{
//     button.addEventListener('click', (e)=>{
//         if(e.target.innerHTML == "="){
//             string = eval(string);
//             document.querySelector('input').value = string;
//         }else if(e.target.innerHTML == "AC"){
//             string = "";
//             document.querySelector('input').value = string;
//         }else{
//             console.log(e.target);
//             string = string + e.target.innerHTML;
//             document.querySelector('input').value = string;
//         }
//     })
// })