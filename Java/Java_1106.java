
public  class Java_1106{
    
    public static void main(String args[]) {                  
        String  s1=new String("abc");
        String  s2=new String("abc"); 
        boolean b1=s1.equals(s2);
        boolean b2=(s1==s2);            
        System.out.print(b1+"   "+b2); 
    } 	
}