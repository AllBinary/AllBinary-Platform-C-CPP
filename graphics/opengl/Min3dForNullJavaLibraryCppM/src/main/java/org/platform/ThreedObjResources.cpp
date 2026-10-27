
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_PLATFORM_THREEDOBJRESOURCES_CPP
        #define ORG_PLATFORM_THREEDOBJRESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/platform/ThreedObjResources.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ThreedObjResources::ThreedObjResources() : hashtable(StdUtil::getInstance()->createHashtable()) {
        }
        auto ThreedObjResources::instance_owner() -> ThreedObjResources* { static std::unique_ptr<ThreedObjResources> value(new ThreedObjResources()); return value.get(); }
ThreedObjResources* ThreedObjResources::instance = ThreedObjResources::instance_owner();

    auto ThreedObjResources::getInstance() -> ThreedObjResources*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThreedObjResources::instance;
    
}


    auto ThreedObjResources::get(std::string resourceName) -> std::string{

    std::string resourceName2 = this->hashtable->get(resourceName);;
    

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resourceName2;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resourceName;
    
}




        #endif //ORG_PLATFORM_THREEDOBJRESOURCES_CPP
