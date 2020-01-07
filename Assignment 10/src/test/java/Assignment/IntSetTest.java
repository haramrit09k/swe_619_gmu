package Assignment;

import org.junit.Test;
import static org.junit.Assert.*;

public class IntSetTest {

    // The main problem in the subclassing of IntSet arises when we use the clone method.
    // This is because class casting fails when calling subclass clone method
    // We fix this by calling super.clone() in parent (IntSet) class, and typecasting the
    // result to the parent class from Object.
    @Test(expected = AssertionError.class)
    public void testCloneAndSubClass() throws CloneNotSupportedException {
        IntSet set = new IntSet();
        set.insert(1);
        set.insert(2);
        set.insert(3);
        SubClass sc = new SubClass();
        assertFalse(sc.clone().equals(sc));
    }

    // Test properties of equals (symmetry, reflexivity, transitivity)
    @Test public void testEquals() {

        IntSet set1 = new IntSet();
        set1.insert(1);
        set1.insert(2);
        set1.insert(3);

        IntSet set2 = new IntSet();
        set2.insert(1);
        set2.insert(2);
        set2.insert(3);

        IntSet set3 = new IntSet();
        set3.insert(1);
        set3.insert(2);
        set3.insert(3);

        IntSet set4X = new IntSet();
        set4X.insert(1);
        set4X.insert(2);
        set4X.insert(3);
        set4X.insert(4);
        
        //Check basic implementation
        assertFalse(set1.equals(set4X));

        //Check symmetry
        assertTrue(set1.equals(set2));
        assertTrue(set2.equals(set1));

        //Check reflexivity
        assertTrue(set1.equals(set1));

        //Check transitivity
        assertTrue(set2.equals(set3));
        assertTrue(set1.equals(set3));
    }

    // Testing hashcodes -> same hashcode for equal objects
    @Test public void testHashCode(){
        IntSet set1 = new IntSet();
        set1.insert(1);
        set1.insert(2);
        set1.insert(3);
        IntSet set2 = new IntSet();
        set2.insert(1);
        set2.insert(2);
        set2.insert(3);
        IntSet set3 = new IntSet();
        set3.insert(1);
        set3.insert(2);
        set3.insert(3);
        set3.insert(4);

        //Equal objects -> equal hashcodes
        assertTrue(set1.equals(set2));
        assertTrue(set1.hashCode() == set2.hashCode());

        // Unequal objects -> not necessarily unequal hashcodes
        // The hashcode function can also simply return 42 which
        //  makes both the hashcodes equal.
        assertFalse(set1.equals(set3));
        assertFalse(set1.hashCode() == set3.hashCode());
    }

}

