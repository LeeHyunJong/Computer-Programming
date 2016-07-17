import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.StringTokenizer;

public class HW3P2 {
	public static void main(String[] args) throws IOException{
		
		Scanner input = new Scanner(System.in);
		String s = input.nextLine();
		StringTokenizer token = new StringTokenizer(s, "+|| ||-", true);
		
		FileWriter fw = null;
		BufferedWriter bw = null;
			
		fw = new FileWriter("stack.txt");
		bw = new BufferedWriter(fw);
		
		Stack stack = new Stack();
		String temp;
		boolean nextPlus = false;
		
		
		while(token.hasMoreTokens()){
			temp = token.nextToken();
			if(temp.equals("+")){
				nextPlus = true;
			}else if(temp.equals("-")){
				fw.write("<pop> " + stack.pop() + "\n");
				nextPlus = false;
			}else if(!temp.equals("+") && !temp.equals(" ")){
				if(nextPlus){
					stack.push(temp);
					if(token.hasMoreTokens()){
						fw.write("[top] " + stack.peek() + "\n");
					}else{
						fw.write("[top] " + stack.peek());
					}
				}
				nextPlus = false;
			}
		}
		
		fw.flush();
		
		fw.close();
		bw.close();
		
		input.close();
	}
}


class Stack {
	
	List<String> stack = new ArrayList<String>();
	int top=-1;
	
	public boolean isEmpty(){
		return top==-1;
	}
	
	public void push(String newItem){
		stack.add(newItem);
		top++;
	}
	
	public String pop(){
		if(!this.isEmpty()){
			String topItem = stack.get(top);
			stack.remove(top);
			top--;
			return topItem;
		}else{
			return null;
		}
	}
	
	public void popAll(){
		stack.clear();
		top = -1;
	}
	
	public String peek(){
		if(!this.isEmpty())
			return stack.get(top);
		else
			return null;
	}
	
}
