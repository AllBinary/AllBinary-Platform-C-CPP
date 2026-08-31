
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <android/app/Notification.h>

      
#include <android/app/NotificationManager.h>

      
#include <android/app/PendingIntent.h>

      
#include <android/content/Context.h>

      
#include <android/content/Intent.h>

      
#include <org/allbinary/android/AndroidInfoFactory.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NotificationBuilder.h"
#include "NotificationBuilderAPI23.h"
#include "CommandUriAction.h"

class NotificationUtil
            : public Object
         {
        

    private: static const SINGLETON: NotificationUtil = new NotificationUtil();

    public static NotificationUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: notificationManager: NotificationManager = ResourceUtil.getInstance()!.getContext()!.getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager;

    private: const notificationBuilder: NotificationBuilder;

private constructor ();

    public notify(Command command, string resource, string message);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H
