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
// package taghelpers.transform.info

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
#include "admin/taghelpers/ModifyTable.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreNoManipulation.h"

typedef struct TransformInfoRequestHelper TransformInfoRequestHelper;
struct TransformInfoRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    TransformInfoHttpInterface* transformInfoInterface;
};


TransformInfoRequestHelper* TransformInfoRequestHelper_new(HashMap* propertiesHashMap, PageContext* pageContext);

void TransformInfoRequestHelper_init(TransformInfoRequestHelper* this, HashMap* propertiesHashMap, PageContext* pageContext);
const char* TransformInfoRequestHelper_update(TransformInfoRequestHelper* this);
const char* TransformInfoRequestHelper_insert(TransformInfoRequestHelper* this);
const char* TransformInfoRequestHelper_delete(TransformInfoRequestHelper* this);

static void TransformInfoRequestHelper_initFields(TransformInfoRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void TransformInfoRequestHelper_init(TransformInfoRequestHelper* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    TransformInfoRequestHelper_initFields(this);
        this->transformInfoInterface = TransformInfoHttpStoreNoManipulation_new(propertiesHashMap, pageContext);
}

TransformInfoRequestHelper* TransformInfoRequestHelper_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    TransformInfoRequestHelper* this = calloc(1, sizeof(TransformInfoRequestHelper));
    TransformInfoRequestHelper_init(this, propertiesHashMap, pageContext);
    return this;
}


const char* TransformInfoRequestHelper_update(TransformInfoRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Updated Successfully";
            HashMap* hashMapData = TransformInfoHttpInterface_toHashMap(this->transformInfoInterface);
            TransformInfoEntityBuilder_update(TransformInfoEntityBuilder_getInstance(), hashMapData);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update storefronts table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* TransformInfoRequestHelper_insert(TransformInfoRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Added TransformInfo Successfully";
            BasicArrayList* values = TransformInfoHttpInterface_toVector(this->transformInfoInterface);
            TransformInfoEntityBuilder_insert(TransformInfoEntityBuilder_getInstance(), values);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add storefronts table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insert()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* TransformInfoRequestHelper_delete(TransformInfoRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Delete Successfully";
            TransformInfoEntityBuilder_delete(TransformInfoEntityBuilder_getInstance(), ((const char*) TransformInfoHttpInterface_getKey(this->transformInfoInterface)));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to delete storefronts table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
            }
            return error;
        } JAVA_END_TRY;
}

