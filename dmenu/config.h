/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "FiraCode Nerd Font:size=10";
static const char *fonts[] = {
    font,
    "FiraCode Nerd Font:size=10",
};

// static const char *prompt =
// NULL; [> -p  option; prompt to the left of input field <]
// static const char *colors[SchemeLast][2] = {

static char *prompt = NULL; /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[] = "#eeeeee";
static char selbgcolor[] = "#005577";
static char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    //[SchemeNorm] = {"#bbbbbb", "#222222"},
    //[SchemeSel] = {"#eeeeee", "#005577"},
    //[SchemeOut] = {"#000000", "#00ffff"},
    [SchemeSelHighlight] = {"#ffc978", "#005577"},
    [SchemeNormHighlight] = {"#ffc978", "#222222"},
    [SchemeOutHighlight] = {"#ffc978", "#00ffff"},
    [SchemeMid] = {"#eeeeee", "#770000"},
    [SchemeNorm] = {normfgcolor, normbgcolor},
    [SchemeSel] = {selfgcolor, selbgcolor},
    [SchemeOut] = {"#000000", "#00ffff"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
static unsigned int lineheight =
    0; /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
    {"font", STRING, &font},
    {"normfgcolor", STRING, &normfgcolor},
    {"normbgcolor", STRING, &normbgcolor},
    {"selfgcolor", STRING, &selfgcolor},
    {"selbgcolor", STRING, &selbgcolor},
    {"prompt", STRING, &prompt},
};

/* Size of the window border */
static const unsigned int border_width = 5;

