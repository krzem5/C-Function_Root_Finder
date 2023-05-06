#define DELTA 0.001f



float find_root(float (*func)(float),float initial_guess,unsigned int interations){
	float out=initial_guess;
	while (interations){
		interations--;
		float points[5]={func(out+2*DELTA),func(out+DELTA),func(out),func(out-DELTA),func(out-2*DELTA)};
		float d=points[4]-points[0]+8*(points[1]-points[3]);
		out-=12*DELTA*points[2]/(d+points[2]*(6*(points[0]+points[4])-96*(points[1]+points[3])+180*points[2])/d);
	}
	return out;
}
