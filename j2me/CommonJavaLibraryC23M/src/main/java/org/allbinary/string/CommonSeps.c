// Generated Code Do Not Modify
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"


static CommonSeps* CommonSeps_instance;


void CommonSeps_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommonSeps_instance = CommonSeps_new();
}

void CommonSeps_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommonSeps", nullptr);
}

static void CommonSeps_initFields(CommonSeps* this) {
    this->NEW_LINE = "\n";
    this->SEMICOLON = ";";
    this->EQUALS = "=";
    this->SPACE = " ";
    this->COMMA = ",";
    this->COLON = ":";
    this->PERIOD = ".";
    this->UNDERSCORE = "_";
    this->COLON_SEP = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->COLON), this->SPACE));
    this->COMMA_SEP = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->COMMA), this->SPACE));
    this->PARENTHESIS_OPEN = "(";
    this->PARENTHESIS_CLOSE = ")";
    this->BRACE_OPEN = "{";
    this->BRACE_CLOSE = "}";
    this->BRACKET_OPEN = "[";
    this->BRACKET_CLOSE = "]";
    this->DASH = "-";
    this->PERCENT = "%";
    this->AMPERSAND = "&";
    this->FORWARD_SLASH = "/";
    this->BACK_SLASH = "\\";
    this->QUESTION = "?";
    this->QUOTE = "\"";
    this->QUOTE_END = "\",";
    this->COMMENT = "//";
    this->INDENT = "    ";
}

void CommonSeps_init(CommonSeps* this) {
    CommonSeps_register();
    CommonSeps_initFields(this);
}

CommonSeps* CommonSeps_new(void) {
    CommonSeps* this = java_object_alloc(sizeof(CommonSeps), "CommonSeps");
    CommonSeps_init(this);
    return this;
}


CommonSeps* CommonSeps_getInstance(void) {
        return (CommonSeps_staticInit(), CommonSeps_instance);
}

