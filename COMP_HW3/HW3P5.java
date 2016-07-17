import java.util.Scanner;

public class HW3P5 {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int index = input.nextInt();
		
		Fibonacci fibo = new Fibonacci();
		
		fibo.printFibo(index);
		
		input.close();
	}
}

class Fibonacci {
	public void printFibo(int n){
		
		int[] fibo = new int[n];
		fibo[0] = 1;
		fibo[1] = 1;
		for(int i=2; i<n; i++){
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
		
		String s = "";
		for(int i=0; i<n; i++){
			s += (fibo[i] + ", ");
		}
		System.out.println(s.substring(0, s.length()-2));
	}
}
