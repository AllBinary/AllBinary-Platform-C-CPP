
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
        
#include <javax/microedition/lcdui/Command.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NotificationUtil
            : public Object
         {
        

    private: static const SINGLETON: NotificationUtil = new NotificationUtil();

    public static NotificationUtil getInstance();

    public notify(Command command, string resource, string message);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONUTIL_H
