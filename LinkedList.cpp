#include <iostream>
#include<string>
#include<time.h>
#include<string.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

int main(void) {
	struct Node* start = NULL;
	struct Node* end = NULL;
	struct Node* current;

	for (int i = 1; i < 6; i++) {
		current = (struct Node*)malloc(sizeof(struct Node));
		current->data = i;
		current->next = NULL;
		if (start == NULL) {
			start = end = current;
		}
		else {
			end->next = current;
			end = current;
		}
	}

	current = start;
	while (current != NULL) {
		cout << current->data << endl;
		current = current->next;
	}
}
