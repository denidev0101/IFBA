package classe_abstrata;

public abstract class  Pessoa_ {

	protected String nome;
    protected int id;
   
    public abstract void imprime();				//método abstrato			
    public abstract void imprime1(); 			//método abstrato
    
    public void bomDia()						//método concreto
    {
    	System.out.print("Bom dia");
    }

}

