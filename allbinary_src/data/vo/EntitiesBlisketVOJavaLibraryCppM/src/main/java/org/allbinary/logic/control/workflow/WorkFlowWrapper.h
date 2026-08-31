
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WorkFlowInterface.h"

class WorkFlowWrapper
            : public Object
        : public WorkFlowInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: anyType: any;

public constructor (any = {} anyType);

    any getWorkFlowObject();

                //@Throws(Exception.constructor)
            
    public string getName();

                //@Throws(Exception.constructor)
            
    public string getStoreName();

                //@Throws(Exception.constructor)
            
    public Integer process();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_H
