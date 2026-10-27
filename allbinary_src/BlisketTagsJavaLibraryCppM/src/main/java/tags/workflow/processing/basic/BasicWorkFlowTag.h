
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class JspTagException;
class DynamicObjectData;
class AbResponseHandler;
class LogUtil;
#include <tags/StoreWorkFlowTag.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //and remove the hidden fields
class BasicWorkFlowTag: public StoreWorkFlowTag {

    /*protected*/ public: LogUtil* logUtil;

public: BasicWorkFlowTag();

                //@Throws(JspTagException.constructor)
            
    public: int32_t doStartTag();

};

            


        #endif //TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_H_COMPLETE)
        #define TAGS_WORKFLOW_PROCESSING_BASIC_BASICWORKFLOWTAG_H_COMPLETE
        #if __has_include(<javax/servlet/jsp/JspTagException.h>)
#include <javax/servlet/jsp/JspTagException.h>
#endif
#if __has_include(<org/allbinary/business/DynamicObjectData.h>)
#include <org/allbinary/business/DynamicObjectData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/AbResponseHandler.h>)
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<tags/StoreWorkFlowTag.h>)
#include <tags/StoreWorkFlowTag.h>
#endif

        #endif
    
