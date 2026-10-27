
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
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
        #include "org/allbinary/content/NotificationBuilder.h"
#include "org/allbinary/content/NotificationBuilderAPI23.h"
#include "org/allbinary/content/CommandUriAction.h"

class NotificationUtil
            : public Object
         {

    private: static NotificationUtil* SINGLETON() { static std::unique_ptr<NotificationUtil> value(new NotificationUtil()); return value.get(); }

    public: static NotificationUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: NotificationManager* notificationManager = dynamic_cast<NotificationManager*>(ResourceUtil::getInstance()->getContext()->getSystemService(Context::NOTIFICATION_SERVICE));

    private: NotificationBuilder* notificationBuilder;

private: NotificationUtil();

    public: void notify(Command* command, std::string resource, std::string message);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H
