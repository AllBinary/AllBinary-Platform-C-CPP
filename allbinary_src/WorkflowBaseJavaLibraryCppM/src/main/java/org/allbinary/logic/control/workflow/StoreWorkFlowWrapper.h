
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/WorkFlowWrapper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreWorkFlowWrapper: public WorkFlowWrapper {

    /*protected*/ public: LogUtil* logUtil;

public: StoreWorkFlowWrapper(Object* anyType);

                //@Throws(Exception.constructor)
            
    public: std::string getStoreName();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_STOREWORKFLOWWRAPPER_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/control/workflow/WorkFlowWrapper.h")
#include "org/allbinary/logic/control/workflow/WorkFlowWrapper.h"
#endif

        #endif
    
