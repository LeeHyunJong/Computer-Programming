import java.util.Calendar;

public class Family extends Person{
	
	private String birthday; //YYMMDD
	
	public Family(String a, String b, int c, String date) {
		super(a, b, c);
		birthday = date;
	}

	public String getBirthday() {
		return birthday;
	}

	public void setBirthday(String birthday) {
		this.birthday = birthday;
	}
	
	
	//I used the Calender class for calculating dDay()
	//Difference between current date 00:00:00(HH:MM:SS) and birthday 00:00:00
	public int dDay(){
		Calendar curr = Calendar.getInstance();
		Calendar birth = Calendar.getInstance();
		
		int year = Integer.parseInt(birthday.substring(0, 2));
		int month = Integer.parseInt(birthday.substring(2, 4));
		int date = Integer.parseInt(birthday.substring(4, 6));
		
		birth.set(1900+year, month-1, date);
		//year : YY(since 1900)
		//month : 0 - 11
		//date : 1-31
		
		//Calculating time difference between current date and birthday in milliseconds
		long difftime = curr.getTimeInMillis() - birth.getTimeInMillis();
		
		//Converting millisecond to date
		int dDay = (int)(difftime/(24 * 60 * 60 * 1000));
		
		return dDay;
	}
	
	public void print(){
		super.print();
		System.out.print("_" + birthday + "_" + this.dDay());
	}
}
