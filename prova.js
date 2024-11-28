export function somaDeMultiplos(n) {
    let soma = 0;
    
    for (let i = 1; i <= n; i++) {
        if (i % 3 === 0 || i % 5 === 0 || i % 7 === 0) {
            soma += i;
        }
    }
    
    return soma;
}

// Exemplos de uso:
console.log(somaDeMultiplos(7));  // 21
console.log(somaDeMultiplos(10)); // 40
console.log(somaDeMultiplos(9));  // 30
