public class DNA {// This program will create a DNA sequence and help us find the protein
 
  public static void main(String[] args) {
 
    //  -. .-.   .-. .-.   .
    //    \   \ /   \   \ / 
    //   / \   \   / \   \  
    //  ~   `-~ `-`   `-~ `-

    String dna1 = "ATGCGATACGCTTGA";// DNA Sequences
    String dna2 = "ATGCGATACGTGA";
    String dna3 = "ATTAATATGTACTGA";

    String dna = dna3;// DNA variable can be changed to dna values above
    // Here is sample output.
    // dna1: CGATACGCT
    // dna2: No Protein
    // dna3: TAC

    int startCodon = dna.indexOf("ATG");
    int stopCodon = dna.indexOf("TGA");

    if(startCodon != -1 && stopCodon != -1 && (stopCodon - startCodon) % 3 == 0){
      String protein = dna.substring(startCodon + 3, stopCodon);
      System.out.println(protein);
    }else{
      System.out.println("No Protein");
    }
 
  }
 
}
