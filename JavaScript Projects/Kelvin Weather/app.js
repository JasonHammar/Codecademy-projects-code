// The variable below is the constant value for kelvin temperature.
const kelvin = 293;
// The variable below is the celsius value of the kelvin temperature.
let celsius = kelvin - 273;
// The variable below is the conversion from the current celsius temperature to farenheit.
// We use math.floor in order to get less messy results.
let farenheit = Math.floor(celsius * (9 / 5) + 32);
console.log(`The temperature is ${farenheit} degrees Farenheit.`);
