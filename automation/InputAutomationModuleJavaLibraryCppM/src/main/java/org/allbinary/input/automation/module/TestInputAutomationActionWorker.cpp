
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
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Thread.h"
        
#include <java/util/Hashtable.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbstractInputAutomationWorker.h"
#include "InputAutomationActionInterface.h"

class TestInputAutomationActionWorker: public AbstractInputAutomationWorker {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: int32_t sleep;

public: TestInputAutomationActionWorker(int32_t sleep, InputAutomationActionInterface inputAutomationActionInterface, ImageComparatorConstraintsInterface imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface motionRectangleConstraintsInterface){
            super(inputAutomationActionInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF("BasicTestAttackWorder", this, this->commonStrings.CONSTRUCTOR);
    
this->sleep= sleep;
    
}


                //@Throws(Exception.constructor)
            
    public: void processBetweenWorkers(){
Thread::sleep(2000);
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.PROCESS);
    

    Hashtable<any, any> hashtable = InputRobotFactory::getInstance().get();;
    

    Set set = hashtable.keys();;
    

    std::vector<Object*> inputTypeNameArray = set.toArray();;
    

    int32_t size = inputTypeNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string inputTypeNameString = inputTypeNameArray[index]! as string;;
    

    InputRobotInterface robot = hashtable.get(inputTypeNameString) as InputRobotInterface;;
    

                        if(this->sleep > 0)
                        
                                    {
                                    Thread::sleep(this->sleep);
    

                                    }
                                
}

}


};

            

