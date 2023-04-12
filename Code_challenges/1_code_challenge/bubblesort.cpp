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
}}

/*The command git config pull.rebase false sets the configuration 
option pull.rebase to false for the current repository. This means that 
when you run git pull, Git will perform a merge to integrate changes from the 
remote branch into your local branch. This is the default behavior of git pull 
if you do not specify any options. During a merge, Git will create a new merge 
commit that combines the changes from both branches. This can result in a non-linear 
history, but it preserves the context of each change and makes it 
easier to understand how the changes were integrated.*/