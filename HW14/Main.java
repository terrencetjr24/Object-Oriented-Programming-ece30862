public class Main {

   public static void main(String[ ] args) {

      Node<MyClass> headMyClass = new Node<MyClass>(new MyClass(0,0), null, null);
      
      for (int i = 5; i >=1; i--) { 
         Node<MyClass> t = new Node<MyClass>(new MyClass(i,-i), headMyClass, headMyClass.getNext( )); 
         headMyClass.setNext(t);
      }
      /*
      Node<MyClass> pointer = headMyClass;
      Node<MyClass> holder = headMyClass;
      
      for(int z = 1; z<6; z++) {
    	  pointer = headMyClass;
	      for(int i = 1; i<6; i++) {
	    	  if(pointer != null) {
	    		holder = pointer.getNext();
	    	  	pointer.comp(holder);
	    	  	pointer = pointer.getNext();
	    	  }
	      }
      }
      */
      while (headMyClass != null) {
         System.out.println(""+headMyClass.getData( ));
         headMyClass = headMyClass.getNext( );
      }
   }
}