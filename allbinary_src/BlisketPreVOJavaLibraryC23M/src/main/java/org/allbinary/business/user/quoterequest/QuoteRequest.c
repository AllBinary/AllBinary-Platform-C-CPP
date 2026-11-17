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
// package org.allbinary.business.user.quoterequest

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/quoterequest/QuoteRequestData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/data/generator/QuoteRequestIdGenerator.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct QuoteRequest QuoteRequest;
struct QuoteRequest {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* id;
    const char* userName;
    const char* projectInfo;
    const char* userComments;
    const char* budget;
    const char* timeFrame;
    const char* comments;
};


QuoteRequest* QuoteRequest_new(const char* userName, HttpServletRequest* request);

void QuoteRequest_init(QuoteRequest* this, const char* userName, HttpServletRequest* request);

QuoteRequest* QuoteRequest_new1(HashMap* hashMap);
void QuoteRequest_init1(QuoteRequest* this, HashMap* hashMap);
bool QuoteRequest_isValid(QuoteRequest* this);
const char* QuoteRequest_validationInfo(QuoteRequest* this);
BasicArrayList* QuoteRequest_toVector(QuoteRequest* this);
HashMap* QuoteRequest_toHashMap(QuoteRequest* this);
void QuoteRequest_setUserName(QuoteRequest* this, const char* value);
void QuoteRequest_setProjectInfo(QuoteRequest* this, const char* value);
void QuoteRequest_setUserComments(QuoteRequest* this, const char* value);
void QuoteRequest_setBudget(QuoteRequest* this, const char* value);
void QuoteRequest_setTimeFrame(QuoteRequest* this, const char* value);
void QuoteRequest_setComments(QuoteRequest* this, const char* value);
const char* QuoteRequest_getUserName(QuoteRequest* this);
const char* QuoteRequest_getProjectInfo(QuoteRequest* this);
const char* QuoteRequest_getUserComments(QuoteRequest* this);
const char* QuoteRequest_getBudget(QuoteRequest* this);
const char* QuoteRequest_getTimeFrame(QuoteRequest* this);
const char* QuoteRequest_getComments(QuoteRequest* this);

static void QuoteRequest_initFields(QuoteRequest* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->userName = nullptr;
    this->projectInfo = nullptr;
    this->userComments = nullptr;
    this->budget = nullptr;
    this->timeFrame = nullptr;
    this->comments = nullptr;
}


void QuoteRequest_init(QuoteRequest* this, const char* userName, HttpServletRequest* request) {
    QuoteRequest_initFields(this);
        QuoteRequestData* quoteRequestData = QuoteRequestData_getInstance();
        this->id = QuoteRequestIdGenerator_getNext(QuoteRequestIdGenerator_new());
        QuoteRequest_setUserName(this, userName);
        QuoteRequest_setProjectInfo(this, ((const char*) HttpServletRequest_getParameter(request, quoteRequestData->PROJECT_INFO)));
        QuoteRequest_setUserComments(this, ((const char*) HttpServletRequest_getParameter(request, quoteRequestData->CUSTOMER_COMMENTS)));
        QuoteRequest_setBudget(this, ((const char*) HttpServletRequest_getParameter(request, quoteRequestData->BUDGET)));
        QuoteRequest_setTimeFrame(this, ((const char*) HttpServletRequest_getParameter(request, quoteRequestData->TIMEFRAME)));
        QuoteRequest_setComments(this, ((const char*) HttpServletRequest_getParameter(request, quoteRequestData->COMMENTS)));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
            LogUtil_putF(this->logUtil, java_concat("Created with: ", java_string_of(QuoteRequest_toHashMap(this))), this, this->commonStrings->CONSTRUCTOR);
        }
}

QuoteRequest* QuoteRequest_new(const char* userName, HttpServletRequest* request) {
    QuoteRequest* this = calloc(1, sizeof(QuoteRequest));
    QuoteRequest_init(this, userName, request);
    return this;
}


void QuoteRequest_init1(QuoteRequest* this, HashMap* hashMap) {
    QuoteRequest_initFields(this);
        QuoteRequestData* quoteRequestData = QuoteRequestData_getInstance();
        this->id = ((const char*) HashMap_get(hashMap, quoteRequestData->ID));
        QuoteRequest_setUserName(this, ((const char*) HashMap_get(hashMap, UserData_USERNAME)));
        QuoteRequest_setProjectInfo(this, ((const char*) HashMap_get(hashMap, quoteRequestData->PROJECT_INFO)));
        QuoteRequest_setUserComments(this, ((const char*) HashMap_get(hashMap, quoteRequestData->CUSTOMER_COMMENTS)));
        QuoteRequest_setBudget(this, ((const char*) HashMap_get(hashMap, quoteRequestData->BUDGET)));
        QuoteRequest_setTimeFrame(this, ((const char*) HashMap_get(hashMap, quoteRequestData->TIMEFRAME)));
        QuoteRequest_setComments(this, ((const char*) HashMap_get(hashMap, quoteRequestData->COMMENTS)));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
            LogUtil_putF(this->logUtil, java_concat("Created with: ", java_string_of(QuoteRequest_toHashMap(this))), this, this->commonStrings->CONSTRUCTOR);
        }
}

QuoteRequest* QuoteRequest_new1(HashMap* hashMap) {
    QuoteRequest* this = calloc(1, sizeof(QuoteRequest));
    QuoteRequest_init1(this, hashMap);
    return this;
}


bool QuoteRequest_isValid(QuoteRequest* this) {
        JAVA_TRY {
            bool valid = true;
            if (this->userName == nullptr || ((int32_t) strlen(this->userName)) < 4 || ((int32_t) strlen(this->userName)) > 250) {
                valid = false;
            }
            if (this->projectInfo == nullptr || ((int32_t) strlen(this->projectInfo)) < 0 || ((int32_t) strlen(this->projectInfo)) > AbSqlData_MAXBLOB) {
                valid = false;
            }
            if (this->userComments == nullptr || ((int32_t) strlen(this->userComments)) < 0 || ((int32_t) strlen(this->userComments)) > AbSqlData_MAXBLOB) {
                valid = false;
            }
            if (this->budget == nullptr || ((int32_t) strlen(this->budget)) < 0 || ((int32_t) strlen(this->budget)) > AbSqlData_MAXBLOB) {
                valid = false;
            }
            if (this->timeFrame == nullptr || ((int32_t) strlen(this->timeFrame)) < 0 || ((int32_t) strlen(this->timeFrame)) > AbSqlData_MAXBLOB) {
                valid = false;
            }
            if (this->comments == nullptr || ((int32_t) strlen(this->comments)) < 0 || ((int32_t) strlen(this->comments)) > AbSqlData_MAXBLOB) {
                valid = false;
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* QuoteRequest_validationInfo(QuoteRequest* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (this->userName == nullptr || ((int32_t) strlen(this->userName)) < 4 || ((int32_t) strlen(this->userName)) > 250) {
                StringMaker_append(stringBuffer, "Please enter a User Name with more than 4 characters.<br>");
            }
            if (this->projectInfo == nullptr || ((int32_t) strlen(this->projectInfo)) < 0 || ((int32_t) strlen(this->projectInfo)) > AbSqlData_MAXBLOB) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Please enter Project Info with less than ", java_string_of(AbSqlData_MAXBLOB)), " characters.<br>"));
            }
            if (this->userComments == nullptr || ((int32_t) strlen(this->userComments)) < 0 || ((int32_t) strlen(this->userComments)) > AbSqlData_MAXBLOB) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Please enter User Comments with less than ", java_string_of(AbSqlData_MAXBLOB)), " characters.<br>"));
            }
            if (this->budget == nullptr || ((int32_t) strlen(this->budget)) < 0 || ((int32_t) strlen(this->budget)) > AbSqlData_MAXBLOB) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Please enter Budget with less than ", java_string_of(AbSqlData_MAXBLOB)), " characters.<br>"));
            }
            if (this->timeFrame == nullptr || ((int32_t) strlen(this->timeFrame)) < 0 || ((int32_t) strlen(this->timeFrame)) > AbSqlData_MAXBLOB) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Please enter time frame with less than ", java_string_of(AbSqlData_MAXBLOB)), " characters.<br>"));
            }
            if (this->comments == nullptr || ((int32_t) strlen(this->comments)) < 0 || ((int32_t) strlen(this->comments)) > AbSqlData_MAXBLOB) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Please enter comments with less than ", java_string_of(AbSqlData_MAXBLOB)), " characters.<br>"));
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


BasicArrayList* QuoteRequest_toVector(QuoteRequest* this) {
        BasicArrayList* values = BasicArrayListD_new();
        BasicArrayList_add(values, this->id);
        BasicArrayList_add(values, this->userName);
        BasicArrayList_add(values, this->projectInfo);
        BasicArrayList_add(values, this->userComments);
        BasicArrayList_add(values, this->budget);
        BasicArrayList_add(values, this->timeFrame);
        BasicArrayList_add(values, this->comments);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        BasicArrayList_add(values, time);
        BasicArrayList_add(values, time);
        return values;
}


HashMap* QuoteRequest_toHashMap(QuoteRequest* this) {
        QuoteRequestData* quoteRequestData = QuoteRequestData_getInstance();
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList_put(values, UserData_USERNAME, this->userName);
        BasicArrayList_put(values, quoteRequestData->PROJECT_INFO, this->projectInfo);
        BasicArrayList_put(values, quoteRequestData->CUSTOMER_COMMENTS, this->userComments);
        BasicArrayList_put(values, quoteRequestData->BUDGET, this->budget);
        BasicArrayList_put(values, quoteRequestData->TIMEFRAME, this->timeFrame);
        BasicArrayList_put(values, quoteRequestData->COMMENTS, this->comments);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        BasicArrayList_put(values, EntryData_getInstance()->LASTMODIFIED, time);
        return values;
}


void QuoteRequest_setUserName(QuoteRequest* this, const char* value) {
        this->userName = value;
}


void QuoteRequest_setProjectInfo(QuoteRequest* this, const char* value) {
        this->projectInfo = value;
}


void QuoteRequest_setUserComments(QuoteRequest* this, const char* value) {
        this->userComments = value;
}


void QuoteRequest_setBudget(QuoteRequest* this, const char* value) {
        this->budget = value;
}


void QuoteRequest_setTimeFrame(QuoteRequest* this, const char* value) {
        this->timeFrame = value;
}


void QuoteRequest_setComments(QuoteRequest* this, const char* value) {
        this->comments = value;
        StringUtil* stringUtil = StringUtil_getInstance();
        if (this->comments == nullptr) {
            this->comments = stringUtil->EMPTY_STRING;
        }
}


const char* QuoteRequest_getUserName(QuoteRequest* this) {
        return this->userName;
}


const char* QuoteRequest_getProjectInfo(QuoteRequest* this) {
        return this->projectInfo;
}


const char* QuoteRequest_getUserComments(QuoteRequest* this) {
        return this->userComments;
}


const char* QuoteRequest_getBudget(QuoteRequest* this) {
        return this->budget;
}


const char* QuoteRequest_getTimeFrame(QuoteRequest* this) {
        return this->timeFrame;
}


const char* QuoteRequest_getComments(QuoteRequest* this) {
        return this->comments;
}

