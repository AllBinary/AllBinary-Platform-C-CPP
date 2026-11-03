
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWDATA_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/workflow/WorkFlowData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto WorkFlowData::instance_owner() -> WorkFlowData* { static std::unique_ptr<WorkFlowData> value(new WorkFlowData()); return value.get(); }
WorkFlowData* WorkFlowData::instance = WorkFlowData::instance_owner();

    auto WorkFlowData::getInstance() -> WorkFlowData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return WorkFlowData::instance;
    
}


WorkFlowData::WorkFlowData(){
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWDATA_CPP
