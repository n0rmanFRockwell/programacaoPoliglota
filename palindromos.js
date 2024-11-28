function isPalindrome(x) {
    if (x < 0) return false; // Números negativos não são palíndromos
    if (x < 10) return true; // Números de um dígito são palíndromos

    let reversed = 0;
    let original = x;

    while (x > 0) {
        const digit = x % 10;
        reversed = reversed * 10 + digit;
        x = Math.floor(x / 10);
    }

    return original === reversed;
}

// Exemplos de uso:
console.log(isPalindrome(121));  // true
console.log(isPalindrome(-121)); // false
console.log(isPalindrome(9));    // true
console.log(isPalindrome(10));   // false
console.log(isPalindrome(0));    // true
