int findMax(int arr[], int n) {
    int max;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

//question-1 -ans-->max is uninitialized, leading to undefined behavior.
//question-2 -ans-->May return garbage values or crash. 
