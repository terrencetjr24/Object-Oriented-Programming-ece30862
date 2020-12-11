public class Node <T>{ 
   private T data;
   private Node <T>prev; 
   private Node <T>next; 

   public Node(T data, Node<T> prev, Node <T>next) {
      this.data = data;
      this.prev = prev;
      this.next = next;
   } 
   public T getData( ) {
      return data;
   }
  public void setNext(Node<T> nextP) {
     next = nextP;
   }
   void setPrev(Node<T> prevP) {
      prev = prevP;
   }
   public Node<T> getNext( ) {
      return next;
   }
   Node<T> getPrev( ) {
	   return prev;
   }
   public void comp(Node<T> ogNext) {

	   T current = this.getData();
	   T holder;
	   holder = ogNext.getData();
	   
	   Node <T> nextHolder = ogNext.getNext();
	   Node <T> prevHolder = this.getPrev();
	   //If "this" is greater than the ogNext (switch the order to Xthis_prevX -> ogNext -> this -> XogNext_nextX
	   if(((current.compareTo(holder)) == -1) {
		   System.out.println("This is happening");
		   if(prevHolder != null) {
			   prevHolder.setNext(ogNext);
		   }
		   
		   prevHolder.setNext(ogNext);
		   ogNext.setPrev(prevHolder);
		   ogNext.setNext(this);
		
		   this.setPrev(ogNext);
		   this.setNext(nextHolder);
		   nextHolder.setPrev(this);
	   }
   }
}

