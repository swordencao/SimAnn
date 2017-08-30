extern double T_COMM;

int MPI_Bcast(void *buf, int count, MPI_Datatype datatype, int root, MPI_Comm communicator);
int MPI_Send(const void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm communicator);
int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm communicator, MPI_Status *status);