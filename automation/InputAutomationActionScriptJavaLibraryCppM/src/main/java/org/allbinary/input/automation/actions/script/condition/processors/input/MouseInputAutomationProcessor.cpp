
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Thread.h"
        
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MouseActionScriptInputInterface.h"

class MouseInputAutomationProcessor
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static void process(MouseActionScriptInputInterface mouseActionScriptInputInterface){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.putF(StringMaker().append("Start - Processing Mouse Input at: ").append(mouseActionScriptInputInterface.getPoint().toString()).append(" clicks: ").appendint(mouseActionScriptInputInterface.getButtonClicks()).toString(), "MouseInputAutomationProcessor", commonStrings.PROCESS);
    

    InputRobotInterface inputRobotInterface = mouseActionScriptInputInterface.getInputRobotInterface();;
    

                        if(mouseActionScriptInputInterface.getPoint().x !=  -1 && mouseActionScriptInputInterface.getPoint().y !=  -1)
                        
                                    {
                                    inputRobotInterface.mouseMove(mouseActionScriptInputInterface.getPoint());
    

                                    }
                                
Thread::sleep(mouseActionScriptInputInterface.getTime());
    

                        if(mouseActionScriptInputInterface.getButtonClicks() != 0)
                        
                                    {
                                    inputRobotInterface.mousePress(mouseActionScriptInputInterface.getButtonClicks());
    
Thread::sleep(mouseActionScriptInputInterface.getTime());
    
inputRobotInterface.mouseRelease(mouseActionScriptInputInterface.getButtonClicks());
    

                                    }
                                
Thread::sleep(mouseActionScriptInputInterface.getTime());
    
}


private: MouseInputAutomationProcessor(){
}


};

            

