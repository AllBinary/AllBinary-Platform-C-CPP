
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
        



        #ifndef ADMIN_TAGS_BASICTEXTEMAILTAG_H
        #define ADMIN_TAGS_BASICTEXTEMAILTAG_H

            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/BasicTextEmailHelperFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <tags/CustomTagSupport.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicTextEmailTag: public CustomTagSupport {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string subject;

    private: std::string body;

public: BasicTextEmailTag();

    public: void setSubject(std::string value);

    public: void setBody(std::string value);

    public: std::string send();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //ADMIN_TAGS_BASICTEXTEMAILTAG_H
