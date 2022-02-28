#include "Queue.h"

int main(void) {
	Queue<int> A;

	A.enqueue(5);
	A.enqueue(3);

	cout << A.front() << endl;
	cout << A.size() << endl;
	
	A.dequeue();
	A.enqueue(7);
	A.dequeue();

	cout << A.front() << endl;
	
	A.dequeue();
	A.dequeue();

	//cout << A.empty() << endl;
	if (A.empty() == 1)
		cout << "True" << endl;
	else
		cout << "False" << endl;
}
