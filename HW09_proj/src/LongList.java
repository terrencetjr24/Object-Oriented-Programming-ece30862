public class LongList extends MyList {
	LongList next;
	long data;
	
	public LongList(LongList n, long d) {
		next = n;
		data = d;
	}
	public long getData() {
		return data;
	}
	public LongList next() {
		return next;
	}
	public void printNode() {
		System.out.print("LongList Node, data is: "+ getData());
	}
}
