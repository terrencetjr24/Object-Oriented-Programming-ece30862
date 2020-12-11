
public class IntList extends MyList {
	IntList next;
	int data;
	
	public IntList(IntList n, int d) {
		data = d;
		next = n;
	}
	public int getData() {
		return data;
	}
	public IntList next() {
		return next;
	}
	public void printNode() {
		System.out.print("IntList Node, data is: "+getData());
	}
}