#pragma once
#include <string>
#include <EuroScopePlugIn.h>
#include <vector>

using namespace std;
using namespace EuroScopePlugIn;

/// WAYPOINTS
// Entry Waypoints
const vector<string> pointsGander = { "AVPUT",
        "CLAVY",
        "EMBOK",
        "KETLA",
        "LIBOR",
        "MAXAR",
        "NIFTY",
        "PIDSO",
        "RADUN",
        "SAVRY",
        "TOXIT",
        "URTAK",
        "VESMI",
        "AVUTI",
        "BOKTO",
        "CUDDY",
        "DORYY",
        "ENNSO",
        "HOIST",
        "IRLOK",
        "JANJO",
        "KODIK",
        "LOMSI",
        "MELDI",
        "NEEKO",
        "PELTU",
        "RIKAL",
        "SAXAN",
        "TUDEP",
        "UMESI",
        "ALLRY",
        "BUDAR",
        "ELSIR",
        "IBERG",
        "JOOPY",
        "MUSAK",
        "NICSO",
        "OMSAT",
        "PORTI",
        "RELIC",
        "SUPRY",
        "RAFIN",
        "JAROM",
        "BOBTU" 
};

const vector<string> pointsShanwick = { "RATSU",
        "LUSEN",
        "ATSIX",
        "ORTAV",
        "BALIX",
        "ADODO",
        "ERAKA",
        "ETILO",
        "GOMUP",
        "AGORI",
        "SUNOT",
        "BILTO",
        "PIKIL",
        "ETARI",
        "RESNO",
        "VENER",
        "DOGAL",
        "NEBIN",
        "MALOT",
        "TOBOR",
        "LIMRI",
        "ADARA",
        "DINIM",
        "RODEL",
        "SOMAX",
        "KOGAD",
        "BEDRA",
        "NERTU",
        "NASBA",
        "OMOKO",
        "TAMEL",
        "GELPO",
        "LASNO",
        "ETIKI",
        "UMLER",
        "SEPAL",
        "BUNAV",
        "SIVIR",
        "BEGAS",
        "DIVAT",
        "DIXIS",
        "BERUX",
        "PITAX",
        "PASAS",
        "NILAV",
        "GONAN" 
};

/// VALUES
// Plugin info
const string PLUGIN_NAME = "vNAAATS";
const string PLUGIN_VERSION = "v0.1a";
const string PLUGIN_AUTHOR = "Andrew Ogden github.com/andrewogden1678";
const string PLUGIN_COPYRIGHT = "Gander Oceanic vNAAATS";

// Screen details
#define DISPLAY_NAME "vNAAATS Display"

// Text, margins and padding
const int MEN_FONT_SIZE = 16;
const int BTN_PAD_SIDE = 4;
const int BTN_PAD_TOP = 6;

// Lists
const int LIST_INBOUND_WIDTH = 400;

// Menu bar
const int MENBAR_HEIGHT = 100;
const int MENBAR_BTN_HEIGHT = 30;
const int RECT1_WIDTH = 500;
const int RECT2_WIDTH = 340;
const int RECT3_WIDTH = 160;
const int RECT4_WIDTH = 100;
const int RECT5_WIDTH = 250;
const int RECT6_WIDTH = 100;
const int RECT7_WIDTH = 270;
const int RECT8_WIDTH = 90;

/// OBJECTS
// Lists
const int LIST_INBOUND = 300;

// Screen
const int SCREEN_TAG = 1;

// Menu buttons, dropdowns & text fields
const int MENBTN_SETUP = 400;
const int MENBTN_NOTEPAD = 401;
const int MENBTN_ADSC = 402;
const int MENBTN_FREQUENCY = 403;
const int MENBTN_MISC = 404;
const int MENBTN_MESSAGE = 405;
const int MENBTN_TAGS = 406;
const int MENBTN_FLIGHTPLAN = 407;
const int MENBTN_DETAILED = 408;
const int MENBTN_AREASEL = 409;
const int MENBTN_TCKCTRL = 410;
const int MENBTN_OVERLAYS = 411;
const int MENBTN_TYPESEL = 412;
const int MENBTN_ALTFILT = 413;
const int MENBTN_HALO = 414;
const int MENBTN_RBL = 415;
const int MENBTN_RINGS = 416;
const int MENBTN_MTT = 417;
const int MENBTN_PTL = 418;
const int MENBTN_PIV = 419;
const int MENBTN_GRID = 420;
const int MENBTN_SEP = 421;
const int MENBTN_POS = 422;
const int MENBTN_QCKLOOK = 423;
const int MENDRP_AREASEL = 424;
const int MENDRP_TCKCTRL = 425;
const int MENDRP_OVERLAYS = 426;
const int MENDRP_TYPESEL = 427;
const int MENTXT_ALTFILT = 428;

/// ASR VARIABLES
const string ASR_INBND_X = "VN_ASR_INBND_X";
const string ASR_INBND_Y = "VN_ASR_INBND_Y";