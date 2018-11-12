
public class Test_1110{
class Dali{
	private String dada = "阿琛";
	private int age;
	private String son;
	
	void setdada(String dada){
		this.dada = dada;
	}
	void setage(int age){
		this.age = age;
	}
	void setSon(String son){
		this.son = son;
	}
	int getage(){
		return this.age;
	}
	String getdada()
	{
		return this.dada;
	}
	String getson(){
		return this.son;
	}
	public void getDali(){
		System.out.println(getdada()+"的son是"+getage()+"岁的"+getson());
	}
}
public static void main(String []args){
	Dali s = new Dali();
	s.setSon = "chaoqiwen";
	s.setage = 19;
	s.setdada = "阿琛";
	s.getDali();
}
}