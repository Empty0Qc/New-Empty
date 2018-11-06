
public  class Java_1106{
	public class void Math(int n)
	{
		for(int i=0; i<=n; i++)
		{
			while(n%i == 0)
			{
				System.out.print(i);
				n /= i;
				if(n!=1)
					System.out.print("*");
			}
		}
	}
	public static void main(String [] args){
		Java_1106.Math(60);
		System.out.println();
	}
}