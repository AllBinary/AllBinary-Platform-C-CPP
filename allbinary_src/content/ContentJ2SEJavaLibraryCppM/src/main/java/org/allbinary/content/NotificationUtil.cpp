
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
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/content/Context.h"
#include "org/allbinary/content/NotificationManager.h"
#include "org/allbinary/content/CommandUriAction.h"
#include "org/allbinary/content/Intent.h"
#include "org/allbinary/content/Notification.h"
#include "org/allbinary/content/PendingIntent.h"


NotificationUtil::NotificationUtil() : notificationManager(dynamic_cast<NotificationManager*>(ResourceUtil::getInstance()->getContext()->getSystemService(Context::NOTIFICATION_SERVICE))) {
        }
        auto NotificationUtil::SINGLETON_owner() -> NotificationUtil* { static std::unique_ptr<NotificationUtil> value(new NotificationUtil()); return value.get(); }
NotificationUtil* NotificationUtil::SINGLETON = NotificationUtil::SINGLETON_owner();

    auto NotificationUtil::getInstance() -> NotificationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NotificationUtil::SINGLETON;
    
}


    auto NotificationUtil::notify(Command* command, std::string resource, std::string message) -> void{

    Context* context = ResourceUtil::getInstance()->getContext();;
    

    Intent* intent = CommandUriAction::getInstance()->getIntent(command);;
    

    int32_t integer = ResourceUtil::getInstance()->getResourceId(resource);;
    

    Notification* notification = new Notification(integer, message, System.currentTimeMillis());;
    

    PendingIntent* pendingIntent = PendingIntent::getActivity(context, 0, intent, 0);;
    
notification->setLatestEventInfo(context, command->getLabel(), message, pendingIntent);
    
this->notificationManager->notify(TsUtil::getInstance()->hashCode(command), notification);
    
}




        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_CPP
