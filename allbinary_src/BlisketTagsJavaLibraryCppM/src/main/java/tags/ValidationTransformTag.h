
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
        



        #ifndef TAGS_VALIDATIONTRANSFORMTAG_H
        #define TAGS_VALIDATIONTRANSFORMTAG_H

            #include "../java/lang/Class.h"
        
            #include "../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/ValidatedViewHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformTag.h"

class ValidationTransformTag: public TransformTag {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: xslFile: string;

    private: logic: bool;

public constructor ();

    public setXsl(string value);

    public setLogic(bool logic);

                //@Throws(Exception.constructor)
            
    bool isValid();

                //@Throws(Exception.constructor)
            
    string validationInfo();

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

    public int32_t doEndTag();

};

            


        #endif //TAGS_VALIDATIONTRANSFORMTAG_H
