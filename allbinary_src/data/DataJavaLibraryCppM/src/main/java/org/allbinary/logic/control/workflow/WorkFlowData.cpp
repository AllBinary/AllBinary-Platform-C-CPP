
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WorkFlowData
            : public Object
         {
        

    private: static const instance: WorkFlowData = new WorkFlowData();

    public static WorkFlowData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WorkFlowData.instance;
    
}


private constructor (){

            super();
        }


    public WORKFLOWS: string = "WORKFLOWS";

    public WORKFLOW: string = "WORKFLOW";

    public NAME: string = "WORKFLOW_NAME";

    public DATA: string = "WORKFLOW_DATA";

};

            

