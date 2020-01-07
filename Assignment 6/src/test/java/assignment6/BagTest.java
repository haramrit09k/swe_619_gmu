package assignment6;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import org.junit.Test;

public class BagTest {

    @Test
    public void repOk() {
        Bag<String> myBag = new Bag<>();

        myBag.insert("Haramrit");
        myBag.insert("Nabeel");

        assertTrue(myBag.repOk());
    }

    @Test
    public void testInsert() {
        Bag<String> myBag = new Bag<>();

        myBag.insert("Haramrit");
        assertEquals(1, myBag.getValue("Haramrit"));
    }

    @Test
    public void testRemove() {
        Bag<String> myBag = new Bag<>();
        myBag.insert("Haramrit");

        myBag.remove("Haramrit");
        assertEquals(0, myBag.getValue("Haramrit"));
    }

    @Test
    public void testisIn() {
        Bag<String> myBag = new Bag<>();

        myBag.insert("Haramrit");
        assertTrue(myBag.isIn("Haramrit"));
    }

    @Test
    public void testgetValue() {
        Bag<String> myBag = new Bag<>();

        myBag.insert("Haramrit");
        assertEquals(1, myBag.getValue("Haramrit"));
    }

    @Test
    public void testSize() {
        Bag<String> myBag = new Bag<>();

        myBag.insert("Haramrit");
        myBag.insert("Nabeel");

        assertEquals(2, myBag.size());
    }

    @Test
    public void testChoose() {
        Bag<String> myBag = new Bag<>();

        myBag.insert("Haramrit");

        assertTrue(myBag.isIn(myBag.choose()));
    }

    /**
     * Test properties rule.
     *
     * Validates the condition - (continuing from the discussion in 7.11 - Liskov) -
     * Is Bag a legitimate subtype of Set ?
     *
     * This is a test case that FAILS !! - because the Bag allows duplicates - but
     * LiskovGenericSet does NOT ! - This causes violation of the properties-rule
     * (i.e.) The super-type defines a property that is lost in its sub-type
     */
    @Test
    public void testPropertiesRule() {
        Bag<String> myBag = new Bag<>();
        LiskovGenericSet<String> mySet = new LiskovGenericSet<>();

        // Adding an element "Haramrit" to LiskovGenericSet & Bag
        mySet.insert("Haramrit");
        myBag.insert("Haramrit");

        // Adding the same element "Haramrit" to LiskovGenericSet & Bag
        mySet.insert("Haramrit");
        myBag.insert("Haramrit");

        // Attempting to remove the element "Haramrit": the bag as it allows duplicates,
        // does NOT completely remove the element
        // while the set completely removes the element
        myBag.remove("Haramrit");
        mySet.remove("Haramrit");

        assertFalse(mySet.isIn("Haramrit"));
        assertTrue(myBag.isIn("Haramrit"));
    }
}