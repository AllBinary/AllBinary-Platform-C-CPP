
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
        

    private: static const SINGLETON: NotificationUtil = new NotificationUtil();

    public static NotificationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NotificationUtil.SINGLETON;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: notificationManager: NotificationManager = ResourceUtil.getInstance()!.getContext()!.getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager;

    private: const notificationBuilder: NotificationBuilder;

private constructor (){

            super();
        
    SDK_VERSION: int32_t = AndroidInfoFactory.getInstance()!.getVersion()!;;
    

                        if(SDK_VERSION > 22)
                        
                                    {
                                    this.notificationBuilder= new NotificationBuilderAPI23();
    

                                    }
                                
                        else {
                            this.notificationBuilder= NotificationBuilder.NULL_NOTIFICATION_BUILDER;
    

                        }
                            
}


    public notify(Command command, string resource, string message){

    context: Context = ResourceUtil.getInstance()!.getContext()!;;
    

    intent: Intent = CommandUriAction.getInstance()!.getIntent(command)!;;
    

    integer: Integer = ResourceUtil.getInstance()!.getResourceId(resource)!;;
    

    FLAG_IMMUTABLE: int32_t = 1<<26;;
    

    SDK_VERSION: int32_t = AndroidInfoFactory.getInstance()!.getVersion()!;;
    

    pendingIntent: PendingIntent = PendingIntent.getActivity(context, 0, intent, SDK_VERSION > 22
                        ?       
                                FLAG_IMMUTABLE
                                :

                            0;

    )!;;
    

                        if(this.notificationBuilder == 
                                    null
                                )
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.EXCEPTION, this, commonStrings!.NOT_IMPLEMENTED);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this.notificationBuilder!.build(context, command, message, integer, pendingIntent);
    
}


};

            

