package two_sum;

public class solution {
	
	    public int[] twoSum(int[] nums, int target) 
	    {
	        for (int i = 0; i < nums.length; i++)
			{
				for (int j = i+1; j < nums.length; j++)
				{
					int count = nums[i] + nums[j];   
					if (count == target)
					{
						System.out.println(i+" "+j);
						return new int[] {i, j};
					}
				}
			}
	        throw new IllegalArgumentException("No two sum solution");
	    }
	}
