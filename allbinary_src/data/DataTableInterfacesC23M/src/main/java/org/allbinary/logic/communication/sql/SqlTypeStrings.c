// Generated Code Do Not Modify
// package org.allbinary.logic.communication.sql

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct SqlTypeStrings SqlTypeStrings;
struct SqlTypeStrings {
    const char* CHAR_COLUMN;
    const char* INT_COLUMN;
    const char* MAX_SIZE;
    const char* SIXTY_SIZE;
    const char* NOT_NULL;
    const char* ONE_SIZE;
    const char* TWO_SIZE;
    const char* THREE_SIZE;
    const char* SIX_SIZE;
    const char* ELEVEN_SIZE;
    const char* TWELVE_SIZE;
    const char* ONE_KB_CHAR_COLUMN;
    const char* MAX_CHAR_COLUMN;
    const char* MAX_CHAR_COLUMN_NOT_NULL;
    const char* SIXTY_CHAR_COLUMN_NOT_NULL;
    const char* ONE_CHAR_COLUMN_NOT_NULL;
    const char* SIX_CHAR_COLUMN_NOT_NULL;
    const char* TWELVE_CHAR_COLUMN_NOT_NULL;
    const char* TWO_INT_NOT_NULL;
    const char* THREE_INT_NOT_NULL;
    const char* FOUR_INT_NOT_NULL;
    const char* MAX_INT_NOT_NULL;
    const char* MAX_INT_UNSIGNED;
    const char* MAX_INT_UNSIGNED_NOT_NULL;
    const char* MAX_BIG_INT_NOT_NULL;
    const char* MAX_BIG_INT_UNSIGNED;
    const char* MAX_BIG_INT_UNSIGNED_NOT_NULL;
    const char* MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL;
    const char* LONG_BLOB;
    const char* BLOB;
    const char* BLOB_NOT_NULL;
};

static SqlTypeStrings* SqlTypeStrings_instance;

SqlTypeStrings* SqlTypeStrings_new(void);
SqlTypeStrings* SqlTypeStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void SqlTypeStrings_staticInit(void) {
    SqlTypeStrings_instance = SqlTypeStrings_new();
}

static void SqlTypeStrings_initFields(SqlTypeStrings* this) {
    this->CHAR_COLUMN = "VARCHAR";
    this->INT_COLUMN = "VARCHAR";
    this->MAX_SIZE = "(255)";
    this->SIXTY_SIZE = "(60)";
    this->NOT_NULL = "NOT NULL";
    this->ONE_SIZE = "(1)";
    this->TWO_SIZE = "(2)";
    this->THREE_SIZE = "(3)";
    this->SIX_SIZE = "(6)";
    this->ELEVEN_SIZE = "(11)";
    this->TWELVE_SIZE = "(12)";
    this->ONE_KB_CHAR_COLUMN = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), append, this->CHAR_COLUMN), append, "(1024)"), append, CommonSeps_getInstance()->COMMA_SEP), toString);
    this->MAX_CHAR_COLUMN = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), append, this->CHAR_COLUMN), append, this->MAX_SIZE), append, CommonSeps_getInstance()->COMMA_SEP), toString);
    this->MAX_CHAR_COLUMN_NOT_NULL = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), append, this->CHAR_COLUMN), append, this->MAX_SIZE), append, CommonSeps_getInstance()->SPACE), append, this->NOT_NULL), append, CommonSeps_getInstance()->COMMA_SEP), toString);
    this->SIXTY_CHAR_COLUMN_NOT_NULL = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), append, this->CHAR_COLUMN), append, this->SIXTY_SIZE), append, this->NOT_NULL), append, CommonSeps_getInstance()->COMMA_SEP), toString);
    this->ONE_CHAR_COLUMN_NOT_NULL = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), append, this->CHAR_COLUMN), append, this->ONE_SIZE), append, this->NOT_NULL), append, CommonSeps_getInstance()->COMMA_SEP), toString);
    this->SIX_CHAR_COLUMN_NOT_NULL = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), append, this->CHAR_COLUMN), append, this->SIX_SIZE), append, this->NOT_NULL), append, CommonSeps_getInstance()->COMMA_SEP), toString);
    this->TWELVE_CHAR_COLUMN_NOT_NULL = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->SPACE), append, this->CHAR_COLUMN), append, this->TWELVE_SIZE), append, this->NOT_NULL), append, CommonSeps_getInstance()->COMMA_SEP), toString);
    this->TWO_INT_NOT_NULL = " INT(2) NOT NULL, ";
    this->THREE_INT_NOT_NULL = " INT(3) NOT NULL, ";
    this->FOUR_INT_NOT_NULL = " INT(4) NOT NULL, ";
    this->MAX_INT_NOT_NULL = " INT(11) NOT NULL, ";
    this->MAX_INT_UNSIGNED = " INT(11) UNSIGNED, ";
    this->MAX_INT_UNSIGNED_NOT_NULL = " INT(11) UNSIGNED NOT NULL, ";
    this->MAX_BIG_INT_NOT_NULL = " BIGINT(19) NOT NULL, ";
    this->MAX_BIG_INT_UNSIGNED = " BIGINT(19) UNSIGNED, ";
    this->MAX_BIG_INT_UNSIGNED_NOT_NULL = " BIGINT(19) UNSIGNED NOT NULL, ";
    this->MAX_BIG_INT_UNSIGNED_AUTO_INCREMENT_NOT_NULL = " BIGINT(19) UNSIGNED AUTO_INCREMENT NOT NULL,";
    this->LONG_BLOB = " LONGBLOB, ";
    this->BLOB = " BLOB, ";
    this->BLOB_NOT_NULL = " BLOB NOT NULL, ";
}

void SqlTypeStrings_init(SqlTypeStrings* this) {
    SqlTypeStrings_initFields(this);
}

SqlTypeStrings* SqlTypeStrings_new(void) {
    SqlTypeStrings* this = calloc(1, sizeof(SqlTypeStrings));
    SqlTypeStrings_init(this);
    return this;
}


SqlTypeStrings* SqlTypeStrings_getInstance(void) {
        return SqlTypeStrings_instance;
}

