
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWDATA_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WorkFlowData
            : public Object
         {

    private: static WorkFlowData* instance() { static std::unique_ptr<WorkFlowData> value(new WorkFlowData()); return value.get(); }

    public: static WorkFlowData* getInstance();

private: WorkFlowData();

    public: std::string WORKFLOWS = "WORKFLOWS";

    public: std::string WORKFLOW = "WORKFLOW";

    public: std::string NAME = "WORKFLOW_NAME";

    public: std::string DATA = "WORKFLOW_DATA";

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_WORKFLOW_WORKFLOWDATA_H
