// Function to implement the bubble sort algorithm
void bubbleSort(int arr[], int n) {
    // Iterate over the elements of the array
    for (int i = 0; i < n-1; i++) {
        // Compare adjacent elements and swap them if they are in the wrong order
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}