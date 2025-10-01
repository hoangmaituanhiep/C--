#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maxn 1000000009

class Stack{
    public:
        ll top = 0;
        ll stack[maxn];

        void push(ll n){
            stack[top] = n;
            ++top;
        }

        bool isEmpty(){
            return top == 0;
        }

        void pop(){
            if (top==0){
                //
            }
            else{
                --top;
            }
        }
        void peek(){
            if (top==0){
                //
            }
            else{
                cout<<'\n'<<stack[top];
            }
        }
};

int main() {
    init
    Stack new_stack;
    new_stack.peek();
    return 0;
}