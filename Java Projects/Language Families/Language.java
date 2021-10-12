class Language{
  protected String name;
  protected int numSpeakers;
  protected String regionsSpoken;
  protected String wordOrder;

  Language(String name, int numSpeakers, String regionsSpoken, String wordOrder){// Language Constructor
    this.name = name;
    this.numSpeakers = numSpeakers;
    this.regionsSpoken = regionsSpoken;
    this.wordOrder = wordOrder;
  }

  public void getInfo(){// Prints out the information for the given language.
    System.out.println(this.name + " is spoken by " + this.numSpeakers + " people mainly in " + this.regionsSpoken + ". The language follows the word order: " + this.wordOrder);
  }

  public static void main(String []args){
    Language german = new Language("German", 100000000, "Prussian", "verb-subject-object");
    german.getInfo();
    
    Mayan chontal = new Mayan("Chontal", 36810);
    chontal.getInfo();

    SinoTibetan mandarin = new SinoTibetan("Mandarin Chinese", 300000000);
    SinoTibetan burmese = new SinoTibetan("Burmese", 300000);

    mandarin.getInfo();
    burmese.getInfo();
  }
}
