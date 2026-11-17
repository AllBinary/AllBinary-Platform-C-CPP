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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"

typedef struct FileDomDataModel FileDomDataModel;
struct FileDomDataModel {
    DomNodeInterface DomNodeInterface_interface;
    AbFile* file;
};


FileDomDataModel* FileDomDataModel_new(AbFile* file);

void FileDomDataModel_init(FileDomDataModel* this, AbFile* file);
Node* FileDomDataModel_toXmlNode(FileDomDataModel* this, Document* document);

static void FileDomDataModel_initFields(FileDomDataModel* this) {
    
}


void FileDomDataModel_init(FileDomDataModel* this, AbFile* file) {
    FileDomDataModel_initFields(this);
        this->file = file;
}

FileDomDataModel* FileDomDataModel_new(AbFile* file) {
    FileDomDataModel* this = calloc(1, sizeof(FileDomDataModel));
    FileDomDataModel_init(this, file);
    return this;
}


// throws Exception
Node* FileDomDataModel_toXmlNode(FileDomDataModel* this, Document* document) {
        TableMappingInterface* tableMappingInterface = ((TableMappingInterface*) FileTableMapping_new(this->file));
        HashMap* hashMap = TableMappingInterface_toHashMap(tableMappingInterface);
        return ModDomHelper_createNodeWithValueNodes(document, "file", hashMap);
}

