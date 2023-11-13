#include<iostream>
using namespace std;

class Queue {
public:
	int queue[10000];
	int begin = 0;
	int end = 0;
	Queue() {}
	void push(int X) {
		queue[end] = X;
		end += 1;
	}
	int empty() {
		if (end == begin){
			return 1;
		}
		else{
			return 0;
		}
	}
	int pop() {
		if (empty()==1)
		{
			return -1;
		}
		begin ++;
		return queue[begin - 1];
	}
	int size() {
		return end - begin;
	}
	int front() {
		if (empty()==1){
			return -1;
		}
		return queue[begin];
	}

	int back() {
		if (empty()==1){
			return -1;
		}
		return queue[end - 1];
	}
};

int main() {
	int N;
	cin >> N;

	Queue q;

	while (N--) {
		string cmd; 
		cin >> cmd;
		if (cmd == "push"){
			int input;
			cin >> input;
			q.push(input);
		}
		else if (cmd == "pop"){
			cout << q.pop() << endl;
		}
		else if (cmd == "size"){
			cout << q.size() << endl;
		}
		else if (cmd == "empty"){
			cout << q.empty() << endl;
		}
		else if (cmd == "front") {
			cout << q.front() << endl;
		}
		else if (cmd == "back"){
			cout << q.back() << endl;
		}
	}

	return 0;
}
