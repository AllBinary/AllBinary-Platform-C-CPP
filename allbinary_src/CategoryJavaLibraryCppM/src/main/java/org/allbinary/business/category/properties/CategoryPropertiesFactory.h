
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class LogUtil;
class CommonStrings;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
class CategoryPropertiesInterface;
class CategoryProperties;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CategoryPropertiesFactory
            : public virtual Object
        , public virtual CategoryPropertiesFactoryInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CategoryPropertiesInterface* categoryPropertiesInterface;

public: CategoryPropertiesFactory(std::string name);

public: CategoryPropertiesFactory(Node* node);

public: CategoryPropertiesFactory(HashMap<Object*, Object*>* categoryPropertiesHashMap);

    public: CategoryPropertiesInterface* getInstance();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h")
#include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#endif
#if __has_include("org/allbinary/business/category/properties/CategoryPropertiesInterface.h")
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#endif
#if __has_include("org/allbinary/business/category/properties/CategoryProperties.h")
#include "org/allbinary/business/category/properties/CategoryProperties.h"
#endif

        #endif
    
