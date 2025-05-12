

public class  SmallIndices{
    public boolean  minimumAverageDifference(int[] nums,int m) {
	int len = nums.length, res = 0;
	long min = Integer.MAX_VALUE, sum = 0, leftSum = 0, rightSum = 0;
	for (int num : nums)
		sum += num;

    boolean flag=true;
	for (int i = 0; i < len; i++) {
		leftSum += nums[i];
		rightSum = sum - leftSum;
        
		long diff = Math.abs(leftSum  + (len - i == 1 ? 0 : rightSum / (len -i - 1)));
		if (diff == m) {
			min = diff;
			res = i;
            flag=false;
		}
	}
	return flag;
}
    public static void main(String[] args) {
        int [] arr = {1,2,3};
        int m=2;
        
    }
}