
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTINTERFACE_H

#include <java/awt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptInputInterface.h"
#include "Point.h"

class MouseActionScriptInputInterface: public ProfileActionScriptInputInterface {

    void setPoint(Point point);

    Point getPoint();

    int32_t getButtonClicks();

    void setButtonClicks(int32_t buttons);

    void log();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTINTERFACE_H
