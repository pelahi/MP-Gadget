#define W(x) walltime_clock(x)
#define WALL_ALL            W("/")
#define WALL_TREE           W("/Tree")
#define WALL_TREEWALK1      W("/Tree/Walk1")
#define WALL_TREEWALK2      W("/Tree/Walk2")
#define WALL_TREEWAIT1      W("/Tree/Wait1")
#define WALL_TREEWAIT2      W("/Tree/Wait2")
#define WALL_TREESEND       W("/Tree/Send")
#define WALL_TREERECV       W("/Tree/Recv")
#define WALL_TREEMISC       W("/Tree/Misc")
#define WALL_TREEBUILD      W("/Tree/Build")
#define WALL_TREEUPDATE     W("/Tree/Update")
#define WALL_TREEHMAXUPDATE W("/Tree/HmaxUpdate")
#define WALL_DOMAIN         W("/Domain")
#define WALL_SPH            W("/SPH")
#define WALL_DENS           W("/SPH/Density")
#define WALL_DENSCOMPUTE    W("/SPH/Density/Compute")
#define WALL_DENSWAIT       W("/SPH/Density/Wait")
#define WALL_DENSCOMM       W("/SPH/Density/Comm")
#define WALL_DENSMISC       W("/SPH/Density/Misc")
#define WALL_HYD            W("/SPH/Hydro")
#define WALL_HYDCOMPUTE     W("/SPH/Hydro/Compute")
#define WALL_HYDWAIT        W("/SPH/Hydro/Wait")
#define WALL_HYDCOMM        W("/SPH/Hydro/Comm")
#define WALL_HYDMISC        W("/SPH/Hydro/Misc")
#define WALL_DRIFT          W("/Drift")
#define WALL_TIMELINE       W("/Timeline")
#define WALL_POTENTIAL      W("/Potential")
#define WALL_MESH           W("/Mesh")
#define WALL_PEANO          W("/Peano")
#define WALL_COOLINGSFR     W("/CoolingSfr")
#define WALL_SNAPSHOT       W("/Snapshot")
#define WALL_FOF            W("/Fof")
#define WALL_BLACKHOLES     W("/Blackholes")
#define WALL_MISC           W("/Misc")

void walltime_init();
int walltime_clock(char * name);
void walltime_reset();
double walltime_measure(int clockid);
double walltime_add(int clockid, double dt);
double walltime_get_seconds (int id);
char walltime_get_symbol(int id);
char * walltime_get_name(int id);

void walltime_summary();
void walltime_report(FILE * fd);
