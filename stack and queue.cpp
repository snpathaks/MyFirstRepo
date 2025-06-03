


//Stack implementation Using Array:::::::::::::::::::::::
/*
#include<iostream>
using namespace std;
class Stack {
    int *arr;
	int top;
	int size;
	public: 
	Stack(int size) {
	  this->size=size;
	  arr = new int[size];
	  top = -1;
   }
void push(int element) {
     if(size-top>1){
       top++;
       arr[top] = element;
   }
   else{
   cout<<"Stack overflow"<<endl;
    }
}

void pop() {
    if(top>=0) {
    top--;
  } else{
    cout<<"Stack Underflow"<<endl;
  }

}

int peek(){
   if(top>=0){
     return arr[top];
   }
   else{
   cout<<"Stack is empty"<<endl;
   return -1;
   }
}

bool isempty(){
   if(top==-1) {
     return true;
 } else{
    return false;
 }
      
}

       
     
};



int main() {
	
	Stack st(5);
	
	st.push(22);
	st.push(43);
	st.push(44);
	st.push(76);
	
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	if(st.isempty()) {
	  cout<<"Stack is empty"<<endl;
	}
	else{
	  cout<<"Stack is not empty"<<endl;
	}
	
}*/ 

//Implement 2 Stacks in an array::::::::::::::::::
/*
#include<iostream>
using namespace std;
class TwoStack {
    int *arr;
	int top1;
	int top2;
	int size;
	public: 
	TwoStack(int s) {
	  this->size=s;
	  arr = new int[s];
	  top1 = -1;
	  top2 = s;
   }
void push1(int num) {
   if(top2-top1>1){
       top1++;
       arr[top1] = num;
   }
   else{
   cout<<"Stack overflow"<<endl;
    }
}
void push2(int num) {
     if(top2-top1>1){
       top2--;
       arr[top2] = num;
   }
   else{
   cout<<"Stack overflow"<<endl;
    }
}

int pop1() {
  if(top1>=0) {
    int ans = arr[top1];
    top1--;
    return ans;
 }else{
     return -1;
  }

}
int pop2() {
 if(top2<size) {
    int ans = arr[top2];
    top2++;
    return ans;
 }else{
     return -1;
 }
    	
  

}

//int peek(){
//   if(top>=0){
//     return arr[top];
//   }
//   else{
//   cout<<"Stack is empty"<<endl;
//   return -1;
//   }
//}

//bool isempty(){
//   if(top==-1) {
//     return true;
// } else{
//    return false;
// }
//      
//}

};
int main() {
	
	TwoStack st(5);
	
	st.push1(22);
	st.push1(43);
	st.push2(44);
	st.push2(76);
	
	//cout<<st.peek()<<endl;
	st.pop1();
	st.pop2();
	//cout<<st.peek()<<endl;
//	if(st.isempty()) {
//	  cout<<"Stack is empty"<<endl;
//	}
//	else{
//	  cout<<"Stack is not empty"<<endl;
//	}
	
} */

//Reverse a string using stack::::::::::::::::::::::
/*
#include<iostream>
#include<stack>
using namespace std;

int main () {
	string str = "daddu";
	stack<char> s;
	for(int i=0; i<str.length(); i++) {
		char ch = str[i];
		s.push(ch);
	}
     string ans ="";
     while(!s.empty()) {
     	char ch = s.top();
     	ans.push_back(ch);
     	s.pop();
	 }
	 cout<<"Reverse of daddu is "<<ans<<endl;
} */

//Delete middle element from stack::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>
#include <stack>
using namespace std;

// Function to delete the middle element of the stack
void deleteMiddle(stack<int>& s, int current, int size) {
    // Base case: If we've reached the middle
    if (current == size / 2) {
        s.pop();
        return;
    }

    // Remove the top element and hold it in a temporary variable
    int temp = s.top();
    s.pop();

    // Recursive call to delete the middle element
    deleteMiddle(s, current + 1, size);

    // Push the elements back except for the middle one
    s.push(temp);
}

// Helper function to delete the middle element
void deleteMiddleElement(stack<int>& s) {
    int size = s.size();
    if (size == 0)
        return; // If the stack is empty, nothing to delete

    deleteMiddle(s, 0, size);
}

// Function to print the stack (in reverse order, to display as a stack)
void printStack(stack<int> s) {
    if (s.empty())
        return;

    int temp = s.top();
    s.pop();
    printStack(s);
    cout << temp << " ";
}

int main() {
    stack<int> s;

    // Push elements into the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Original stack: ";
    printStack(s);
    cout << endl;

    // Deleting the middle element
    deleteMiddleElement(s);

    cout << "Stack after deleting middle element: ";
    printStack(s);
    cout << endl;

    return 0;
} 

// valid parenthesis::::::::::::::::::::::::::::::::::::::::::

//by babbar
/*
#include<iostream>
#include<stack>
using namespace std;
int main () {
 string exp;
 stack<char> s;
 for(int i=0; i<exp.length(); i++) {
	char ch = exp[i];
	
	if(ch =='(' || ch =='{' || ch == '[') {
		s.push(ch);
	}
  
  else{
	if(!s.empty()) {
		char top = s.top();
		if((ch ==')' && top =='(' ) ||
		( ch == '}' && top == '{') ||
		( ch == ']' && top == '[') ) {
			s.pop();
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
 }
}  
  
}*/

//chatgpt::
/*
#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesesStack(const string& s) {
    stack<char> st;

    // Iterate through each character in the string using a traditional for loop
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // Push the opening brackets onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        // When encountering a closing bracket
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If stack is empty or top of the stack doesn't match, return false
            if (st.empty()) return false;
            
            char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop(); // Pop the matched opening bracket
            } else {
                return false; // Invalid closing bracket
            }
        }
    }

    // If the stack is empty, all brackets were matched
    return st.empty();
}

int main() {
    string input;

    cout << "Enter parentheses string to check: ";
    cin >> input;

    if (isValidParenthesesStack(input)) {
        cout << "Valid parentheses using stack!" << endl;
    } else {
        cout << "Invalid parentheses using stack!" << endl;
    }

    return 0;
}*/

// insert an element in the bottom of a stack:::::::::::
/*
#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of the stack
void insertAtBottom(stack<int>& s, int x) {
    // Base case: If the stack is empty, push the element
    if (s.empty()) {
        s.push(x);
        return;
    }

    // Hold the top element and pop it
    int topElement = s.top();
    s.pop();

    // Recursive call to insert the element at the bottom
    insertAtBottom(s, x);

    // Push the top element back onto the stack
    s.push(topElement);
}

int main() {
    stack<int> s;

    // Pushing elements into the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Original stack (top to bottom): 4 3 2 1" << endl;

    int elementToInsert = 0;
    insertAtBottom(s, elementToInsert);

    // Printing the updated stack
    cout << "Stack after inserting " << elementToInsert << " at the bottom: ";

    // Print the stack (temporary stack to reverse order)
    stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    // Display the stack in correct order
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;

    return 0;
}*/











