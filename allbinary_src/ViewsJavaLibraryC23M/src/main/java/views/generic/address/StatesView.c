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
// package views.generic.address

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/LineReader.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct StatesView StatesView;
struct StatesView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


StatesView* StatesView_new(void);

void StatesView_init(StatesView* this);
Node* StatesView_toXmlNode(StatesView* this, Document* document);

static void StatesView_initFields(StatesView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void StatesView_init(StatesView* this) {
    StatesView_initFields(this);
}

StatesView* StatesView_new(void) {
    StatesView* this = calloc(1, sizeof(StatesView));
    StatesView_init(this);
    return this;
}


Node* StatesView_toXmlNode(StatesView* this, Document* document) {
        JAVA_TRY {
            Node* node = Document_createElement(document, StreetAddressData_STATES);
            const char* statesFile = java_concat(java_string_of(JAVA_CALL(_URLGLOBALS, getMainPath) + JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->LINEDATAPATH), "states.txt");
            LineReader* lineReader = LineReader_new(statesFile);
            while (LineReader_hasNext(lineReader)) {
                const char* option = LineReader_next(lineReader);
                Node_appendChild(node, ModDomHelper_createNameValueNodes(document, StreetAddressData_STATE, option));
            }
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

