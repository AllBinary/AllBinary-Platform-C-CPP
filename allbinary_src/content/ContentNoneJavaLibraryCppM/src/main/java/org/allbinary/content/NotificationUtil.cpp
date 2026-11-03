
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
        



        #ifndef ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_CPP
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/content/NotificationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Command.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NotificationUtil::NotificationUtil() {
        }
        auto NotificationUtil::SINGLETON_owner() -> NotificationUtil* { static std::unique_ptr<NotificationUtil> value(new NotificationUtil()); return value.get(); }
NotificationUtil* NotificationUtil::SINGLETON = NotificationUtil::SINGLETON_owner();

    auto NotificationUtil::getInstance() -> NotificationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NotificationUtil::SINGLETON;
    
}


    auto NotificationUtil::notify(Command* command, std::string resource, std::string message) -> void{
}




        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_CPP
