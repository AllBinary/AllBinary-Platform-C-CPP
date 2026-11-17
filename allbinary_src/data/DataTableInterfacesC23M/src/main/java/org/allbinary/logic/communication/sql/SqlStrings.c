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
#include "org/allbinary/string/CommonSeps.h"

typedef struct SqlStrings SqlStrings;
struct SqlStrings {
    const char* CREATE_DATABASE;
    const char* DROP_TABLE;
    const char* CREATE_TABLE;
    const char* START;
    const char* SELECT;
    const char* FROM;
    const char* SELECT_ALL;
    const char* WHERE;
    const char* AND;
    const char* UPDATE;
    const char* SET;
    const char* SELECT_ALL_FROM;
    const char* DELETE;
    const char* LIKE_QUOTE;
    const char* INSERT_INTO;
    const char* VALUES;
    const char* ORDER_BY;
    const char* COUNT;
    const char* ASC;
    const char* DESC;
    const char* PRIMARY_KEY;
    const char* END;
    const char* EQUAL_QUOTE;
    const char* CLOSE_QUOTE;
    const char* EQUAL_QUOTE_NO_SPACE;
    const char* ESCAPE;
    const char* DOUBLE_ESCAPE;
    const char* MORE_THAN_QUOTE;
    const char* LESS_THAN_QUOTE;
    const char* SINGLE_QUOTE_COMMA_SEP;
    const char* ID;
    const char* SQL_STATEMENT_LABEL;
    const char* COLUMN_VALUE;
    const char* CREATE_RETURN;
    const char* FIELD_VALUE;
};

static SqlStrings* SqlStrings_instance;

SqlStrings* SqlStrings_new(void);
SqlStrings* SqlStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void SqlStrings_staticInit(void) {
    SqlStrings_instance = SqlStrings_new();
}

static void SqlStrings_initFields(SqlStrings* this) {
    this->CREATE_DATABASE = "CREATE DATABASE ";
    this->DROP_TABLE = "DROP TABLE ";
    this->CREATE_TABLE = "CREATE TABLE ";
    this->START = " (";
    this->SELECT = "SELECT ";
    this->FROM = " FROM ";
    this->SELECT_ALL = "SELECT *";
    this->WHERE = " WHERE ";
    this->AND = " AND ";
    this->UPDATE = "UPDATE ";
    this->SET = " SET ";
    this->SELECT_ALL_FROM = java_concat(this->SELECT_ALL, this->FROM);
    this->DELETE = "DELETE";
    this->LIKE_QUOTE = " LIKE \"";
    this->INSERT_INTO = "INSERT INTO ";
    this->VALUES = " VALUES ('";
    this->ORDER_BY = "ORDER BY";
    this->COUNT = "COUNT(";
    this->ASC = "ASC";
    this->DESC = "DESC";
    this->PRIMARY_KEY = "PRIMARY KEY(";
    this->END = ") )";
    this->EQUAL_QUOTE = " = \"";
    this->CLOSE_QUOTE = CommonSeps_getInstance()->QUOTE;
    this->EQUAL_QUOTE_NO_SPACE = "=\"";
    this->ESCAPE = "\\";
    this->DOUBLE_ESCAPE = "\\\\";
    this->MORE_THAN_QUOTE = " > \"";
    this->LESS_THAN_QUOTE = " < \"";
    this->SINGLE_QUOTE_COMMA_SEP = "','";
    this->ID = "ID";
    this->SQL_STATEMENT_LABEL = "SQL Statement: ";
    this->COLUMN_VALUE = "\nColumn Value: ";
    this->CREATE_RETURN = " Created Successfully";
    this->FIELD_VALUE = "\nField Value: ";
}

void SqlStrings_init(SqlStrings* this) {
    SqlStrings_initFields(this);
}

SqlStrings* SqlStrings_new(void) {
    SqlStrings* this = calloc(1, sizeof(SqlStrings));
    SqlStrings_init(this);
    return this;
}


SqlStrings* SqlStrings_getInstance(void) {
        return SqlStrings_instance;
}

