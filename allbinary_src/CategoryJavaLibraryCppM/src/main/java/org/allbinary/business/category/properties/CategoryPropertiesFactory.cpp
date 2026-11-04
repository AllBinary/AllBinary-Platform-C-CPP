
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/properties/CategoryPropertiesFactory.h"
        

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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#include "org/allbinary/business/category/properties/CategoryProperties.h"


CategoryPropertiesFactory::CategoryPropertiesFactory(std::string name) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new CategoryProperties(name));
    
}


CategoryPropertiesFactory::CategoryPropertiesFactory(Node* node) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new CategoryProperties(node));
    
}


CategoryPropertiesFactory::CategoryPropertiesFactory(HashMap<Object*, Object*>* categoryPropertiesHashMap) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new CategoryProperties(categoryPropertiesHashMap));
    
}


    auto CategoryPropertiesFactory::getInstance() -> CategoryPropertiesInterface*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryPropertiesInterface*>(this->categoryPropertiesInterface);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIESFACTORY_CPP
