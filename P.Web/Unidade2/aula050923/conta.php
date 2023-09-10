<?php

class Conta
{
    protected $saldo;
    public function  __construct(protected string $nome)
    {
        $this->saldo=0;
    }
    public function setNome(string $nome)
    { 
        $this->nome=$nome;
    }
    public function sacar(float $valor)
    {
        if($valor<=$this->saldo)
        {
            $this->saldo -=$valor;
        }else{
            echo "O saldo é menor que o valor desejado a sacar";
        }
    }
    public function depositar(float $valor)
    {
        if($valor>0)
        {
            $this->saldo +=$valor;
        }else{
            echo "O deposito deve ser maior que zero";
        }
    }
    public function imprime():string
    {
        return "Titular:{$this->nome} <br> Saldo:{$this->saldo}";
    }

}

$c1 = new ContaCorrente("Júlinha");
$c1->setNome("Júlia Amaral");
$c1->depositar(200);
$c1->sacar(150);
echo $c1->imprime();

class ContaCorrente extends Conta {
    protected float $limite;

    public function setLimite(float $valor)
    {
        $this->limite = $valor;
    }
    public function getLimite()
    {
       return  $this->limite;
    }

    public function sacar(float $valor)
    {
        if($valor<=$this->saldo)
        {
            $this->saldo -=$valor;
        }else{
            echo "O saldo é menor que o valor desejado a sacar";
        }
    }

}