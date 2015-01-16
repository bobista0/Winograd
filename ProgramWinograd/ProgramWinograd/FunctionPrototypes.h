void Start(void);

void ReadMatrix(int **);
void ReadA(void);
void ReadB(void);

int** ReserveA(int);
int** ReserveB(int);
void ReserveC(int);

void ComputeMatrix(void);
typedef int (*fptrOperation)(int, int);
int Sum(int, int);
int Product(int, int);
int Compute(fptrOperation, int, int);