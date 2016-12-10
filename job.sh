#!/usr/bin/env bash
#SBATCH --job-name=mijieux1
#SBATCH --output=out.1
#SBATCH --error=err.1
#SBATCH -p mistral
#SBATCH --exclusive
#SBATCH --time=02:00:00
#SBATCH --nodes=9
#SBATCH --ntasks-per-node=1

# 4 noeud / 4 proc MPI / mkl parallele 20 threads

WORKDIR=${WORKDIR:-${HOME}/pdgetrf}

cd ${WORKDIR}
. ./.module.load

mpirun -n 9 ./pdgetrf
