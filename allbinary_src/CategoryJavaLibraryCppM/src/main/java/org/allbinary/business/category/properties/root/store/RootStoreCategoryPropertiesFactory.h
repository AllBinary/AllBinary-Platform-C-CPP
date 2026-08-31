
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIESFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIESFACTORY_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RootStoreCategoryProperties.h"

class RootStoreCategoryPropertiesFactory
            : public Object
        : public CategoryPropertiesFactoryInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: categoryPropertiesInterface: CategoryPropertiesInterface;

public constructor (TransformInfoInterface transformInfoInterface);

public constructor (TransformInfoInterface transformInfoInterface, AbPath abPath);

public constructor (TransformInfoInterface transformInfoInterface, Node node);

public constructor (TransformInfoInterface transformInfoInterface, HashMap<any, any> categoryPropertiesHashMap);

    public CategoryPropertiesInterface getInstance();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIESFACTORY_H
