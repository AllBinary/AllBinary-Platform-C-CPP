
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
        



        #ifndef TAGS_ADMIN_USERNAMEORDERHISTORYTAG_H
        #define TAGS_ADMIN_USERNAMEORDERHISTORYTAG_H

            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <tags/StoreValidationTransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserNameOrderHistoryTag: public StoreValidationTransformTag {

    private: std::string status;

public: UserNameOrderHistoryTag();

    public: void setStatus(std::string value);

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_ADMIN_USERNAMEORDERHISTORYTAG_H
