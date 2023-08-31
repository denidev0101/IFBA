package classe_abstrata;

public class Aluno extends Pessoa_{

	private int matricula;
	   
    public Aluno(String nome, int id, int matricula){
        this.matricula = matricula;
        this.nome = nome;
        this.id = id;
        
    }
    
    @Override
    public String toString() {
        return "Aluno [matricula= " + matricula + " nome= " + this.nome + " id= " + this.id +" ]";
    }
    
    @Override
    public void imprime() {  System.out.println("Nome do aluno: " + this.nome);    }

    @Override
    public void imprime1(){ System.out.println("Nome:"+this.nome+"Idade:"+this.id);   }

}
