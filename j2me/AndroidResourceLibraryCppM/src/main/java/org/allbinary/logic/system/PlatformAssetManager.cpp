
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/PlatformAssetManager.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PlatformAssetManager::PlatformAssetManager() {
        }
        auto PlatformAssetManager::instance_owner() -> PlatformAssetManager* { static std::unique_ptr<PlatformAssetManager> value(new PlatformAssetManager()); return value.get(); }
PlatformAssetManager* PlatformAssetManager::instance = PlatformAssetManager::instance_owner();

    auto PlatformAssetManager::getInstance() -> PlatformAssetManager*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlatformAssetManager::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto PlatformAssetManager::getResourceAsStream(std::string resource) -> InputStream*{

    ResourceUtil* resourceUtil = ResourceUtil::getInstance();;
    

    InputStream* inputStream = resourceUtil->getResourceAsStream(resource);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_CPP
