
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#include "org/allbinary/business/category/properties/CategoryProperties.h"

class CategoryPropertiesFactory
            : public Object
        , public CategoryPropertiesFactoryInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CategoryPropertiesInterface* categoryPropertiesInterface;

public: CategoryPropertiesFactory(std::string name);

public: CategoryPropertiesFactory(Node* node);

public: CategoryPropertiesFactory(HashMap<Object*, Object*>* categoryPropertiesHashMap);

    public: CategoryPropertiesInterface* getInstance();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_H
