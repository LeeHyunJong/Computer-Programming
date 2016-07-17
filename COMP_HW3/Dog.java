
public class Dog {
	
	void bark(){
		System.out.println("barking!");
	}
	void bark(String a){
		System.out.println(a + " barking");
	}
	void bark(int n, String b){
		System.out.println(n + " " + b + " barking");
	}
	
	public static void main(String[] args) {
		
		Dog dog = new Dog();
		
		dog.bark();
		dog.bark("dog");
		dog.bark(2, "time");
	
	}
	
}
