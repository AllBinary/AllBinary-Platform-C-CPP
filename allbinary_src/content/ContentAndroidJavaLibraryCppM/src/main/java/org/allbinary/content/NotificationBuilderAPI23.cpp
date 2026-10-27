
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
        



        #ifndef ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_CPP
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/content/NotificationBuilderAPI23.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <android/app/Notification.h>

      
#include <android/app/Notification/Builder.h>

      
#include <android/app/PendingIntent.h>

      
#include <android/content/Context.h>

      
#include <android/os/Parcelable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/content/NotificationBuilder.h"


NotificationBuilderAPI23::NotificationBuilderAPI23() {
        }
        
    auto NotificationBuilderAPI23::build(Context* context, Command* command, std::string message, int32_t integer, PendingIntent* pendingIntent) -> Parcelable*{

    Notification* notification = (new Builder(context))->setSmallIcon(integer.intValue())->setTicker(message)->setWhen(System.currentTimeMillis())->setContentTitle(command->getLabel())->setContentText(message)->setContentIntent(pendingIntent)->build();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return notification;
    
}




        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_CPP
