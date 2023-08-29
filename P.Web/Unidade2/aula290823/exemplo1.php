<?php
#orientação a objeto
#paradigmas -> programação procedural(Funções eprocedimentos)

function calculaFuncao(float $salario, float $previdencia):float{

    return $salario*0.234+$previdencia;
}

$funcionario1="João";
$funcionario1salario=1000;
$funcionario1salario=10;
$funcionario1Desconto=calculaFuncao($funcionario1salario,$funcionario1salario);

echo "{$funcionario1Desconto} é o valor do salário com desconto";  #sem orientação a objeto



?>