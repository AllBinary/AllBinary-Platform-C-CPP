
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CategoryFactoryInterface;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CategoryLoader;
class CategoryLoaderInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryLoaderFactory
            : public virtual Object
         {

    public: static CategoryLoaderInterface* getInstance(CategoryFactoryInterface* categoryFactoryInterface);

private: CategoryLoaderFactory();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/business/category/CategoryFactoryInterface.h>)
#include <org/allbinary/business/category/CategoryFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/data/tree/category/CategoryLoader.h")
#include "org/allbinary/data/tree/category/CategoryLoader.h"
#endif
#if __has_include("org/allbinary/data/tree/category/CategoryLoaderInterface.h")
#include "org/allbinary/data/tree/category/CategoryLoaderInterface.h"
#endif

        #endif
    
