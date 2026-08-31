
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_THEME_ROOTSTORETHEMECATEGORYPROPERTIES_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_THEME_ROOTSTORETHEMECATEGORYPROPERTIES_H

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/category/properties/root/store/RootStoreCategoryProperties.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RootStoreThemeCategoryProperties: public RootStoreCategoryProperties {
        

public constructor (TransformInfoInterface transformInfoInterface);

public constructor (TransformInfoInterface transformInfoInterface, AbPath abPath);

public constructor (TransformInfoInterface transformInfoInterface, Node node);

public constructor (TransformInfoInterface transformInfoInterface, HashMap<any, any> categoryPropertiesHashMap);

                //@Throws(Exception.constructor)
            
    public initPath();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_THEME_ROOTSTORETHEMECATEGORYPROPERTIES_H
