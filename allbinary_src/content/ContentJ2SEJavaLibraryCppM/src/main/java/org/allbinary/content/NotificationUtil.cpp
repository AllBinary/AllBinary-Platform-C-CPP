
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
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

    public: static NotificationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NotificationUtil::SINGLETON;
    
}


    private: NotificationManager notificationManager = ResourceUtil::getInstance().getContext().getSystemService(Context::NOTIFICATION_SERVICE);

    public: void notify(Command command, std::string resource, std::string message){

    Context context = ResourceUtil::getInstance().getContext();;
    

    Intent intent = CommandUriAction::getInstance().getIntent(command);;
    

    Integer integer = ResourceUtil::getInstance().getResourceId(resource);;
    

    Notification notification = Notification(integer.intValue(), message, System.currentTimeMillis());;
    

    PendingIntent pendingIntent = PendingIntent::getActivity(context, 0, intent, 0);;
    
notification.setLatestEventInfo(context, command.getLabel(), message, pendingIntent);
    
this->notificationManager.notify(TsUtil::getInstance().hashCode(command), notification);
    
}


};

            

