
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
        



        #ifndef ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_H
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
class Command;
class Notification;
class Builder;
class PendingIntent;
class Context;
class Parcelable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/content/NotificationBuilder.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NotificationBuilderAPI23: public NotificationBuilder {


            
    public: NotificationBuilderAPI23();
        
    public: Parcelable* build(Context* context, Command* command, std::string message, int32_t integer, PendingIntent* pendingIntent);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_H_COMPLETE)
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<android/app/Notification.h>)
#include <android/app/Notification.h>
#endif
#if __has_include(<android/app/Notification/Builder.h>)
#include <android/app/Notification/Builder.h>
#endif
#if __has_include(<android/app/PendingIntent.h>)
#include <android/app/PendingIntent.h>
#endif
#if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<android/os/Parcelable.h>)
#include <android/os/Parcelable.h>
#endif
#if __has_include("org/allbinary/content/NotificationBuilder.h")
#include "org/allbinary/content/NotificationBuilder.h"
#endif

        #endif
    
