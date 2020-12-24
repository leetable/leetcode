public class Puppy{
    int age;
    public Puppy(){}
    public Puppy(String name){
       System.out.println("小狗的名字是 : " + name ); 
    }
  
    public void setAge( int age ){
        this.age = age;
    }
  
    public int getAge( ){
        System.out.println("小狗的年龄为 : " + age ); 
        return age;
    }
  
    public static void main(String[] args){
       Puppy myPuppy = new Puppy("123");
      /* myPuppy.setAge( 2 );*/
       myPuppy.getAge( );
       System.out.println("变量值 : " + myPuppy.age ); 
    }
 }