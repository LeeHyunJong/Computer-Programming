public class Friend extends Person{
	private int age;
	
	public Friend(String a, String b, int c, int n) {
		super(a, b, c);
		age = n;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}
	
	public void print(){
		super.print();
		System.out.print("_" + age);
	}
}
