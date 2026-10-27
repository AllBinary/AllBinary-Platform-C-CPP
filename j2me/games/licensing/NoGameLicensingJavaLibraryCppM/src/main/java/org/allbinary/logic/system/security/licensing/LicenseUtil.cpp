
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/LicenseUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LicenseUtil::LicenseUtil() {
        }
        auto LicenseUtil::instance_owner() -> LicenseUtil* { static std::unique_ptr<LicenseUtil> value(new LicenseUtil()); return value.get(); }
LicenseUtil* LicenseUtil::instance = LicenseUtil::instance_owner();

    auto LicenseUtil::getInstance() -> LicenseUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseUtil::instance;
    
}


    auto LicenseUtil::init() -> void{
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseUtil::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LicenseUtil::setRunning(bool running) -> void{
}


    auto LicenseUtil::shouldWait(CommandListener* commandListener) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isRunning();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSEUTIL_CPP
