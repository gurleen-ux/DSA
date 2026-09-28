class MyStack {
public:

    queue<int> q1;
    queue<int> q2;

    MyStack() {
    }

    void push(int x) {

        // Put new element first
        q2.push(x);

        // Move old elements behind it
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // q1 becomes the main queue
        swap(q1, q2);
    }

    int pop() {

        int x = q1.front();
        q1.pop();

        return x;
    }

    int top() {

        return q1.front();
    }

    bool empty() {

        return q1.empty();
    }
};