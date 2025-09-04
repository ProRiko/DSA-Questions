class MissingNumber {
    static int findMissing(int arr[], int n) {
        int total = n * (n + 1) / 2;
        int sum = 0;
        for (int i = 0; i < n-1; i++) sum += arr[i];
        return total - sum;
    }

    public static void main(String[] args) {
        int arr[] = {1, 2, 4, 5};
        int n = 5;
        System.out.println(findMissing(arr, n)); // 3
    }
}
