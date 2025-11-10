#include <iostream>
#include <vector>
using namespace std;

class Heap {
private:
    vector<int> data;
    bool isMinHeap;

    bool compare(int a, int b) {
        return isMinHeap ? a < b : a > b;
    }

    void heapiUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (compare(data[index], data[parent])) {
                swap(data[index], data[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

public:
    Heap(bool isMin = true) {
        isMinHeap = isMin;
    }

    void insert(int value) {
        data.push_back(value);
        heapiUp(data.size() - 1);
    }

    void printHeap() {
        for (int val : data) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap minHeap(true);
    cout << "Min Heap Insertion:\n";
    minHeap.insert(10);
    minHeap.insert(5);
    minHeap.insert(20);
    minHeap.insert(3);
    minHeap.insert(8);
    minHeap.printHeap(); 

    Heap maxHeap(false);
    cout << "Max Heap Insertion: \n";
    maxHeap.insert(10);
    maxHeap.insert(5);
    maxHeap.insert(20);
    maxHeap.insert(3);
    maxHeap.insert(8);
    maxHeap.printHeap();  

    return 0;
}
