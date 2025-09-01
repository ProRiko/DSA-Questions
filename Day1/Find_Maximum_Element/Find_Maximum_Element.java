package Day1.Find_Maximum_Element;

class MaxElement {
    public static int findMax(int[] arr) {
        int maxVal = arr[0];
        for(int num : arr) {
            if(num > maxVal) maxVal = num;
        }
        return maxVal;
    }
    public static void main(String[] args) {
        int[] arr = {3,7,2,9,5};
        System.out.println(findMax(arr)); // 9
    }
}
