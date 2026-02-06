/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";
/*Font settings for the time text*/
static const float textsize=64.0;
static const char* textfamily="serif";
static const double textcolorred=255;
static const double textcolorgreen=255;
static const double textcolorblue=255;

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Wrong password shake + flash*/
static const int shakeamplitude=20;
static const int shakecycles=3;
static const int shakedurationms=400;
static const double shakecolor[]={0.8, 0.2, 0.2}; /* red */

/*Fade-in animation*/
static const int fadedurationms=600;
static const int fadesteps=30;

/*Date settings*/
static const float datesize=24.0;
static const double dateoffset=12.0;

/*Lock indicator (Nerd Font padlock) */
static const char* locktext="\xf3\xb0\x8c\xbe"; /* 󰌾 nf-md-lock */
static const float locksize=32.0;
static const double lockoffset=20.0;

/*Dot indicator settings*/
static const double dotradius=4.0;
static const double dotspacing=8.0;
static const double dotoffset=20.0;
static const double dotbgpadx=12.0;
static const double dotbgpady=8.0;
static const double dotbgradius=8.0;
static const double dotbgalpha=0.4;
static const double dotcolorinput[]={0.0, 0.33, 0.47};  /* #005577 */
static const double dotcolorfailed[]={0.8, 0.2, 0.2};   /* #CC3333 */

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
