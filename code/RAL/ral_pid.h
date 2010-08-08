/*
  target for a general API for PID calculation
  ( not only a pid for wheel speed )
*/

#ifndef __RAL_PID_H
#define __RAL_PID_H


typedef struct _Ral_Pid Ral_Pid;

int Ral_Pid_Init(Ral_Pid** x);
 
#endif /* __RAL_PID_H */

