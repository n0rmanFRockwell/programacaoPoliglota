export function maiorAltitude(ganhos) {
    let altitudeAtual = 0;
    let maiorAltitude = 0;

    for (let i = 0; i < ganhos.length; i++) {
        altitudeAtual += ganhos[i];
        if (altitudeAtual > maiorAltitude) {
            maiorAltitude = altitudeAtual;
        }
    }

    return maiorAltitude;
}
