double power(double a, double b){
	double result=1;
	
	for(unsigned int i=0;i<b;++i){
		result*=a;
	}
	
	return result;
	
}