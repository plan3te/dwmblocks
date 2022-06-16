//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/home/dion/dwmblocks/scripts/dwmmemory",	5,		0},
	{"", "/home/dion/dwmblocks/scripts/dwmvolume", 1, 0},
	{"", "/home/dion/dwmblocks/scripts/dwmbattery", 10, 0},
	{"", "date '+%a %b %d  %H:%M'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;