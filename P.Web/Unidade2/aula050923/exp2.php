<?php
                            # o que são Propriedades? 
class Aluno{
    
    #Propriedades fora do construtor não obriga receber valor para criar um obj
   
    public float $nota1;        
    public float $nota2;
    public float $nota3;

    # dois Underline para criar métodos mágicos
    # construtor obriga a passar os valores das propriedades abaixo para criar um obj
    public function __construct
    ( 
            #encapsulamento:Controla acesso às propriedades e métodos
            #Modificadores de acesso:   
           protected string $nome,      #tudo dentro dos argumentos são obrigatórios
           protected string $dataNascimento,
           protected string $serie
    ){

    }

    public function setNota1(float $nota)
    {
        if($nota >=0 && $nota <=10)
        {
            $this->nota3=$nota;
        }else{
            echo"Informe uma nota entre 0 e 10 <hr>";
        }
    }

    public function getNota1():float
    {
        return $this->nota1;
    }

    public function getNota2():float
    {
        return $this->nota2;
    }

}

echo "<pre>";
    $aluno1=new Aluno("Júlia","17/07/2005","2ºAno");
    echo  $aluno1->setNota1(-1);
    

echo "</pre>";

?>