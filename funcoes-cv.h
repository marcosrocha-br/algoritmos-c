//Fahrenheit to Celsius
double FtoC (double F) {
	return (F - 32) / 1.8;
}

//Fahrenheit to Kelvin
double FtoK (double F){
	return (F + 459.67) * 5/9;
}

//Fahrenheit to Rankine
double FtoR (double F){
	return (F + 459.67);
}

//Celsius to Fahrenheit
double CtoF(double C){
	return (C * 1.8 + 32);
}

//Celsius to Kelvin
double CtoK(double C){
	return (C + 273.15);
}

//Celsius to Rankine
double CtoR(double C){
	return (C + 273.15) * 9/5;
}

//Kelvin to Fahrenheit
double KtoF(double K){
	return K * 9/5 - 459.67;
}

//Kelvin to Celsius
double KtoC(double K){
	return K - 273.15;
}

//Kelvin to Rankine
double KtoR(double K){
	return K * 9/5;
}

//Rankine to Fahrenheit
double RtoF(double R){
	return R - 459.67;
}

//Rankine to Celsius
double RtoC(double R){
	return (R - 491.67) * 5/9;
}

//Rankine to Kelvin
double RtoK(double R){
	return R * 5/9;
}
