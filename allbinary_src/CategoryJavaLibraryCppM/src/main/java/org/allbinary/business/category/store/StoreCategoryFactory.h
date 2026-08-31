
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/category/Category.h>

      
#include <org/allbinary/business/category/CategoryAbstractFactory.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/root/store/RootStoreCategoryPropertiesFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreCategoryFactory: public CategoryAbstractFactory: public CategoryFactoryInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: transformInfoInterface: TransformInfoInterface;

public constructor (TransformInfoInterface transformInfoInterface);

    public CategoryInterface getRootInstance();

    public CategoryInterface getRootInstance(AbPath categoryPath);

    public CategoryInterface getRootInstanceFromNode(Node node);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_H
