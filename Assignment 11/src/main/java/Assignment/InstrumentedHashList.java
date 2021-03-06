package Assignment;

import java.util.Collection;
import java.util.HashSet;

public class InstrumentedHashList<E> extends HashSet<E> {
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    private int addCount = 0;

    public InstrumentedHashList() {}
 
    @Override public boolean add(E e){ 
       addCount++; 
       return super.add(e); 
    }
    @Override public boolean addAll(Collection<? extends E> c){ 
        // What to do with addCount?
        return super.addAll(c); 
    }
    public int getAddCount(){ return addCount; }
 }