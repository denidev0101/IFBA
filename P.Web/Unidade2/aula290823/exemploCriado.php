<?php

class carro
{
    public string $nomeRodas;
    public int $numRodas;

    public function __construct(string $nomeRodas, int $numRodas, public float $tamanhoRodas, public string $corCarro)
    {
        $this->rodas=$rodas;
        $this->numRodas=$numRodas;

    }

    public function  montarInfo():void
    {
            echo"O nome da roda é {$this->roda}, seu tamanho é de {$this->tamanho}";
    }


}
    $carro1= new carro();


?>