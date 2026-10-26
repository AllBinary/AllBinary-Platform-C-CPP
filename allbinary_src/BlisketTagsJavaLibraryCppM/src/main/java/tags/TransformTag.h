
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
        



        #ifndef TAGS_TRANSFORMTAG_H
        #define TAGS_TRANSFORMTAG_H

            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/ViewHelperFactory.h>

      
#include <tags/transform/info/TransformInfoTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformTag: public TransformInfoTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: TransformTag();

public: TransformTag(TagHelperFactoryInterface tagHelperFactoryInterface);

                //@Throws(Exception.constructor)
            
    protected: std::string view();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_TRANSFORMTAG_H
