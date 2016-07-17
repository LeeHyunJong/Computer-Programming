import java.util.Random;

public class HW3P4 {
	
	public static void main(String[] args) {
		
		Random rand = new Random();
		
		//ASCII code for letter : 65 - 122 except 91-96
		
		char randCharacter;
		
		//make random number until randCharacter == Letter(Alphabet)
		do{
			randCharacter = (char)(rand.nextInt(58) + 65);
		}while(randCharacter>=91 && randCharacter<=96);
		
		System.out.println(randCharacter);
		
		//check vowel and consonant
		switch(randCharacter){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				System.out.println("vowel");
				break;
			default:
				System.out.println("consonant");
		}
	}
}
