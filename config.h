// vim: set foldmethod=marker:

/* user and group to drop privileges to */
static const char *user  = "kesav";
static const char *group = "kesav";

// colors/theme/gruvbox {{{

static const char col_background[] = "#282828";
static const char col_color1[] = "#cc241d";
static const char col_color6[] = "#689d6a";

// }}}

static const char *colorname[NUMCOLS] = {
	[INIT]   = col_background, // after initialization
	[INPUT]  = col_color6,     // during input
	[FAILED] = col_color1,     // wrong password
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

