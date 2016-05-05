public class Person {
	
	private String firstName;
	private String lastName;
	private int phoneNumber;
	
	Person(String a, String b, int c){
		firstName = a;
		lastName = b;
		phoneNumber = c;
	}
	
	public void setFirstName(String a){
		firstName = a;
	}
	
	public String getFirstName(){
		return firstName;
	}
	
	public void setLastName(String a){
		lastName = a;
	}
	
	public String getLastName(){
		return lastName;
	}
	
	public void setPhoneNumber(int i){
		phoneNumber = i;
	}
	
	public int getPhoneNumber(){
		return phoneNumber;
	}
	
	void print(){
		System.out.print(firstName + " " + lastName + "_");
		String call = Integer.toString(phoneNumber); //convert integer value to string
		if(phoneNumber >= 1000000000){ //010-XXXX-XXXX
			call = "0" + call.substring(0, 2) + "-" + 
			       call.substring(2, 6) + "-" + call.substring(6);
		}else{ //02-XXXX-XXXX
			call = "0" + call.substring(0, 1) + "-" + 
			       call.substring(1, 5) + "-" + call.substring(5);
		}
		System.out.print(call);
	}
	
}
