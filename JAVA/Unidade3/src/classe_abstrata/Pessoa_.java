package classe_abstrata;

public abstract class  Pessoa_ {

	protected String nome;
    protected int id;
   
    public abstract void imprime();				//m�todo abstrato			
    public abstract void imprime1(); 			//m�todo abstrato
    
    public void bomDia()						//m�todo concreto
    {
    	System.out.print("Bom dia");
    }

}

