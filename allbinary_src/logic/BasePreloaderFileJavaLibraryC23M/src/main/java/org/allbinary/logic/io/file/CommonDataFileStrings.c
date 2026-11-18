// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/CommonDataFileStrings.h"


static CommonDataFileStrings* CommonDataFileStrings_instance;


void CommonDataFileStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommonDataFileStrings_instance = CommonDataFileStrings_new();
}

void CommonDataFileStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommonDataFileStrings", nullptr);
}

static void CommonDataFileStrings_initFields(CommonDataFileStrings* this) {
    this->XML = "xml";
    this->_XML_ = ".xml";
    this->JSON = "json";
    this->_JSON_ = ".json";
    this->XSL = "xsl";
    this->_XSL_ = ".xsl";
    this->JAVA = "java";
    this->_JAVA_ = ".java";
    this->KT = "kt";
    this->_KT_ = ".kt";
    this->TS = "ts";
    this->_TS_ = ".ts";
    this->JS = "js";
    this->_JS_ = ".js";
    this->CPP = "cpp";
    this->_CPP_ = ".cpp";
    this->H = "h";
    this->_H_ = ".h";
    this->PY = "py";
    this->_PY_ = ".py";
    this->GO = "go";
    this->_GO_ = ".go";
    this->CS = "cs";
    this->_CS_ = ".cs";
    this->ADB = "adb";
    this->_ADB_ = ".adb";
    this->ADS = "ads";
    this->_ADS_ = ".ads";
    this->ADA = "ada";
    this->_ADA_ = ".ada";
    this->RUST = "rs";
    this->_RUST_ = ".rs";
    this->C = "c";
    this->_C_ = ".c";
    this->CSHARP = "cs";
    this->_CSHARP_ = ".cs";
    this->ERL = "erl";
    this->_ERL_ = ".erl";
    this->HS = "hs";
    this->_HS_ = ".hs";
    this->HX = "hx";
    this->_HX_ = ".hx";
    this->LUA = "lua";
    this->_LUA_ = ".lua";
    this->PAS = "pas";
    this->_PAS_ = ".pas";
    this->ML = "ml";
    this->_ML_ = ".ml";
    this->PL = "pl";
    this->_PL_ = ".pl";
    this->RB = "rb";
    this->_RB_ = ".rb";
    this->ZIG = "zig";
    this->_ZIG_ = ".zig";
    this->PM = "pm";
    this->_PM_ = ".pm";
    this->KTS = "kts";
    this->_KTS_ = ".kts";
    this->CBL = "cbl";
    this->_CBL_ = ".cbl";
    this->COB = "cob";
    this->_COB_ = ".cob";
    this->F90 = "f90";
    this->_F90_ = ".f90";
    this->F = "f";
    this->_F_ = ".f";
    this->DART = "dart";
    this->_DART_ = ".dart";
    this->EX = "ex";
    this->_EX_ = ".ex";
    this->EXS = "exs";
    this->_EXS_ = ".exs";
    this->M = "m";
    this->_M_ = ".m";
    this->SWIFT = "swift";
    this->_SWIFT_ = ".swift";
    this->ASM = "asm";
    this->_ASM_ = ".asm";
    this->S = "s";
    this->_S_ = ".s";
    this->NIM = "nim";
    this->_NIM_ = ".nim";
    this->VALA = "vala";
    this->_VALA_ = ".vala";
    this->LISP = "lisp";
    this->_LISP_ = ".lisp";
    this->RKT = "rkt";
    this->_RKT_ = ".rkt";
    this->SCM = "scm";
    this->_SCM_ = ".scm";
    this->AS = "as";
    this->_AS_ = ".as";
    this->OBX = "obx";
    this->_OBX_ = ".obx";
    this->SCALA = "scala";
    this->_SCALA_ = ".scala";
    this->GROOVY = "groovy";
    this->_GROOVY_ = ".groovy";
    this->JL = "jl";
    this->_JL_ = ".jl";
    this->TCL = "tcl";
    this->_TCL_ = ".tcl";
    this->WREN = "wren";
    this->_WREN_ = ".wren";
    this->JANET = "janet";
    this->_JANET_ = ".janet";
    this->GR = "gr";
    this->_GR_ = ".gr";
    this->ELM = "elm";
    this->_ELM_ = ".elm";
    this->KOTLIN = "kotlin";
    this->TYPESCRIPT = "typescript";
    this->JAVASCRIPT = "javascript";
    this->C_PLUS_PLUS = "c++";
    this->PYTHON = "python";
    this->C_SHARP = "c#";
    this->RUST_NAME = "rust";
    this->RUBY = "ruby";
    this->PERL = "perl";
    this->OBJECT_PASCAL = "objectpascal";
    this->OCAML = "ocaml";
    this->HASKELL = "haskell";
    this->HAXE = "haxe";
    this->ERLANG = "erlang";
    this->COBOL = "cobol";
    this->FORTRAN = "fortran";
    this->ELIXIR = "elixir";
    this->OBJECTIVE_C = "objective-c";
    this->RACKET = "racket";
    this->SCHEME = "scheme";
    this->ACTIONSCRIPT = "actionscript";
    this->OBERON_PLUS = "oberon+";
    this->JULIA = "julia";
    this->GRAIN = "grain";
    this->CPLUSPLUS = "cplusplus";
    this->GOLANG = "golang";
    this->CSHARP_ALIAS = "csharp";
    this->C23 = "c23";
    this->PASCAL = "pascal";
    this->OBJECT_PASCAL_ALIAS = "object pascal";
    this->OBJC = "objc";
    this->OBJECTIVE_C_ALIAS = "objectivec";
    this->ASSEMBLY = "assembly";
    this->COMMON_LISP = "common lisp";
    this->OBERON = "oberon";
    this->OBERON_PLUS_ALIAS = "oberonplus";
    this->KT_SHORT_NAME = "Kt";
    this->TS_SHORT_NAME = "Ts";
    this->JS_SHORT_NAME = "Js";
    this->CPP_SHORT_NAME = "Cpp";
    this->PY_SHORT_NAME = "Py";
    this->GO_SHORT_NAME = "Go";
    this->CS_SHORT_NAME = "Cs";
    this->ADA_SHORT_NAME = "Ada";
    this->RUST_SHORT_NAME = "Rust";
    this->LUA_SHORT_NAME = "Lua";
    this->C_SHORT_NAME = "C";
    this->ZIG_SHORT_NAME = "Zig";
    this->RB_SHORT_NAME = "Rb";
    this->PL_SHORT_NAME = "Pl";
    this->PAS_SHORT_NAME = "Pas";
    this->ML_SHORT_NAME = "Ml";
    this->HS_SHORT_NAME = "Hs";
    this->HX_SHORT_NAME = "Hx";
    this->ERL_SHORT_NAME = "Erl";
    this->CBL_SHORT_NAME = "Cbl";
    this->F90_SHORT_NAME = "F90";
    this->DART_SHORT_NAME = "Dart";
    this->EX_SHORT_NAME = "Ex";
    this->OBJC_SHORT_NAME = "ObjC";
    this->SWIFT_SHORT_NAME = "Swift";
    this->ASM_SHORT_NAME = "Asm";
    this->NIM_SHORT_NAME = "Nim";
    this->VALA_SHORT_NAME = "Vala";
    this->LISP_SHORT_NAME = "Lisp";
    this->RKT_SHORT_NAME = "Rkt";
    this->SCM_SHORT_NAME = "Scm";
    this->AS_SHORT_NAME = "As";
    this->OBX_SHORT_NAME = "Obx";
    this->SCALA_SHORT_NAME = "Scala";
    this->GROOVY_SHORT_NAME = "Groovy";
    this->JL_SHORT_NAME = "Jl";
    this->TCL_SHORT_NAME = "Tcl";
    this->WREN_SHORT_NAME = "Wren";
    this->JANET_SHORT_NAME = "Janet";
    this->GR_SHORT_NAME = "Gr";
    this->ELM_SHORT_NAME = "Elm";
    this->UNCRYPTED_EXTENSION = this->XML;
    this->ENCRYPTED_EXTENSION = "abd";
}

void CommonDataFileStrings_init(CommonDataFileStrings* this) {
    CommonDataFileStrings_register();
    CommonDataFileStrings_initFields(this);
}

CommonDataFileStrings* CommonDataFileStrings_new(void) {
    CommonDataFileStrings* this = java_object_alloc(sizeof(CommonDataFileStrings), "CommonDataFileStrings");
    CommonDataFileStrings_init(this);
    return this;
}


CommonDataFileStrings* CommonDataFileStrings_getInstance(void) {
        return (CommonDataFileStrings_staticInit(), CommonDataFileStrings_instance);
}

