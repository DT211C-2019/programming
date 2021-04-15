public class Control {
    public static void main(String[] args){
        String[] countries_In_Europe = new String[]{
                "Albania", "Andorra", "Austria",
                "Belarus", "Belgium", "Bosnia Herzegovina",
                "Bulgaria", "Croatia", "Cyprus",
                "Czech Republic", "Denmark", "Estonia",
                "Hungary", "Iceland", "Ireland",
                "Italy", "Kosovo", "Latvia",
                "Liechtenstein", "Lithuania",
                "Luxembourg", "Macedonia", "Malta",
                "Moldova", "Monaco", "Montenegro",
                "Norway", "Poland", "Portugal",
                "Romania", "Russia", "San Marino",
                "Serbia", "Slovakia", "Slovenia",
                "Spain", "Sweden", "Switzerland",
                "the Netherlands", "Turkey",
                "Ukraine"};


        System.out.println(">-----< HashSet test >-----<");
        TestHashSet Hash = new TestHashSet(countries_In_Europe);
        Hash.addEntry("Vatican City");
        Hash.PrintSet();


        System.out.println("\n>-----< Value if exists test >-----<");
        System.out.println(Hash.matchEntry("Russia"));
        System.out.println(Hash.matchEntry("Spain"));


        System.out.println("\n>-----< Sort test alphabetical >-----<");
        for (int i=0; i<Hash.sortSet("alphabetical").size(); i++){
            System.out.println(Hash.sortSet("alphabetical").get(i));
        }


        System.out.println("\n>-----< Sort test reverse >-----<");
        for (int i=0; i<Hash.sortSet("reverse").size(); i++){
            System.out.println(Hash.sortSet("reverse").get(i));
        }


        System.out.println("\n>-----< Sort test shuffle >-----<");
        for (int i=0; i<Hash.sortSet("shuffle").size(); i++){
            System.out.println(Hash.sortSet("shuffle").get(i));
        }


        System.out.println("\n>-----< Clear Set Test >-----<");
        Hash.clearSet();
        Hash.PrintSet();
    }
}
