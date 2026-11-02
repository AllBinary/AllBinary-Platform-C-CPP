
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
        



        #ifndef ADMIN_TAGHELPERS_STOREFRONTHELPER_CPP
        #define ADMIN_TAGHELPERS_STOREFRONTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/taghelpers/StoreFrontHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/TagHelper.h"


StoreFrontHelper::StoreFrontHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext){

    std::string storeName = JavaBoxes::unbox<std::string>(hashMap->get(StoreFrontData::getInstance()->NAME));;
    

                        if(true)
                        
                                    {
                                    this->storeFrontInterface= StoreFrontFactory::getInstance(storeName);
    
this->currentLocation= (new Replace(CommonSeps::getInstance()->SPACE, "%20"))->all(this->storeFrontInterface->getCurrentHostName() +this->storeFrontInterface->getCurrentHostNamePath());
    
this->currentHomeLocation= (new Replace(CommonSeps::getInstance()->SPACE, "%20"))->all(this->storeFrontInterface->getCurrentHomeHostName() +this->storeFrontInterface->getCurrentHomeHostNamePath());
    

                                    }
                                
                        else {
                            
    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->storeFrontInterface= new StoreFront();
    
this->currentLocation= stringUtil->EMPTY_STRING;
    
this->currentHomeLocation= stringUtil->EMPTY_STRING;
    

                        }
                            
}


    auto StoreFrontHelper::getCurrentLocation() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentLocation;
    
}


    auto StoreFrontHelper::getCurrentHomeLocation() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentHomeLocation;
    
}




        #endif //ADMIN_TAGHELPERS_STOREFRONTHELPER_CPP
