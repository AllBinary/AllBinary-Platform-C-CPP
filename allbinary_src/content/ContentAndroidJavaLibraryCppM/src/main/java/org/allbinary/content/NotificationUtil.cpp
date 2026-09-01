
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

    private: static const NotificationUtil SINGLETON = NotificationUtil();

    public: static NotificationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NotificationUtil::SINGLETON;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: NotificationManager notificationManager = ResourceUtil::getInstance().getContext().getSystemService(Context::NOTIFICATION_SERVICE) as NotificationManager;

    private: const NotificationBuilder notificationBuilder;

private: NotificationUtil(){

    int32_t SDK_VERSION = AndroidInfoFactory::getInstance().getVersion();;
    

                        if(SDK_VERSION > 22)
                        
                                    {
                                    this->notificationBuilder= NotificationBuilderAPI23();
    

                                    }
                                
                        else {
                            this->notificationBuilder= NotificationBuilder::NULL_NOTIFICATION_BUILDER;
    

                        }
                            
}


    public: void notify(Command command, std::string resource, std::string message){

    Context context = ResourceUtil::getInstance().getContext();;
    

    Intent intent = CommandUriAction::getInstance().getIntent(command);;
    

    Integer integer = ResourceUtil::getInstance().getResourceId(resource);;
    

    int32_t FLAG_IMMUTABLE = 1<<26;;
    

    int32_t SDK_VERSION = AndroidInfoFactory::getInstance().getVersion();;
    

    PendingIntent pendingIntent = PendingIntent::getActivity(context, 0, intent, SDK_VERSION > 22
                        ?       
                                FLAG_IMMUTABLE
                                :

                            0;

    );;
    

                        if(this->notificationBuilder == 
                                    nullptr
                                )
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.EXCEPTION, this, commonStrings.NOT_IMPLEMENTED);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->notificationBuilder.build(context, command, message, integer, pendingIntent);
    
}


};

            

