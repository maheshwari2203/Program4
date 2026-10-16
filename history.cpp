#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> history;
    history.push("google.com");
    history.push("youtube.com");
    history.push("abcsc.com");
    history.push("facebook.com");
    cout<<"Current Top: "<<history.top()<<endl;
    history.pop(); 
    cout<<"After 1 Back, Top: "<<history.top();
    cout<<endl;
    history.pop();
    cout<<"After 2 Back, Top: "<<history.top();
    cout<<endl;
    return 0;
}
