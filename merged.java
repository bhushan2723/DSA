public class Main {

    public static void divide(int arr[], int si, int end) {
        if (si >= end) {
            return; // Base case
        }
        int mid = si + (end - si) / 2; 
        
        divide(arr, si, mid); 
        divide(arr, mid + 1, end); 
        conquer(arr, si, mid, end); 
    }

    // Function to merge two sorted subarrays
    public static void conquer(int arr[], int si, int mid, int end) {
        int merged[] = new int[end - si + 1]; // Temporary array for merging
        int idx1 = si; // Starting index for the first half
        int idx2 = mid + 1; // Starting index for the second half
        int x = 0; // Index for the merged array

        while (idx1 <= mid && idx2 <= end)
        {
            if (arr[idx1] <= arr[idx2])
            {
                merged[x++] = arr[idx1++];
            } else {
                merged[x++] = arr[idx2++];
            }
        }

        // Copy remaining elements from the first half
        while (idx1 <= mid) {
            merged[x++] = arr[idx1++];
        }

        // Copy remaining elements from the second half
        while (idx2 <= end) {
            merged[x++] = arr[idx2++];
        }

        // Copy the merged array back to the original array
        for (int i = 0; i < merged.length; i++) {
            arr[si + i] = merged[i];
        }
    }

    public static void main(String[] args) {
        int[] arr = {10, 6, 9, 8, 7, 4, 5, 6};
        int n = arr.length;

        divide(arr, 0, n - 1); 

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

/* OUTPUT
4 5 6 6 7 8 9 10 
*/
