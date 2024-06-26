#include <iostream>
#include<string>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;


struct tNode {
	int data;
	tNode* front;
	tNode* back;

	//strcut 초기화
	tNode(int _data, tNode* _front, tNode* _back) :data(_data), front(_front), back(_back){}
};

class LinkedList {
public:
	int count;
	tNode* first;
	tNode* last;

	void empty() {
		if (count == 0) {
			cout << "1" << "\n";
		}
		else {
			cout << "0" << "\n";
		}
	}
	void size() {
		cout << count << "\n";
	}
	// nullptr = 포인터 값을 초기화하기 위한 상수
	void push_front(int X) {
		tNode* tn = new tNode(X, nullptr, nullptr);
		if (count == 0) {
			last = tn;
		}
		else {
			first->front = tn;
			tn->back = first;
		}
		first = tn;
		count++;
	}
	void push_back(int X) {
		tNode* tn = new tNode(X, nullptr, nullptr);
		if (count == 0) {
			first = tn;
		}
		else {
			last->back = tn;
			tn->front = last;
		}
		last = tn;
		count++;
	}
	void pop_front() {
		if (count > 0) {
			cout << first->data << "\n";
			if (count == 1) {
				delete(first);
				first = last = nullptr;
			}
			else {
				tNode* tn = first->back;
				delete(first);
				tn->front = nullptr;
				first = tn;
			}
			count--;
		}
		else {
			cout << "-1" << "\n";
		}
	}
	void pop_back() {
		if (count > 0) {
			cout << last->data << "\n";
			if (count == 1) {
				delete(last);
				first = last = nullptr;
			}
			else {
				tNode* tn = last->front;
				delete(last);
				tn->back = nullptr;
				last = tn;
			}
			count--;
		}
		else {
			cout << "-1" << "\n";
		}
	}
	void front() {
		if (count > 0) {
			cout << first->data << "\n";
		}
		else {
			cout << "-1" << "\n";
		}
	}
	void back() {
		if (count > 0) {
			cout << last->data << "\n";
		}
		else {
			cout << "-1" << "\n";
		}
	}

	LinkedList() :first(nullptr), last(nullptr), count(0) {}
};


int main(void) {
	FASTIO;

	LinkedList list;
	int N;

	cin >> N;
	while (N--) {
		string str;
		int a;

		cin >> str;

		if (str == "push_back") {
			cin >> a;
			list.push_back(a);
		}
		else if (str == "push_front") {
			cin >> a;
			list.push_front(a);
		}
		else if (str == "pop_front") {
			list.pop_front();
		}
		else if (str == "pop_back") {
			list.pop_back();
		}
		else if (str == "size") {
			list.size();
		}
		else if (str == "empty") {
			list.empty();
		}
		else if (str == "front") {
			list.front();
		}
		else {
			list.back();
		}
	}

	return 0;
}
