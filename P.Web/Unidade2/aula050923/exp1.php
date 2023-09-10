<?php
                            # o que são Propriedades? 
class Aluno{
    
    #Propriedades
    public string $nome;
    public string $dataNascimento;
    public string $serie;
    public float $nota1;
    public float $nota2;
    public float $nota3;

    # dois Underline para criar métodos mágicos
    # construtor obriga a passar os valores abaixo para criar um obj
    public function __construct(string $name, string $dateBirth, string $serie)  
    {
        $this->nome=$name;
        $this->dataNascimento=$dateBirth;
        $this->serie=$serie;
        
    }

    #this representa o próprio objeto
}
echo "<pre>";
    $aluno1=new Aluno("Júlia","17/07/2005","2ºAno");

echo "</pre>";

?>