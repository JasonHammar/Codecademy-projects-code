class SinoTibetan extends Language{
  SinoTibetan(String name, int numSpeakers){// Constructor for SinotTibetan Class. 
    if(name.contains("Chinese")){
      super(name, numSpeakers, "Asia", "subject-verb-object");
    }else{
      super(name, numSpeakers, "Asia", "subject-object-verb");
    }
    
  }
}
