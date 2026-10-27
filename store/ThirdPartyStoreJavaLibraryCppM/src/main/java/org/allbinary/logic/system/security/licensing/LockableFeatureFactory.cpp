
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKABLEFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKABLEFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LockableFeatureFactory::LockableFeatureFactory() : list(new BasicArrayListD()) {
        }
        auto LockableFeatureFactory::instance_owner() -> LockableFeatureFactory* { static std::unique_ptr<LockableFeatureFactory> value(new LockableFeatureFactory()); return value.get(); }
LockableFeatureFactory* LockableFeatureFactory::instance = LockableFeatureFactory::instance_owner();

    auto LockableFeatureFactory::getInstance() -> LockableFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LockableFeatureFactory::instance;
    
}


    auto LockableFeatureFactory::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKABLEFEATUREFACTORY_CPP
