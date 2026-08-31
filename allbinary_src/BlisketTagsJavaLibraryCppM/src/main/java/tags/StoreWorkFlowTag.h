
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
        



        #ifndef TAGS_STOREWORKFLOWTAG_H
        #define TAGS_STOREWORKFLOWTAG_H

            #include "../java/lang/Class.h"
        
            #include "../java/lang/Exception.h"
        
            #include "../java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <taghelpers/StoreTagWorkFlowHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HelperTag.h"
//and hidden field removal
class StoreWorkFlowTag: public HelperTag {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: viewName: string;

    private: viewFile: string;

public constructor ();

    public setName(string value);

                //@Throws(Exception.constructor)
            
    int32_t process();

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

};

            


        #endif //TAGS_STOREWORKFLOWTAG_H
