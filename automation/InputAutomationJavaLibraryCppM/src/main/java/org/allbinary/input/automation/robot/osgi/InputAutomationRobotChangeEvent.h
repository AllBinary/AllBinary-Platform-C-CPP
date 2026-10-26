
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTCHANGEEVENT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTCHANGEEVENT_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationRobotInterfaceWrapper.h"

class InputAutomationRobotChangeEvent
            : public Object
         {

    private: InputAutomationRobotInterfaceWrapper inputAutomationRobotInterfaceWrapper;

public: InputAutomationRobotChangeEvent(InputAutomationRobotInterfaceWrapper inputAutomationRobotInterfaceWrapper);

    public: InputAutomationRobotInterfaceWrapper getInputAutomationRobotInterfaceWrapper();

    public: void setInputAutomationRobotInterfaceWrapper(InputAutomationRobotInterfaceWrapper inputAutomationRobotInterfaceWrapper);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTCHANGEEVENT_H
