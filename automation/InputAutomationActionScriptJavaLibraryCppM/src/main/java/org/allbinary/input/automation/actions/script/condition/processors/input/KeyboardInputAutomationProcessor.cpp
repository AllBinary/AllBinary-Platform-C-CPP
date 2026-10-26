
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
        



            #include <vector>
        
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
        #include "KeyboardActionScriptInputInterface.h"

class KeyboardInputAutomationProcessor
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static void process(KeyboardActionScriptInputInterface keyActionScriptInputInterface){

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.putF(CommonLabels::getInstance().START +keyActionScriptInputInterface.toString(), "KeyInputAutomationProcessor", commonStrings.PROCESS);
    

    InputRobotInterface inputRobotInterface = keyActionScriptInputInterface.getInputRobotInterface();;
    

    std::vector<Integer> integer = keyActionScriptInputInterface.getKeyArray();;
    

                        if(keyActionScriptInputInterface.getDelayBetweenKeys() == 0)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < keyActionScriptInputInterface.getKeyArray().length; index++)
        {

                        if(keyActionScriptInputInterface.isPress())
                        
                                    {
                                    inputRobotInterface.keyPress(integer[index]);
    

                                    }
                                
}

Thread::sleep(keyActionScriptInputInterface.getTime());
    




                        for (
    int32_t index = keyActionScriptInputInterface.getKeyArray().length -1;index >= 0; index--)
        {

                        if(keyActionScriptInputInterface.isRelease())
                        
                                    {
                                    inputRobotInterface.keyRelease(integer[index]);
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    int32_t index = 0;index < keyActionScriptInputInterface.getKeyArray().length; index++)
        {

                        if(keyActionScriptInputInterface.isPress())
                        
                                    {
                                    inputRobotInterface.keyPress(integer[index]);
    

                                    }
                                
Thread::sleep(keyActionScriptInputInterface.getTime());
    

                        if(keyActionScriptInputInterface.isRelease())
                        
                                    {
                                    inputRobotInterface.keyRelease(integer[index]);
    

                                    }
                                

    TimeDelayHelper timeHelper = TimeDelayHelper(keyActionScriptInputInterface.getDelayBetweenKeys());;
    

    int32_t toLong = 0;;
    

        while(!timeHelper.isTimeTNT() || toLong > 6000)
        {
toLong++;
    
Thread::sleep(50);
    
}

}


                        }
                            
}


private: KeyboardInputAutomationProcessor(){
}


};

            

