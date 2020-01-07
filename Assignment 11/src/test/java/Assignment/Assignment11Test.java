/*
 * This Java source file was generated by the Gradle 'init' task.
 */
package Assignment;

import org.junit.Test;
import static org.junit.Assert.*;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

public class Assignment11Test {
    // Test for satisfactory implementation of equals method when replacing Set with
    // List
    @Test
    public void InstrumentedListTest() {
        List<String> l1 = new ArrayList<String>();
        l1.add("Apple");
        l1.add("Ball");

        List<String> l2 = new InstrumentedList<String>(l1);
        l2.add("Apple");
        l2.add("Cat");

        List<String> l3 = new InstrumentedList<String>(l2);
        l3.add("Dog");

        l1.remove("Ball");
        l2.remove("Apple");

        System.out.println(l1);
        System.out.println(l2);
        System.out.println(l3);

        // Transitivity, symmetry properties maintained -> Equals contract satisfied by
        // List
        assertTrue(l1.equals(l2));
        assertTrue(l2.equals(l3));
        assertTrue(l3.equals(l1));
        assertTrue(l2.equals(l1));
    }

    // Test for violation of equals method contract due to broken symmetry property
    // when replacing Set with Collection
    @Test
    public void InstrumentedCollectionTest() {
        Collection<String> c1 = new ArrayList<>();
        c1.add("Apple");
        c1.add("Ball");

        Collection<String> c2 = new InstrumentedCollection<String>(c1);
        c2.add("Apple");
        c2.add("Cat");

        Collection<String> c3 = new InstrumentedCollection<String>(c2);
        c3.add("Dog");

        c1.remove("Ball");
        c2.remove("Apple");

        // Symmetry is broken here
        // parent.equals(child) != child.equals(parent)

        assertFalse("Collections are same", c1.equals(c2));
        assertTrue("Collections are different", c2.equals(c1));
    }

}
