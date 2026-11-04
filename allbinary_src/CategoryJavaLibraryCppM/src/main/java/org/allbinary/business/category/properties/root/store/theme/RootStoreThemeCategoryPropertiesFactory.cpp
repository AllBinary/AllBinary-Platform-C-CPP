
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_THEME_ROOTSTORETHEMECATEGORYPROPERTIESFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_THEME_ROOTSTORETHEMECATEGORYPROPERTIESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/properties/root/store/theme/RootStoreThemeCategoryPropertiesFactory.h"
        

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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/root/store/theme/RootStoreThemeCategoryProperties.h"


RootStoreThemeCategoryPropertiesFactory::RootStoreThemeCategoryPropertiesFactory(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new RootStoreThemeCategoryProperties(transformInfoInterface));
    
}


RootStoreThemeCategoryPropertiesFactory::RootStoreThemeCategoryPropertiesFactory(TransformInfoInterface* transformInfoInterface, AbPath* abPath) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new RootStoreThemeCategoryProperties(transformInfoInterface, abPath));
    
}


RootStoreThemeCategoryPropertiesFactory::RootStoreThemeCategoryPropertiesFactory(TransformInfoInterface* transformInfoInterface, Node* node) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new RootStoreThemeCategoryProperties(transformInfoInterface, node));
    
}


RootStoreThemeCategoryPropertiesFactory::RootStoreThemeCategoryPropertiesFactory(TransformInfoInterface* transformInfoInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap) : logUtil(LogUtil::getInstance()){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(new RootStoreThemeCategoryProperties(transformInfoInterface, categoryPropertiesHashMap));
    
}


    auto RootStoreThemeCategoryPropertiesFactory::getInstance() -> CategoryPropertiesInterface*{

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




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_THEME_ROOTSTORETHEMECATEGORYPROPERTIESFACTORY_CPP
