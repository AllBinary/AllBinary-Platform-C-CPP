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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/communication/http/request/RequestMapInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "tags/HelperTag.h"

typedef struct MultipartRequestParamForwardHelper MultipartRequestParamForwardHelper;
struct MultipartRequestParamForwardHelper {
    LogUtil* logUtil;
    PageContext* pageContext;
    RequestMapInterface* requestMapInterface;
    const char* page;
    const char* command;
    BasicArrayList* paramVector;
};


MultipartRequestParamForwardHelper* MultipartRequestParamForwardHelper_new(HelperTag* parentHelperTag, const char* page, const char* command, BasicArrayList* paramVector, PageContext* pageContext);

void MultipartRequestParamForwardHelper_init(MultipartRequestParamForwardHelper* this, HelperTag* parentHelperTag, const char* page, const char* command, BasicArrayList* paramVector, PageContext* pageContext);
void MultipartRequestParamForwardHelper_forward(MultipartRequestParamForwardHelper* this);
static const char* MultipartRequestParamForwardHelper_getParams(MultipartRequestParamForwardHelper* this);
static bool MultipartRequestParamForwardHelper_shouldForward(MultipartRequestParamForwardHelper* this);

static void MultipartRequestParamForwardHelper_initFields(MultipartRequestParamForwardHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
}


void MultipartRequestParamForwardHelper_init(MultipartRequestParamForwardHelper* this, HelperTag* parentHelperTag, const char* page, const char* command, BasicArrayList* paramVector, PageContext* pageContext) {
    MultipartRequestParamForwardHelper_initFields(this);
        this->pageContext = pageContext;
        this->page = page;
        this->command = command;
        this->paramVector = paramVector;
        this->requestMapInterface = InventoryItemViewParentTagHelper_getRequestMapInterface(InventoryItemViewParentTagHelper_getInstance(), parentHelperTag);
}

MultipartRequestParamForwardHelper* MultipartRequestParamForwardHelper_new(HelperTag* parentHelperTag, const char* page, const char* command, BasicArrayList* paramVector, PageContext* pageContext) {
    MultipartRequestParamForwardHelper* this = calloc(1, sizeof(MultipartRequestParamForwardHelper));
    MultipartRequestParamForwardHelper_init(this, parentHelperTag, page, command, paramVector, pageContext);
    return this;
}


// throws Exception
void MultipartRequestParamForwardHelper_forward(MultipartRequestParamForwardHelper* this) {
        JAVA_TRY {
            if (MultipartRequestParamForwardHelper_shouldForward(this)) {
                const char* params = MultipartRequestParamForwardHelper_getParams(this);
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, this->page);
                StringMaker_append(stringBuffer, params);
                PageContext_forward(this->pageContext, StringMaker_toString(stringBuffer));
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "forward()", e);
            }
        } JAVA_END_TRY;
}


static const char* MultipartRequestParamForwardHelper_getParams(MultipartRequestParamForwardHelper* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        const char* AMP = commonSeps->AMPERSAND;
        const char* QUESTION = commonSeps->QUESTION;
        const char* EQUALS = commonSeps->EQUALS;
        HashMap* hashMap = RequestMapInterface_getRequestHashMap(this->requestMapInterface);
        StringMaker* stringBuffer = StringMaker_new();
        int32_t size = BasicArrayList_size(this->paramVector);
        for (int32_t index = 0; index < size; index++) {
            const char* key = ((const char*) BasicArrayList_get(this->paramVector, index));
            const char* value = ((const char*) HashMap_get(hashMap, key));
            if (index != 0) {
                StringMaker_append(stringBuffer, AMP);
            } else {
                StringMaker_append(stringBuffer, QUESTION);
            }
            StringMaker_append(stringBuffer, key);
            StringMaker_append(stringBuffer, EQUALS);
            StringMaker_append(stringBuffer, value);
        }
        return StringMaker_toString(stringBuffer);
}


static bool MultipartRequestParamForwardHelper_shouldForward(MultipartRequestParamForwardHelper* this) {
        HashMap* hashMap = RequestMapInterface_getRequestHashMap(this->requestMapInterface);
        const char* requestCommand = ((const char*) HashMap_get(hashMap, _GLOBALS2->ADMINCOMMAND));
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->command) || (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), requestCommand) && strcmp(this->command, requestCommand) == 0)) {
            return true;
        }
        return false;
}

