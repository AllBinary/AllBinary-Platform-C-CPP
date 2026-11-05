
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/lang/reflect/Method.h>
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WorkFlowWrapper
            : public virtual Object
        , public virtual WorkFlowInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: Object* anyType;

public: WorkFlowWrapper(Object* anyType);
public: WorkFlowWrapper(const std::string& anyType) : WorkFlowWrapper(JavaString::box(anyType)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> WorkFlowWrapper(BoxValue anyType) : WorkFlowWrapper(JavaBoxes::toObject(anyType)) { }
public: template<typename BoxElement> WorkFlowWrapper(const std::vector<BoxElement>& anyType) : WorkFlowWrapper(JavaBoxes::toObject(anyType)) { }

    /*protected*/ public: Object* getWorkFlowObject();

                //@Throws(Exception.constructor)
            
    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: std::string getStoreName();

                //@Throws(Exception.constructor)
            
    public: int32_t process();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWWRAPPER_H_COMPLETE
        #if __has_include(<java/lang/reflect/Method.h>)
#include <java/lang/reflect/Method.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/control/workflow/WorkFlowInterface.h")
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#endif

        #endif
    
