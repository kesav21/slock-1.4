
/* user and group to drop privileges to */
static const char *user  = "kesav";
static const char *group = "kesav";

static const char *colorname[NUMCOLS] = {
	/* after initialization */
	[INIT] =   "#282828", // background
	/* during input */
	[INPUT] =  "#d79921", // yellow
	/* wrong password */
	[FAILED] = "#cc241d", // red
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

