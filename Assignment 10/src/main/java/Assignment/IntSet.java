package Assignment;

import java.util.ArrayList;
import java.util.List;

public class IntSet implements Cloneable {
    private List<Integer> els;

    @Override
    public boolean equals(Object obj) {
        if (obj == null || obj.getClass() != getClass()) {
            return false;
        }

        IntSet s = (IntSet) obj;
        return s.els.containsAll(els) && s.els.size() == els.size();
    }

    @Override
    public int hashCode() {
        int hashVal = 0;
        for (Integer i : els) {
            hashVal = hashVal * 31 + i;
        }
        return hashVal;
    }

    public IntSet() {
        els = new ArrayList<Integer>();
    }

    @Override
    public IntSet clone() throws CloneNotSupportedException {
        try {
            IntSet clonedSet = (IntSet) super.clone();
            clonedSet.els = new ArrayList<Integer>(els);
            return clonedSet;
        } catch (CloneNotSupportedException e) {
            throw new AssertionError();
        }
    }

    void insert(Integer e) {
        if (!isPresentIn(e)) {
            els.add(e);
        }
    }

    boolean isPresentIn(Integer e) {
        return (els.indexOf(e) >= 0);
    }
}

class SubClass extends IntSet {
    @Override
    public SubClass clone() throws CloneNotSupportedException {
        SubClass sc = (SubClass) super.clone();
        return sc;
    }
}
