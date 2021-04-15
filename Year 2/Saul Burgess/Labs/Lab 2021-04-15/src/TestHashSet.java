import java.util.*;

public class TestHashSet {
    private final HashSet<String> HashSet = new HashSet<>();


    public TestHashSet(String[] Countries) {
        HashSet.addAll(Arrays.asList(Countries));
    }


    public void PrintSet(){
        Iterator<String> printCountries = HashSet.iterator();

        while(printCountries.hasNext()){
            System.out.println(printCountries.next());
        }
    }


    public void addEntry(String country){
        HashSet.add(country);
    }


    public boolean matchEntry(String country){
        return HashSet.contains(country);
    }


    public void clearSet(){
        HashSet.clear();
    }


    public List<String> sortSet(String type){
        List<String> sortHelper = new ArrayList<>(HashSet);
        switch (type){
            case "alphabetical":
                Collections.sort(sortHelper);
                return sortHelper;

            case "reverse":
                Collections.sort(sortHelper);
                Collections.reverse(sortHelper);
                return sortHelper;

            case "shuffle":
                Collections.sort(sortHelper);
                Collections.shuffle(sortHelper);
                return sortHelper;
        }
        //Should never happen, but hey, IDE complained :shrug:
        return sortHelper;
    }
}
