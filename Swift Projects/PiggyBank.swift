var pesos: Double
var reais: Double
var soles: Double

pesos = 500.0
reais = 700.0
soles = 900.0

var total: Double

// Peso to USD: 0.048 USD
// Reais to USD: 0.19 USD
// Soles to USD: 0.26 USD

total = 0.048 * pesos + 0.19 * reais + 0.26 * soles

print("US Dollars = $\(total)")
