
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERFACTORY_H
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryLoader.h"
#include "CategoryLoaderInterface.h"

class CategoryLoaderFactory
            : public Object
         {

    public: static CategoryLoaderInterface getInstance(CategoryFactoryInterface categoryFactoryInterface);

private: CategoryLoaderFactory();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERFACTORY_H
