package assignment6;

import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNotEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assume.assumeNotNull;
// import static org.junit.Assume.assumeTrue;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

import org.junit.experimental.theories.DataPoints;
import org.junit.experimental.theories.FromDataPoints;
import org.junit.experimental.theories.Theories;
import org.junit.experimental.theories.Theory;
import org.junit.runner.RunWith;

@RunWith(Theories.class)
public class SetTheoryTest {

    @DataPoints("bags-sets")
    public static HashMap<Integer, ArrayList<Object>> bags() {

        Bag<Object> b1 = new Bag<Object>();
        b1.insert("cat");
        b1.insert("dog");

        Bag<Object> b2 = new Bag<Object>();
        b2.insert(1);
        b2.insert(2);

        Bag<Object> b3 = new Bag<Object>();
        b3.insert(false);
        b3.insert(true);

        Bag<Object> b4 = new Bag<Object>();
        b4 = null;

        LiskovGenericSet<Object> s1 = new LiskovGenericSet<Object>();
        s1.insert("cat");
        s1.insert("dog");

        LiskovGenericSet<Object> s2 = new LiskovGenericSet<Object>();
        s2.insert(1);
        s2.insert(2);

        LiskovGenericSet<Object> s3 = new LiskovGenericSet<Object>();
        s3.insert(false);
        s3.insert(true);

        LiskovGenericSet<Object> s4 = new LiskovGenericSet<Object>();
        s4 = null;

        HashMap<Integer, ArrayList<Object>> map = new HashMap<>();
        map.put(1, new ArrayList<Object>(Arrays.asList(b1, s1)));
        map.put(2, new ArrayList<Object>(Arrays.asList(b2, s2)));
        map.put(3, new ArrayList<Object>(Arrays.asList(b3, s3)));
        map.put(4, new ArrayList<Object>(Arrays.asList(b4, s4)));

        return map;

        // List<Bag<Object>> bags = new ArrayList<>();
        // bags.add(b1);
        // bags.add(b2);
        // bags.add(b3);
        // bags.add(b4);

        // return bags;
    }

    @DataPoints("sets")
    public static List<LiskovGenericSet<Object>> sets() {
        LiskovGenericSet<Object> s1 = new LiskovGenericSet<Object>();
        s1.insert("cat");
        s1.insert("dog");

        LiskovGenericSet<Object> s2 = new LiskovGenericSet<Object>();
        s2.insert(1);
        s2.insert(2);

        LiskovGenericSet<Object> s3 = new LiskovGenericSet<Object>();
        s3.insert(false);
        s3.insert(true);

        LiskovGenericSet<Object> s4 = new LiskovGenericSet<Object>();
        s4 = null;

        List<LiskovGenericSet<Object>> sets = new ArrayList<>();
        sets.add(s1);
        sets.add(s2);
        sets.add(s3);
        sets.add(s4);

        return sets;
    }

    @DataPoints("items")
    public static Object[] items = { 1, 2, 3, "CAT", "DOG", "MOUSE", false, true, null };

    @Theory
    public void BagAllowsDuplicatesWhileLiskovSetDoesNot(@FromDataPoints("items") Object item1,
            @FromDataPoints("bags") ArrayList<Object> myBag) {

        // ArrayList<Object> arr = myBag;
        
        @SuppressWarnings("unchecked")
        Bag<Object> bag = (Bag<Object>) myBag.get(0);
        System.out.println(bag);

        @SuppressWarnings("unchecked")
        LiskovGenericSet<Object> set = (LiskovGenericSet<Object>) myBag.get(1);

        assumeNotNull(bag, set, item1);

        System.out.println("Testing with " + bag + " and " + item1);

        for (int i = 0; i < 4; i++) {
            bag.insert(item1);
            set.insert(item1);
        }

        // Attempting to remove the element item1: the bag as it allows duplicates,
        // does NOT completely remove the element
        // while the set completely removes the element

        bag.remove(item1);
        set.remove(item1);

        assertFalse(set.isIn(item1));
        assertTrue(bag.isIn(item1));
        assertNotEquals(bag.size(), set.size());
    }
}