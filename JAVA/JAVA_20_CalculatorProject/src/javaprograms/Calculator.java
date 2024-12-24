package javaprograms;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;

class Calculator implements ActionListener {

//	Variable Declaration;
	JFrame jf;
	JLabel displayLabel;

	Boolean isOperatorClicked = false;
	
	JButton oneButton;
	JButton twoButton;
	JButton threeButton;
	JButton fourButton;
	JButton fiveButton;
	JButton sixButton;
	JButton sevenButton;
	JButton eightButton;
	JButton nineButton;
	JButton zeroButton;
	
	JButton addButton;
	JButton subButton;
	JButton multiplyButton;
	JButton divideButton;
	JButton clearButton;
	JButton equalButton;
	
	String oldValue = "";	//To store first operand
	String newValue = "";	//To store second operand
	String operator = "";
	String resultS = "";	//To convert result into String to display
	float result = 0;		//To perform operation
	
	public Calculator() {

//		Frame parameters
		jf = new JFrame("Calculator");
		jf.setSize(600, 600);
		jf.setLayout(null);
		jf.setLocation(600, 300);
		
		
//		TextBox
		displayLabel = new JLabel();
		displayLabel.setBounds(30, 50, 530, 40);
		displayLabel.setBackground(Color.darkGray);
		displayLabel.setForeground(Color.white);
		displayLabel.setHorizontalAlignment(SwingConstants.RIGHT);
		displayLabel.setOpaque(true);
		jf.add(displayLabel);
		
//		Buttons
		oneButton = new JButton("1");
		oneButton.setBounds(30, 330, 80, 80);
		oneButton.addActionListener(this);
		jf.add(oneButton);

		twoButton = new JButton("2");
		twoButton.setBounds(180, 330, 80, 80);
		twoButton.addActionListener(this);
		jf.add(twoButton);
		
		threeButton = new JButton("3");
		threeButton.setBounds(330, 330, 80, 80);
		threeButton.addActionListener(this);
		jf.add(threeButton);
		
		fourButton = new JButton("4");
		fourButton.setBounds(30, 230, 80, 80);
		fourButton.addActionListener(this);
		jf.add(fourButton);

		fiveButton = new JButton("5");
		fiveButton.setBounds(180, 230, 80, 80);
		fiveButton.addActionListener(this);
		jf.add(fiveButton);
		
		sixButton = new JButton("6");
		sixButton.setBounds(330, 230, 80, 80);
		sixButton.addActionListener(this);
		jf.add(sixButton);
		
		sevenButton = new JButton("7");
		sevenButton.setBounds(30, 130, 80, 80);
		sevenButton.addActionListener(this);
		jf.add(sevenButton);
		
		eightButton = new JButton("8");
		eightButton.setBounds(180, 130, 80, 80);
		eightButton.addActionListener(this);
		jf.add(eightButton);
		
		nineButton = new JButton("9");
		nineButton.setBounds(330, 130, 80, 80);
		nineButton.addActionListener(this);
		jf.add(nineButton);
		
		zeroButton = new JButton("0");
		zeroButton.setBounds(180, 430, 80, 80);
		zeroButton.addActionListener(this);
		jf.add(zeroButton);
		
//		Operator Buttons
		addButton = new JButton("+");
		addButton.setBounds(480, 130, 80, 80);
		addButton.addActionListener(this);
		jf.add(addButton);
		
		subButton = new JButton("-");
		subButton.setBounds(480, 230, 80, 80);
		subButton.addActionListener(this);
		jf.add(subButton);
		
		multiplyButton = new JButton("*");
		multiplyButton.setBounds(480, 330, 80, 80);
		multiplyButton.addActionListener(this);
		jf.add(multiplyButton);
		
		divideButton = new JButton("/");
		divideButton.setBounds(480, 430, 80, 80);
		divideButton.addActionListener(this);
		jf.add(divideButton);
		
		clearButton = new JButton("Clear");
		clearButton.setBounds(30, 430, 80, 80);
		clearButton.addActionListener(this);
		jf.add(clearButton);
		
		equalButton = new JButton("=");
		equalButton.setBounds(330, 430, 80, 80);
		equalButton.addActionListener(this);
		jf.add(equalButton);
	
		
//		Frame parameters
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public static void main(String[] args) {
		new Calculator();
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		
//		Action Method
//		Check for button press to access its value
		if(e.getSource() == clearButton) {
			
			displayLabel.setText("");
			
		}else if(e.getSource() == zeroButton) {
			
//			Checking if operator is clicked
			if(isOperatorClicked) {
				displayLabel.setText("0");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"0");
			}
			
		}else if(e.getSource() == oneButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("1");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"1");
			}
			
		}else if(e.getSource() == twoButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("2");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"2");
			}
			
		}else if(e.getSource() == threeButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("3");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"3");
			}
			
		}else if(e.getSource() == fourButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("4");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"4");
			}
			
		}else if(e.getSource() == fiveButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("5");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"5");
			}
			
		}else if(e.getSource() == sixButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("6");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"6");
			}
			
		}else if(e.getSource() == sevenButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("7");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"7");
			}
			
		}else if(e.getSource() == eightButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("8");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"8");
			}
			
		}else if(e.getSource() == nineButton) {
			
			if(isOperatorClicked) {
				displayLabel.setText("9");
				isOperatorClicked = false;
			}else {			
				displayLabel.setText(displayLabel.getText()+"9 ");
			}
			
		}else if(e.getSource() == addButton) {
		
//			Assigning operator to global variable
			operator = "+";
			isOperatorClicked = true;
//			Assigning first value to "oldValue" Variable
			oldValue = displayLabel.getText();
			
		}else if(e.getSource() == subButton) {
			
			operator = "-";
			isOperatorClicked = true;
			oldValue = displayLabel.getText();
			
		}else if(e.getSource() == multiplyButton) {
			
			operator = "*";
			isOperatorClicked = true;
			oldValue = displayLabel.getText();
			
		}else if(e.getSource() == divideButton) {
			
			operator = "/";
			isOperatorClicked = true;
			oldValue = displayLabel.getText();
			
		}else if(e.getSource() == equalButton) {
			
			newValue = displayLabel.getText();
			float oldValueF = Float.parseFloat(oldValue);
			float newValueF = Float.parseFloat(newValue);
			
//			Performing Operations and displaying while pressing-
//			Equal to Button
			switch (operator) {
			case "+":
				result = oldValueF + newValueF;
				resultS = String.valueOf(result);
				displayLabel.setText(resultS);
				break;
			case "-":
				result = oldValueF - newValueF;
				resultS = String.valueOf(result);
				displayLabel.setText(resultS);
				break;
			case "*":
				result = oldValueF * newValueF;
				resultS = String.valueOf(result);
				displayLabel.setText(resultS);
				break;
			case "/": 
				result = oldValueF / newValueF;
				resultS = String.valueOf(result);
				displayLabel.setText(resultS);
				break;
			default:
				throw new IllegalArgumentException("Unexpected value: " + operator);
			}
			 
		}
	}
}