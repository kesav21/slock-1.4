// vim: set foldmethod=marker:

/* user and group to drop privileges to */
static const char *user  = "kesav";
static const char *group = "kesav";

static const char *colorname[NUMCOLS] = {
	[INIT]   = "#1d2021", // after initialization
	[INPUT]  = "#282828", // during input
	[FAILED] = "#9d0006", // wrong password
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

