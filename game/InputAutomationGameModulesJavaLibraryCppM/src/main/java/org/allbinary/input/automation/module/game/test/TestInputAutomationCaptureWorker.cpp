
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/game/test/TestInputAutomationCaptureWorker.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/module/AbstractInputAutomationWorker.h>

      
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>

      
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/J2SECacheInterface.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TestInputAutomationCaptureWorker::TestInputAutomationCaptureWorker(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfileActions* genericProfileActions, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) : AbstractInputAutomationWorker(inputAutomationActionInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->MESSAGE, this, this->commonStrings->CONSTRUCTOR);
    
this->setGenericProfileActions(genericProfileActions);
    
}


                //@Throws(Exception.constructor)
            
    auto TestInputAutomationCaptureWorker::processDataWorkerResults() -> void{

    J2SECacheInterface* cacheInterface = dynamic_cast<J2SECacheInterface*>(CapturedBufferedImagesCacheSingleton::getInstance());;
    

                        if(cacheInterface->keySet()->size() > 0)
                        
                                    {
                                    this->logUtil->putF(this->IMAGE_AVAILABLE_SO_PROCESSING, this, this->PROCESS_DATA_WORKER_RESULTS);
    

    Object* anyType = cacheInterface->keySet()->()[0];;
    

    HashMap<Object*, Object*>* hashMap = this->getGenericProfileActions()->getHashMap();;
    

    Set* set = hashMap->keys();;
    

    std::vector<Object*> actionNameArray = set->toArray();;
    

    int32_t size = actionNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string actionNameString = JavaBoxes::unbox<std::string>(actionNameArray[index]);;
    

    GenericProfileAction* genericProfileAction = dynamic_cast<GenericProfileAction*>(hashMap->get(actionNameString));;
    

    GenericProfileActionScript* genericProfileActionScript = genericProfileAction->getGenericProfileActionScript();;
    

    BasicArrayList* vector = genericProfileActionScript->getProfileActionConditionInterfaceVector();;
    
}

cacheInterface->get(anyType);
    

                                    }
                                
                        else {
                            this->logUtil->putF(this->IMAGE_NOT_AVAILABLE, this, this->PROCESS_DATA_WORKER_RESULTS);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto TestInputAutomationCaptureWorker::process() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->PROCESS);
    
this->startDataWorkers();
    
this->processDataWorkerResults();
    
}


    auto TestInputAutomationCaptureWorker::getGenericProfileActions() -> GenericProfileActions*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActions;
    
}


    auto TestInputAutomationCaptureWorker::setGenericProfileActions(GenericProfileActions* genericProfileActions) -> void{
this->genericProfileActions= genericProfileActions;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTINPUTAUTOMATIONCAPTUREWORKER_CPP
