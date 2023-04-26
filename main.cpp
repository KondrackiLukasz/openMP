#include "utility.h"
#include <cstdio>
#include <cstdlib>
#include <sys/time.h>
#include <omp.h>


int main(int argc,char **argv) {


  Args ins__args;
  parseArgs(&ins__args, &argc, argv);

  //set number of threads
  omp_set_num_threads(ins__args.n_thr);

  //program input argument
  long inputArgument = ins__args.arg;

  struct timeval ins__tstart, ins__tstop;
  gettimeofday(&ins__tstart, NULL);

  // run your computations here (including OpenMP stuff)




  // synchronize/finalize your computations
  gettimeofday(&ins__tstop, NULL);
  ins__printtime(&ins__tstart, &ins__tstop, ins__args.marker);

}
