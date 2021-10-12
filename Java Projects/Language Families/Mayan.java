class Mayan extends Language{
  Mayan(String name, int numSpeakers){// Constructor for Mayan Class
    super(name, numSpeakers, "Central America", "verb-object-subject");
  }

  @Override
  public void getInfo(){// Overrides getInfo from parent class. Prints same statement with a fun fact
    System.out.println(this.name + " is spoken by " + this.numSpeakers + " people mainly in " + this.regionsSpoken + ". The language follows the word order: " + this.wordOrder);
    System.out.println("Fun Fact: " + this.name + " is an ergative language.");
  }
}
