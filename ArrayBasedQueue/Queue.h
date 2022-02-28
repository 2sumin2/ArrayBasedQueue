#include <iostream>

using namespace std;
template <typename E>
class Queue {
	enum { DEF_CAPACITY = 100 };
public:
	Queue(int cap = DEF_CAPACITY);
	int size() const;
	bool empty() const;
	const E& front() const;
	void enqueue(const E& e);
	void dequeue();
private:
	E* Q;
	int capacity;
	int n;
	int f;
	int r;
};

template <typename E> Queue<E>::Queue(int cap)
	: Q(new E[cap]), capacity(cap), f(0) { }

template <typename E> int Queue<E>::size() const
{
	return n;
}

template <typename E> bool Queue<E>::empty() const
{
	return n <= 0;
}

template <typename E> const E& Queue<E>::front() const
{
	if (empty()) cout << "QueueEmpty" << endl;
	return Q[f];
}

template <typename E> void Queue<E>::enqueue(const E& e)
{
	if (size() == capacity) cout << "QueueFull" << endl ;
	Q[r] = e;
	r = (r + 1) % capacity;
	n = n + 1;
}

template <typename E> void Queue<E>::dequeue()
{
	if (empty()) cout << "QueueEmpty" << endl ;
	f = (f + 1) % capacity;
	n = n - 1;
}

