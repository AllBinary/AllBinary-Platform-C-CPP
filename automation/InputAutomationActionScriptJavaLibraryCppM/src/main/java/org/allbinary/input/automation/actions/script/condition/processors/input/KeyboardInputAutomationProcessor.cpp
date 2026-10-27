
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDINPUTAUTOMATIONPROCESSOR_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDINPUTAUTOMATIONPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardInputAutomationProcessor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputInterface.h"


KeyboardInputAutomationProcessor::KeyboardInputAutomationProcessor(){
}


                //@Throws(Exception.constructor)
            
    auto KeyboardInputAutomationProcessor::process(KeyboardActionScriptInputInterface* keyActionScriptInputInterface) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->putF(CommonLabels::getInstance()->START +keyActionScriptInputInterface->toString(), "KeyInputAutomationProcessor", commonStrings->PROCESS);
    

    InputRobotInterface* inputRobotInterface = keyActionScriptInputInterface->getInputRobotInterface();;
    

    std::vector<int32_t> integer = keyActionScriptInputInterface->getKeyArray();;
    

                        if(keyActionScriptInputInterface->getDelayBetweenKeys() == 0)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < keyActionScriptInputInterface->getKeyArray()->length; index++)
        {

                        if(keyActionScriptInputInterface->isPress())
                        
                                    {
                                    inputRobotInterface->keyPress(integer[index]);
    

                                    }
                                
}

Thread::sleep(keyActionScriptInputInterface->getTime());
    




                        for (
    int32_t index = keyActionScriptInputInterface->getKeyArray()->length -1;index >= 0; index--)
        {

                        if(keyActionScriptInputInterface->isRelease())
                        
                                    {
                                    inputRobotInterface->keyRelease(integer[index]);
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    int32_t index = 0;index < keyActionScriptInputInterface->getKeyArray()->length; index++)
        {

                        if(keyActionScriptInputInterface->isPress())
                        
                                    {
                                    inputRobotInterface->keyPress(integer[index]);
    

                                    }
                                
Thread::sleep(keyActionScriptInputInterface->getTime());
    

                        if(keyActionScriptInputInterface->isRelease())
                        
                                    {
                                    inputRobotInterface->keyRelease(integer[index]);
    

                                    }
                                

    TimeDelayHelper* timeHelper = new TimeDelayHelper(keyActionScriptInputInterface->getDelayBetweenKeys());;
    

    int32_t toLong = 0;;
    

        while(!timeHelper->isTimeTNT() || toLong > 6000)
        {
toLong++;
    
Thread::sleep(50);
    
}

}


                        }
                            
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDINPUTAUTOMATIONPROCESSOR_CPP
