import java.util.Scanner;

public class PhoneBook {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int key1, key2, i;
		String input, name, phoneNumber;
		String[] nameSplit; //String array for first name and last name
		
		PhoneBookManager phoneBook = new PhoneBookManager();
		
		while(true){
			System.out.print("CP-2015-18634>");
			input = scan.nextLine();
			
			if(input.equals("")){
				System.out.println("Phone Book");
				System.out.println("1. Add person");
				System.out.println("2. Remove person");
				System.out.println("3. Print phone book");
				System.out.print("CP-2015-18634>");
				key1 = scan.nextInt();
				scan.nextLine(); //Consumes '\n'
				
				switch(key1){
				case 1: //1. Add person
					System.out.println("Select Type");
					System.out.println("1. Person");
					System.out.println("2. Work");
					System.out.println("3. Family");
					System.out.println("4. Friend");
					System.out.print("CP-2015-18634>");
					
					key2 = scan.nextInt();
					scan.nextLine(); //Consumes '\n'
					
					System.out.print("Name: ");
					name = scan.nextLine();
					
					//Remove blank before the first name
					for(i=0; i<name.length(); i++){
						if(name.charAt(i) != ' '){
							name = name.substring(i);
							break;
						}
					}
					//Split name to first name and last name
					nameSplit = name.split("\\s");
					
					System.out.print("Phone_number: ");
					
					//remove space or '-' in string value of phone number
					phoneNumber = scan.nextLine().replaceAll("(-|\\s+)", "");
					
					phoneBook.addCmd(key2, nameSplit[0], nameSplit[1], Integer.parseInt(phoneNumber));
					
					break;
					
				case 2: //2. Remove person
					System.out.print("Enter index of person: ");
					int index = scan.nextInt();
					scan.nextLine(); //Consumes '\n'
					
					phoneBook.removeCmd(index);
					
					break;
					
				case 3: //3. Print phone book
					phoneBook.print();
					break;
				}
			}else if(input.equals("exit")){
				System.out.println("Bye.");
				break;
			}else{
				System.out.println("Press enter to go next step!");
			}
		}
		
		scan.close();
		
	}
}
