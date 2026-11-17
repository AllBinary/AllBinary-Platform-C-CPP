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
// package org.allbinary.data.tree.category

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/data/tree/category/CategoryModifierTreeInterface.h"

typedef struct CategoryLoaderInterface CategoryLoaderInterface;
struct CategoryLoaderInterface {
    Document* (*getDoc)(void* this, CategoryInterface* categoryInterface);
    CategoryInterface* (*get)(void* this, CategoryInterface* categoryInterface);
    CategoryInterface* (*getAll)(void* this, CategoryInterface* categoryInterface);
};


