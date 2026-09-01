
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
        



        #ifndef TAGS_MODIFYTAG_H
        #define TAGS_MODIFYTAG_H

            #include "../java/lang/Class.h"
        
            #include "../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HelperTag.h"

class ModifyTag: public HelperTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: ModifyTag(TagHelperFactoryInterface tagHelperFactoryInterface);

                //@Throws(LicensingException.constructor)
            
    public: std::string insert();

                //@Throws(LicensingException.constructor)
            
    public: std::string delete_();

                //@Throws(LicensingException.constructor)
            
    public: std::string update();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_MODIFYTAG_H
