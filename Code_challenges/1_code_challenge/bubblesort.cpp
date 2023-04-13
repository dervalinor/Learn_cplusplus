void bubbleSort(int arr[], int n) { //arr[] is an array. An array is different from vector
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]); // swap adjacent elements if they are in the wrong order
            }
        }
    }
}

/*This code is a C++ implementation of the bubble sort algorithm. It sorts an array of integers in ascending order by repeatedly comparing and swapping adjacent elements if they are in the wrong order.

To explain this code with apples as an example, imagine you have a basket of apples with different weights. You want to arrange the apples in ascending order of their weights. You can use this bubble sort algorithm to achieve that.

First, you compare the weight of the first apple with the second apple. If the first apple is heavier than the second apple, you swap their positions. Then you compare the second apple with the third apple and swap their positions if necessary. You continue this process until you reach the last apple in the basket.

After the first pass, the heaviest apple will be at the end of the basket. Then you repeat this process for the remaining apples in the basket, excluding the last apple since it is already in its correct position.

You continue this process until all apples are sorted in ascending order of their weights. That’s how this bubble sort code works. */