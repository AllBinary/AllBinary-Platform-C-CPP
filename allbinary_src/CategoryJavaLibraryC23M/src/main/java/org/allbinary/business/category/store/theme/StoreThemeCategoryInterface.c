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
// package org.allbinary.business.category.store.theme

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/visual/theme/ThemeValidation.h"
#include "org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h"

typedef struct StoreThemeCategoryInterface StoreThemeCategoryInterface;
struct StoreThemeCategoryInterface {
    void (*addTheme)(void* this, ThemeValidation* themeValidation);
    BasicArrayList* (*getThemes)(void* this);
};


