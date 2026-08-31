
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_H

            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WorkFlowWrapper.h"

class StoreWorkFlowWrapper: public WorkFlowWrapper {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (any = {} anyType);

                //@Throws(Exception.constructor)
            
    public string getStoreName();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_H
