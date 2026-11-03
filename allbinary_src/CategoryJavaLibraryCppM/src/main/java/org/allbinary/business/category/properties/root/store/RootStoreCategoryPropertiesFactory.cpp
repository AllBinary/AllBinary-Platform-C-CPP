
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIESFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/properties/root/store/RootStoreCategoryPropertiesFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/root/store/RootStoreCategoryProperties.h"


RootStoreCategoryPropertiesFactory::RootStoreCategoryPropertiesFactory(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new RootStoreCategoryProperties(transformInfoInterface));
    
}


RootStoreCategoryPropertiesFactory::RootStoreCategoryPropertiesFactory(TransformInfoInterface* transformInfoInterface, AbPath* abPath) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new RootStoreCategoryProperties(transformInfoInterface, abPath));
    
}


RootStoreCategoryPropertiesFactory::RootStoreCategoryPropertiesFactory(TransformInfoInterface* transformInfoInterface, Node* node) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new RootStoreCategoryProperties(transformInfoInterface, node));
    
}


RootStoreCategoryPropertiesFactory::RootStoreCategoryPropertiesFactory(TransformInfoInterface* transformInfoInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new RootStoreCategoryProperties(transformInfoInterface, categoryPropertiesHashMap));
    
}


    auto RootStoreCategoryPropertiesFactory::getInstance() -> CategoryPropertiesInterface*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryPropertiesInterface*>(this->categoryPropertiesInterface);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIESFACTORY_CPP
