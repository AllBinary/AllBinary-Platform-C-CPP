
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
        



        #ifndef ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
class Command;
class ResourceUtil;
class TsUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Context;
class NotificationManager;
class CommandUriAction;
class Intent;
class Notification;
class PendingIntent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NotificationUtil
            : public virtual Object
         {

    private: static NotificationUtil* SINGLETON_owner();
    private: static NotificationUtil* SINGLETON;

    public: static NotificationUtil* getInstance();


            
    public: NotificationUtil();
        
    private: NotificationManager* notificationManager;

    public: void notify(Command* command, std::string resource, std::string message);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include("org/allbinary/content/Context.h")
#include "org/allbinary/content/Context.h"
#endif
#if __has_include("org/allbinary/content/NotificationManager.h")
#include "org/allbinary/content/NotificationManager.h"
#endif
#if __has_include("org/allbinary/content/CommandUriAction.h")
#include "org/allbinary/content/CommandUriAction.h"
#endif
#if __has_include("org/allbinary/content/Intent.h")
#include "org/allbinary/content/Intent.h"
#endif
#if __has_include("org/allbinary/content/Notification.h")
#include "org/allbinary/content/Notification.h"
#endif
#if __has_include("org/allbinary/content/PendingIntent.h")
#include "org/allbinary/content/PendingIntent.h"
#endif

        #endif
    
