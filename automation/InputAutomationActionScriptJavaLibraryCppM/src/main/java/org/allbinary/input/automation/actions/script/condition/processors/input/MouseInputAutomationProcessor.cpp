
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEINPUTAUTOMATIONPROCESSOR_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEINPUTAUTOMATIONPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseInputAutomationProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h"


MouseInputAutomationProcessor::MouseInputAutomationProcessor(){
}


                //@Throws(Exception.constructor)
            
    auto MouseInputAutomationProcessor::process(MouseActionScriptInputInterface* mouseActionScriptInputInterface) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->putF(JavaString::valueOf((new StringMaker())->append("Start - Processing Mouse Input at: ")->append(JavaString::valueOf(mouseActionScriptInputInterface->getPoint()))->append(" clicks: ")->appendint(mouseActionScriptInputInterface->getButtonClicks())), "MouseInputAutomationProcessor", commonStrings->PROCESS);
    

    InputRobotInterface* inputRobotInterface = mouseActionScriptInputInterface->getInputRobotInterface();;
    

                        if(mouseActionScriptInputInterface->getPoint()->x !=  -1 && mouseActionScriptInputInterface->getPoint()->y !=  -1)
                        
                                    {
                                    inputRobotInterface->mouseMove(mouseActionScriptInputInterface->getPoint());
    

                                    }
                                
Thread::sleep(mouseActionScriptInputInterface->getTime());
    

                        if(mouseActionScriptInputInterface->getButtonClicks() != 0)
                        
                                    {
                                    inputRobotInterface->mousePress(mouseActionScriptInputInterface->getButtonClicks());
    
Thread::sleep(mouseActionScriptInputInterface->getTime());
    
inputRobotInterface->mouseRelease(mouseActionScriptInputInterface->getButtonClicks());
    

                                    }
                                
Thread::sleep(mouseActionScriptInputInterface->getTime());
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEINPUTAUTOMATIONPROCESSOR_CPP
