
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
        
            #include "java/lang/Integer.h"
        
class Command;

class NotificationManager;
class PendingIntent;
class Context;
class Intent;
class AndroidInfoFactory;
class ResourceUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NotificationBuilder;
class NotificationBuilderAPI23;
class CommandUriAction;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NotificationUtil
            : public virtual Object
         {

    private: static NotificationUtil* SINGLETON_owner();
    private: static NotificationUtil* SINGLETON;

    public: static NotificationUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: NotificationManager* notificationManager;

    private: NotificationBuilder* notificationBuilder;

private: NotificationUtil();

    public: void notify(Command* command, std::string resource, std::string message);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif

#if __has_include(<android/app/NotificationManager.h>)
#include <android/app/NotificationManager.h>
#endif
#if __has_include(<android/app/PendingIntent.h>)
#include <android/app/PendingIntent.h>
#endif
#if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<android/content/Intent.h>)
#include <android/content/Intent.h>
#endif
#if __has_include(<org/allbinary/android/AndroidInfoFactory.h>)
#include <org/allbinary/android/AndroidInfoFactory.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/content/NotificationBuilder.h")
#include "org/allbinary/content/NotificationBuilder.h"
#endif
#if __has_include("org/allbinary/content/NotificationBuilderAPI23.h")
#include "org/allbinary/content/NotificationBuilderAPI23.h"
#endif
#if __has_include("org/allbinary/content/CommandUriAction.h")
#include "org/allbinary/content/CommandUriAction.h"
#endif

        #endif
    
