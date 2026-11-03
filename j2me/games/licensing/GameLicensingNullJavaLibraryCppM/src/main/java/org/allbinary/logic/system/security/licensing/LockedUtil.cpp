
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/LockedUtilInterface.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"


LockedUtil::LockedUtil() {
        }
        auto LockedUtil::instance_owner() -> LockedUtil* { static std::unique_ptr<LockedUtil> value(new LockedUtil()); return value.get(); }
LockedUtil* LockedUtil::instance = LockedUtil::instance_owner();

    auto LockedUtil::getInstance() -> LockedUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LockedUtil::instance;
    
}


    auto LockedUtil::isLocked() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto LockedUtil::isLockedFeature(LockableFeature* lockableFeatrue) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LOCKEDUTIL_CPP
