class FreshJuice {
   enum FreshJuiceSize{ SMALL, MEDIUM , LARGE }
   FreshJuiceSize size;
}
 
public class FreshJuiceTest {
   public static void main(String[] args){
      /*213
      12321
      
      321
      312
      3*/FreshJuice juice = new FreshJuice();
      juice.size = FreshJuice.FreshJuiceSize.SMALL;
      System.out.println(juice.size);
   }
}