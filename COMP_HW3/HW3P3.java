import java.util.Arrays;

public class HW3P3 {
	
	public static void main(String[] args) {
		
		Array[] arr1 = new Array[10];
		Array[] arr2 = new Array[10];
		
		for(int i=0; i<10; i++){
			arr1[i] = new Array(i);
			arr2[i] = new Array(i);
		}
		
		System.out.print("arr1 :");
		for(int i=0; i<10; i++){
			System.out.print(" " + arr1[i].value);
		}
		
		System.out.print("\narr2 :");
		for(int i=0; i<10; i++){
			System.out.print(" " + arr2[i].value);
		}
		
		System.out.println("\nArrays.equals() : " + Arrays.equals(arr1, arr2));
	}
	
}

class Array{
	
	int value;
	
	public Array(int a){
		value = a;
	}
	
	@Override
	public boolean equals(Object obj){
		if(this == obj) 
			return true;
		if(obj == null) 
			return false;
		if(this.getClass() != obj.getClass())
			return false;
		Array other = (Array) obj;
		if(value != other.value)
			return false;
		return true;
	}
}