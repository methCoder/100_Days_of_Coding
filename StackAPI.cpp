#include <iostream>
using namespace std;

struct Stack {
    
  int *item;
  int top;
  int size;

}s;
// Function prototype declaration:

void createStack();
void printInformations();
void push();
int pop();
int top();
void printStack();
void init(Stack *, int);




int main() {
    
    bool temp = true;
    
    while(temp){
        
        // Decision coding starts here : 
        
        cout << "Enter your choice : " << endl;
        cout << "*********************" << endl;
        printInformations();
        int choice;
        cin >> choice;
        cout << '\n';
        
        // Decision coding ends here:
        
        switch(choice){
            
            case 0 : createStack();
            break;
        
            case 1 : printStack();
            break;
            
            case 2 : push();
            break;
            
            case 3 : cout << pop() << endl;
           
            break;
            
            case 4 : cout << top() << endl;
            break;
            
            default : temp = false;
            break;
        
        }
    
    }
    
    return 0;
}

void printInformations() {
    
    cout << "0. Create a stack : " << endl;
    cout << "1. Print Stack : " << endl;
    cout << "2. Push an element to stack : " << endl;
    cout << "3. Pop the stack : " << endl;
    cout << "4. Top element : " << endl;
    cout << "5. Exit the Stack : " << endl;

}

void init(Stack *sp, int size) {
    sp->item = new int [size];
    sp->top = -1;
    sp->size = size;
    
    cout << "A stack of " << size << " element has been initialized. " << endl;
}

void push(){
    
    if(s.top == s.size-1){
        
        cout << "Stack Overflow...." << endl;
        return;
    }
    
    cout << "Enter the number to be pushed : " << endl;
    int pushNumber;
    cin >> pushNumber;
    
    s.top++;
    s.item[s.top] = pushNumber;
    return;
}

int pop() {
    
    if(s.top < 1){
        cout << "Stack Underflows : " << endl;
    }
    
    int temp = s.item[s.top];
    s.top--;
    return temp;
}

int top() {
        
    return s.top;
}

void printStack() {
    
    if(s.top < 1){
        cout << "Stack is Empty...Try again." << endl;
        return;
    }
    
    int i;
    
    for(i=0; i <= s.top; ++i){
        cout << s.item[i] << endl;
    }
    
    return;
}

void createStack() {

    cout << "Enter the size of stack you want : " << endl;
    int size;
    cin >> size;
    
    init(&s,size);
    
}
