
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

            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <android/app/Notification.h>

      
#include <android/app/Notification/Builder.h>

      
#include <android/app/PendingIntent.h>

      
#include <android/content/Context.h>

      
#include <android/os/Parcelable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NotificationBuilder.h"

class NotificationBuilderAPI23: public NotificationBuilder {

    public: Parcelable build(Context context, Command command, std::string message, Integer integer, PendingIntent pendingIntent);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDERAPI23_H
