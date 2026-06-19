#include <stack>
#include <iostream>

using namespace std;

class Queen {
	
	public:
		pair<int, int> pos;
		
		Queen(int x, int y) {
			pos.first = x;
			pos.second = y;
		}
		
		bool isDiagonal(Queen other) {
			if (abs(pos.first-other.pos.first) == abs(pos.second-other.pos.second))
				return true;
			return false;
		}
		
		bool inCheck(Queen other) {
			if (pos.first == other.pos.first || pos.second == other.pos.second || isDiagonal(other))
				return true;
			return false;
		} 
		void print() {
			cout << "(" << pos.first << ", " << pos.second << ")" << endl;
			
		}

};

bool Works(Queen tester, stack<Queen> &goodStack, int size) {
	stack<Queen> checkStack = goodStack;
	while (!checkStack.empty()) {
		if (!tester.inCheck(checkStack.top())) {
			checkStack.pop();
		}
		else {
			return false;
		}
		
	}
	goodStack.push(tester);
	return true;
}

void AllTogether(int row, stack<Queen> &goodStack, stack<Queen> &finalStack, int size) {
	if (row > size) {
		finalStack = goodStack;
		return;
	}
	for (int col = 1; col <= size; col++) {
		Queen tester(col, row);
		if (Works(tester, goodStack, size)){
			
			AllTogether(row+1, goodStack, finalStack, size);
			goodStack.pop();
		}
		
	}
}

int main() {
	
	int size = 0;
	cout << "Enter board size: " << endl;
	cin >> size;
	
	stack<Queen> goodStack;
	stack<Queen> finalStack;
	AllTogether(1, goodStack, finalStack, size);
	
	stack<Queen> printStack;
    while (!finalStack.empty()) {
        printStack.push(finalStack.top());
        finalStack.pop();
    }
    while (!printStack.empty()) {
        printStack.top().print();
        printStack.pop();
    }
		

    return 0;
}