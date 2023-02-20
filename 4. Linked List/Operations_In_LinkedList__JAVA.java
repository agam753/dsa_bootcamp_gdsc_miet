// Operations of Linked List In Java

class LinkedList {

	Node head; // head of list

	static class Node {

		int data;
		Node next;
		Node(int val)// Constructor
		{
			this.data = val;
			next = null;
		} 
	}

	//1. Traversing Of Linked List
	public void display()
	{
        System.out.print("Printing the List : ");
		Node n = head;
		while (n != null) {
			System.out.print(n.data + "->");
			n = n.next;
		}
		System.out.print("NULL");
	}
    //Printing the list:
    //1 2 3

    //2.Insert Node at the front of the Linked List
    public void InsertAtFront(int new_data)
	{
		//1.Prepare a newNode
		Node newNode = new Node(new_data);
	
		//2.Put it in front of current head
		newNode.next = head;
	
		//3.Move head of the list to point to the newNode
		head = newNode;
	}
	//For example:
	/*
	10->NULL
	10->1->2->3->NULL;
	*/

	//3.Insert Node at the End of the Linked List
	public void InsertAtEnd(int value)
	{
		//1.Prepare a newNode
		Node newNode = new Node(value);

		//2.If linked list is empty ,newNode will be a head node.
		if (head == null)
		{
			head = new Node(value);
			return;
		}

		//3.Find the last node
		Node last = head;
		while (last.next != null)
		{
			last = last.next;
		}

		//4.Insert newNode after last node(at the end)
		last.next = newNode;
	}
	//For example:
	//100->NULL
    //1->2->3->100->NULL

	//Insert Node after a given node
	public void InsertAfterNode(Node prev, int value)
	{
		//1.Check if previous node is NULL
		if (prev == null) {
			System.out.println("Previous can not be null");
			return;
		}

		//2.Prepare a Newnode.
		Node newnode = new Node(value);

		//3.Insert newNode after Previous
		newnode.next = prev.next;
		prev.next = newnode;
	}
	//For example:
	//4->NULL
	//1->2->4->3->NULL
	//1->2->3->NULL


	public static void main(String[] args)
	{
		LinkedList llist = new LinkedList();

		llist.head = new Node(1);
		Node second = new Node(2);
		Node third = new Node(3);

		llist.head.next = second; // Link first node with  the second node
		second.next = third; // Link second node with the third node

		// Function call
		llist.display();
	}
}
