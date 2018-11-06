public class Car{
	
	//定义一堆属性
	
	private int carid;
	private double displace;
	private String from;
	private String brand;
	
	//构造方法
	public Car(int carid){
		this.carid = carid;
	}
	public Car(int carid,double displace,String from){
		this(carid,displace);
		this.from = from;
	}
	public Car(int carid,double displace,String from,String brand){
		this(carid,displace,from,);
		this.from = from;
	}
	//普通方法-行为
}