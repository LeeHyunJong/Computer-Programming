import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class PhoneBookManager {
	
	Scanner scan = new Scanner(System.in);
	String input;
	List<Person> phoneBook = new ArrayList<Person>();
	
	public void addCmd(int key, String a, String b, int c){
		switch(key){
		case 1:
			//add newperson to back of the phonebook
			phoneBook.add(new Person(a, b, c));
			break;
		case 2:
			System.out.print("Team: ");
			//remove all of spaces from input
			input = scan.nextLine().replaceAll("\\s+", "");
			phoneBook.add(new Work(a, b, c, input));
			break;
		case 3:
			System.out.print("Birthday(YYMMDD): ");
			//remove all of spaces from input
			input = scan.nextLine().replaceAll("\\s+", "");
			phoneBook.add(new Family(a, b, c, input));
			break;
		case 4:
			System.out.print("Age: ");
			int age = scan.nextInt();
			scan.nextLine();
			phoneBook.add(new Friend(a, b, c, age));
			break;
		}
		System.out.println("Successfully added new person.");
	}
	
	public void removeCmd(int index){
		if(index >= phoneBook.size()){
			System.out.println("Person does not exist!");
		}else{
			phoneBook.remove(index);
			System.out.println("A person is successfully deleted from the Phone Book!");
		}
	}
	
	public void print(){
		if(phoneBook.isEmpty()) { 
			System.out.println("Phone Book is empty!"); 
		}else{
			for(Person p : phoneBook){
				p.print();
				System.out.println();
			}
		}
	}
}
