public class Work extends Person{
	private String team;
	
	public Work(String a, String b, int c, String t) {
		super(a, b, c);
		team = t;
	}
	
	public void setTeam(String t){
		team = t;
	}
	
	public String getTeam(){
		return team;
	}
	
	public void print(){
		super.print();
		System.out.print("_" + team);
	}
	
}
