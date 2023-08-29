<?php
#orientação a objeto --> representação do mundo real   (Objeto: transforma algo real )
#paradigmas de programação-> programação procedural(Funções eprocedimentos)

class Funcionario
{
    #propriedades da classe --> variáveis
    #Modificador de acesso --> public
    #tipagem da propriedade --> string e float

    public string $nome="Pedro";
    public float $salario=1000;
    public float $previdencia=10;

    #método construtor -> executa automaticamento quando o objeto é inatanciado
    public function __construct( string $nome, flaot $salario, float $previdencia)
    {
        $this->nome=$nome;
        $this->salario=$salario;
        $this->previdencia=$previdencia;

    }


    # métodos da classe são funções
    public function calculaDesconto()
    {
        # $this-> representa o obj que está sendo executado
        return $this->salario*0.2 + $this->previdencia;
    }

    public function imprimeDados():void
    {
        
        echo"{$this->nome} tem salário de {$this->salario} e
              desconto de {$this->calculaDesconto()} <hr>";
    }
}
#instância de uma class = objeto
$funcionario1= new Funcionario("Joana",1200,30);
$funcionario1->imprimeDados();


# <pre> organiza/Formata dos dados
echo"<pre>";                
var_dump($funcionario1);




?>