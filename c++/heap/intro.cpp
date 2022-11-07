#include <bits/stdc++.h>
using namespace std;

class heap
{
    // 1-base indexing used
public:
    int arr[200];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletetheroot()
    {
        // t.c. = O(logn)
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }
        // step 1: put last element into first element
        arr[1] = arr[size];

        // step 2: remove last element
        size--;

        // step 3: teke root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;

            if (leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if (rightindex < size && arr[i] < arr[rightindex])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{

    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    // t.c. O(logn)
    int size = n;

    while (size > 1)
    {
        // step 1: swap
        swap(arr[size], arr[1]);
        size--;

        // step 2: place in correct place
        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(89);
    h.insert(84);
    h.insert(88);
    h.insert(83);
    h.insert(99);
    h.insert(91);
    h.print();
    h.deletetheroot();
    // h.print();

    int arr[6] = {-1, 54, 63, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    heapsort(arr, n);

    cout << "printing the array now" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // priority queue
    // maxheap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(32);
    pq.push(6);
    pq.push(67);
    pq.push(8);
    pq.push(456);

    cout << "element at Top " << pq.top() << endl;
    pq.pop();
    cout << "element at Top " << pq.top() << endl;
    cout << "Size is " << pq.size() << endl;
    cout << pq.empty() << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(5);
    minheap.push(32);
    minheap.push(6);
    minheap.push(67);
    minheap.push(8);
    minheap.push(456);

    cout << "element at Top " << minheap.top() << endl;
    minheap.pop();
    cout << "element at Top " << minheap.top() << endl;
    cout << "Size is " << minheap.size() << endl;
    cout << minheap.empty() << endl;

    return 0;
}