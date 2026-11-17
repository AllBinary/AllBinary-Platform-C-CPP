/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.control.search

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SearchData SearchData;
struct SearchData {
    char unused;
};

const char* SearchData_TOTAL_NUMBER_PAGES = "SEARCHDATA_TOTALNUMBEROFPAGES";
const char* SearchData_TOTAL_NUMBER_ITEMS_ON_THIS_PAGE = "SEARCHDATA_TOTALNUMBEROFITEMSONTHISPAGE";
const char* SearchData_TOTAL_NUMBER_ITEMS = "SEARCHDATA_TOTALNUMBEROFITEMS";
constexpr int32_t SearchData_DEFAULT_PAGE_LENGTH = 10;
const char* SearchData_GENERATESTATICPAGES = "Generate Static Pages";
const char* SearchData_SEARCHBYSUMMARY = "Search By Summary";
const char* SearchData_SEARCHBYDESCRIPTION = "Search By Description";
const char* SearchData_SEARCHBYCATEGORY = "Search By Category";
const char* SearchData_SEARCHCATEGORIES = "Search Categories";
const char* SearchData_FILENAME = "SEARCHDATA_BASEFILENAME";
const char* SearchData_COLUMNNAME = "COLUMN_NAME";
const char* SearchData_COLUMNVALUE = "COLUMN_VALUE";
const char* SearchData_PARAMS = "SEARCHDATA_PARAMS";
const char* SearchData_LENGTH = "SEARCHDATA_LENGTH";
const char* SearchData_ORDER = "SEARCHDATA_ORDER";
const char* SearchData_PAGE = "SEARCHDATA_PAGE";
const char* SearchData_FIELDS = "SEARCHDATA_FIELDS";
const char* SearchData_FIELD = "SEARCHDATA_FIELD";
const char* SearchData_SORTBY = "SEARCHDATA_SORTBY";
const char* SearchData_TYPE = "SEARCHDATA_TYPE";
const char* SearchData_PAGE_INFO = "pageInfo";
const char* SearchData_SEARCH = "search";
const char* SearchData_MAKEPUBLIC = "Make Public";

SearchData* SearchData_new(void);

void SearchData_init(SearchData* this);


void SearchData_init(SearchData* this) {
}

SearchData* SearchData_new(void) {
    SearchData* this = calloc(1, sizeof(SearchData));
    SearchData_init(this);
    return this;
}

