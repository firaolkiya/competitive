class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int head=0;
        int tail=numbers.length-1;
        int arr[]=new int[2];
        while(head<tail){
            if(numbers[head]+numbers[tail]==target){
                arr[0]=head+1;
                arr[1]=tail+1;
                return arr;
            }
            else if(numbers[head]+numbers[tail]<target)
             head++;
             else
             tail--;
        }
        return arr;
    }
}