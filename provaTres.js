function palavraMaisFrequente(paragrafo) {
    let palavras = paragrafo.split(' ');
    let contagem = {};

    // Conta a frequência de cada palavra
    for (let palavra of palavras) {
        if (contagem[palavra]) {
            contagem[palavra]++;
        } else {
            contagem[palavra] = 1;
        }
    }

    // Encontra a palavra com a maior frequência
    let palavraFrequente = '';
    let maxContagem = 0;
    for (let palavra in contagem) {
        if (contagem[palavra] > maxContagem) {
            maxContagem = contagem[palavra];
            palavraFrequente = palavra;
        }
    }

    return palavraFrequente;
}

// Exemplos de uso
let paragrafo1 = "ana clara foi ao parque com ana julia e ana maria";
console.log(palavraMaisFrequente(paragrafo1)); // "ana"

let paragrafo2 = "eles foram ao mercado mas no mercado nao tinha pao";
console.log(palavraMaisFrequente(paragrafo2)); // "mercado"

let paragrafo3 = "baleia baleia a baleia";
console.log(palavraMaisFrequente(paragrafo3)); // "baleia"
