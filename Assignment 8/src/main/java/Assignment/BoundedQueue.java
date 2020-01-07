package Assignment;

import java.util.ArrayList;
import java.util.List;

public class BoundedQueue<E> {
	private List<E> rep;
	private int size;

	public BoundedQueue(int length) {
		this.size = length;
		this.rep = new ArrayList<E>(length);
	}

	public int getSize() {
		return rep.size();
	}

	public int getCount() {
		int k = 0;
		for (E i : rep) {
			if (i != null) {
				k++;
			}
		}
		return k;
	}

	public boolean isFull() {
		if (getCount() == size)
			return true;
		else
			return false;

	}

	public boolean isEmpty() {
		if (getCount() == 0)
			return true;
		else
			return false;
	}

	public void put(E e) {
		if (e != null && !isFull())
			rep.add(e);
		else
			throw new IllegalArgumentException("No element to put");
	}

	public E get() {
		if (!isEmpty()) {
			E result = null;
			result = rep.get(0);
			rep.remove(0);
			return result;
		} else
			throw new IllegalArgumentException("No element to get");
	}

	public void putAll(List<E> al) {
		if (al.size() >= getSize())
			rep.addAll(al);
		else
			throw new IllegalArgumentException("No element to put");
	}

	public List<E> getAll() {
		List<E> ll = new ArrayList<E>();
		if (!isEmpty()) {
			ll.addAll(rep);
			rep.clear();
		} else {
			throw new IllegalArgumentException("No elements to get");
		}
		return ll;
	}

	public boolean repOk() {
		for (E elem : rep) {
			if (elem == null) {
				return false;
			}
		}
		if (getCount() > getSize()) {
			return false;
		}
		return true;
	}

	public String toString() {
		return rep.toString();
	}

}
