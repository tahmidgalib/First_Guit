#include<iostream>
using namespace std;

void max_heapify(int heap[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;


    if (l < n && heap[l] > heap[largest])
        largest = l;

    if (r < n && heap[r] > heap[largest])
        largest = r;

    if (largest != i) {
        swap(heap[i], heap[largest]);

        max_heapify(heap, n, largest);
    }
}

void build_max_heap(int heap[], int n) {
    for (int i = n / 2; i >= 1; i--)
        max_heapify(heap, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(heap[0], heap[i]);
        max_heapify(heap, i, 0);
    }
}

void heap_sort(int heap[], int n) {
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int heap[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> heap[i];
    }

    cout << "Input array: ";
    heap_sort(heap, n);

    build_max_heap(heap, n);

    cout << "The sorted  final array: ";
    heap_sort(heap, n);

    return 0;
}

