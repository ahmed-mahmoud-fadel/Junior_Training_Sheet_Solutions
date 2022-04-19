#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;  
	Node *next;
};  // can be modified

Node* top = NULL;
void push(int val) {
	Node* newnode = new Node;
	newnode->data = val;
	newnode->next = top;
	top = newnode;
}
void pop() {
	if (top == NULL)
		cout << "Stack Underflow" << endl;
	else {
		cout << "The popped element is " << top->data << endl;
		Node* newnode = top;
		top = top->next;
		delete newnode;
	}
}

//Function to verify whether a character is aplphanumberic character or not
bool isOperand(char x);
//function to verify wheter a charachter is operator or not
bool isOperator(char x);
//function verify whether an opertor has higher precedence over other
bool HasHigherPrecedence(char operator1, char operator2);
// This function to convert infix to postfix
string infixToPostfix(string exp);

int postfixEval(string post);

int main()
{	
	string exp = "9+(8+7)*6+5*(4+(3*2+1))";
	string postfix = infixToPostfix(exp);
    cout << "Output = " << postfix << endl;

	
	cout << "The result is: " << postfixEval(postfix);
	return 0;
}

//Function to evaluate postfix expression and return output
string infixToPostfix(string exp){
    stack<char> s;
    string postfix = "";
    for (int i = 0; i < exp.length(); i++)
    {
        //if char is operator, pop two element for stack, perform operation
        //and push the result back
        if(isOperator(exp[i])){
            while(!s.empty()&& s.top()!='(' && HasHigherPrecedence(s.top(), exp[i])){
                postfix +=s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
        //if char is operand
        if(isOperand(exp[i])){
            postfix += exp[i];
        }
        if(exp[i] == '('){
            s.push(exp[i]);
        }
        if(exp[i] == ')'){
            while(!s.empty() && s.top() != '('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
    }
    while (!s.empty()){
        postfix += s.top();
        s.pop();
    }
    return postfix;
    
}


// Function to verify whether a character is english letter or numeric digit. 
// We are assuming in this solution that operand will be a single character
bool isOperand(char c){
    return isalnum(c);
}
// Function to verify whether a character is operator symbol or not. 
bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return true;

    return false;
}
int getOperatorWeight(char op){
    int weight = -1;
    switch (op)
    {
    case '+':
    case '-':
        weight = 1;
        break;
    case '*':
    case '/':
        weight = 2;
        break;
    }
    return weight;
}
//function verify whether an opertor has higher precedence over other
bool HasHigherPrecedence(char op1, char op2){
    int op1weight = getOperatorWeight(op1);
    int op2weight = getOperatorWeight(op2);

    return op1weight > op2weight ? true: false;
}

int performOperation(int op1, int op2, char op){
    int ans = 0;
    switch (op) {
	case '+':
		ans = op2 + op1;
		break;
	case '-':
		ans = op2 - op1;
		break;
	case '*':
		ans = op2 * op1;
		break;
	case '/':
		ans = op2 / op1;
		break;
	}
    return ans;
}

int postfixEval(string post){
    int op1, op2;
    stack<int> s;
    for (char i: post)
    {
        if (i >= '0' && i <= '9') {
            s.push(i - '0');
        }
        else {
            op1 = s.top();
            s.pop();

            op2 = s.top();
            s.pop();

            s.push(performOperation(op1, op2, i));
        }
    }
    return s.top();
}
