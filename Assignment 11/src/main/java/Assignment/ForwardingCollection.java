package Assignment;

import java.util.Collection;
import java.util.Iterator;

public class ForwardingCollection<E> implements Collection<E> {
    private final Collection<E> c;

    public ForwardingCollection(Collection<E> col) {
        this.c = col;
    }

    public boolean add(E e) {
        return c.add(e);
    }

    public boolean remove(Object o) {
        return c.remove(o);
    }

    @Override
    public boolean equals(Object o) {
        return c.equals(o);
    }

    @Override
    public int hashCode() {
        return c.hashCode();
    }

    @Override
    public String toString() {
        return c.toString();
    }

    @Override
    public int size() {
        // TODO Auto-generated method stub
        return 0;
    }

    @Override
    public boolean isEmpty() {
        // TODO Auto-generated method stub
        return false;
    }

    @Override
    public boolean contains(Object o) {
        // TODO Auto-generated method stub
        return false;
    }

    @Override
    public Iterator<E> iterator() {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public Object[] toArray() {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public <T> T[] toArray(T[] a) {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public boolean containsAll(Collection<?> c) {
        // TODO Auto-generated method stub
        return false;
    }

    @Override
    public boolean addAll(Collection<? extends E> c) {
        // TODO Auto-generated method stub
        return false;
    }

    @Override
    public boolean removeAll(Collection<?> c) {
        // TODO Auto-generated method stub
        return false;
    }

    @Override
    public boolean retainAll(Collection<?> c) {
        // TODO Auto-generated method stub
        return false;
    }

    @Override
    public void clear() {
        // TODO Auto-generated method stub

    }

 }