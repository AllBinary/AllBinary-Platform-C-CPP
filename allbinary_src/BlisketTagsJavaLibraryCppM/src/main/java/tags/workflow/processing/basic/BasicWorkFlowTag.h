
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
        



        #ifndef TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_H
        #define TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <tags/StoreWorkFlowTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //and remove the hidden fields
class BasicWorkFlowTag: public StoreWorkFlowTag {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor ();

                //@Throws(JspTagException.constructor)
            
    public int32_t doStartTag();

};

            


        #endif //TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_H
