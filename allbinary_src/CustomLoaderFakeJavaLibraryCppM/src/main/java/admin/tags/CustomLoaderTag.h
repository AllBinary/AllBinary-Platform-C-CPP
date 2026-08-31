
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
        



        #ifndef ADMIN_TAGS_CUSTOMLOADERTAG_H
        #define ADMIN_TAGS_CUSTOMLOADERTAG_H

            #include "../../java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomLoaderTag: public CustomTagSupport {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: command: string;

    private: webappPath: string;

public constructor ();

    public setCommand(string command);

    public setWebappPath(string value);

                //@Throws(LicensingException.constructor)
            
    setCustomLoaderWebappPath();

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_CUSTOMLOADERTAG_H
