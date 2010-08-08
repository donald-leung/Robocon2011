#include "ral_pid.h" 
#include <stdlib.h>

#if 1
struct _Ral_Pid{
	float kp;
	float ki;
	float kd;
};

int Ral_Pid_Init(Ral_Pid** x){
	*x = malloc(sizeof(Ral_Pid));
	if(*x >0 ){
		return 0;
	}else{
		return -1;
	}
}

	 #endif
