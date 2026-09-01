
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
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Context.h"
#include "NotificationManager.h"
#include "CommandUriAction.h"
#include "Intent.h"
#include "Notification.h"
#include "PendingIntent.h"

class NotificationUtil
            : public Object
         {

    private: static const NotificationUtil SINGLETON = NotificationUtil();

    public: static NotificationUtil getInstance();

    private: NotificationManager notificationManager = ResourceUtil::getInstance().getContext().getSystemService(Context::NOTIFICATION_SERVICE) as NotificationManager;

    public: void notify(Command command, std::string resource, std::string message);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H
