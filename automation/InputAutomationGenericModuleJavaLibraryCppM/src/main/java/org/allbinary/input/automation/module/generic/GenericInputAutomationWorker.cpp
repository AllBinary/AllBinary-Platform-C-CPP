
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/GenericInputAutomationWorker.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/module/AbstractInputAutomationWorker.h>

      
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>

      
#include <org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/cache/J2SECacheInterface.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonWorker.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/GenericProfileCaptureWorkerFactory.h"
#include "org/allbinary/input/automation/module/generic/CaptureWorkerUtil.h"


GenericInputAutomationWorker::GenericInputAutomationWorker(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfile* genericProfile, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface) : AbstractInputAutomationWorker(inputAutomationActionInterface), logUtil(LogUtil::getInstance()), lastFrame(int64_t( -1)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->setCaptureWorker(GenericProfileCaptureWorkerFactory::getInstance(genericProfile));
    
this->setInputAutomationActionInterface(inputAutomationActionInterface);
    
this->setImageComparisonWorker(new ImageComparisonWorker(imageComparatorConstraintsInterface));
    
this->setMotionRectanglesWorker(new MotionRectanglesWorker(motionRectangleConstraintsInterface));
    
this->setGenericProfile(genericProfile);
    

    BasicArrayList* vector = this->getGenericProfile()->getGenericProfileDataWorkerTypeVector();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GenericProfileDataWorkerType* genericProfileDataWorkerType = dynamic_cast<GenericProfileDataWorkerType*>(vector->get(index));;
    
this->logUtil->putF(JavaString::valueOf("Adding Listener: ") +JavaString::valueOf(genericProfileDataWorkerType), this, this->commonStrings->CONSTRUCTOR);
    

                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::COMPARISON)
                        
                                    {
                                    this->getCaptureWorker()->addListenerInterface(this->getImageComparisonWorker());
    

                                    }
                                
                             else 
                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::MOTION)
                        
                                    {
                                    this->getImageComparisonWorker()->addListenerInterface(this->getMotionRectanglesWorker());
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto GenericInputAutomationWorker::processDataWorkerResults() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->PROCESS_DATA_WORKER_RESULTS);
    
this->waitForDataWorkers();
    

    J2SECacheInterface* cacheInterface = dynamic_cast<J2SECacheInterface*>(CapturedBufferedImagesCacheSingleton::getInstance());;
    

    std::vector<Object*> keyArray = cacheInterface->keySet()->toArray();;
    

                        if(keyArray.size() > 0)
                        
                                    {
                                    this->logUtil->putF("Image Available", this, this->PROCESS_DATA_WORKER_RESULTS);
    
this->setFrame(JavaBoxes::unbox<int64_t>(keyArray[keyArray.size() -1]));
    

                        if(getFrame() > this->lastFrame)
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Processing new frame: ") +JavaString::valueOf(getFrame()), this, this->PROCESS_DATA_WORKER_RESULTS);
    

    HashMap<Object*, Object*>* hashMap = this->getGenericProfile()->getGenericProfileActions()->getHashMap();;
    

    Set* set = hashMap->keys();;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("Processing ") +JavaString::valueOf(set->size())) +JavaString::valueOf("Actions"), this, this->PROCESS_DATA_WORKER_RESULTS);
    

    std::vector<Object*> actionNameArray = set->toArray();;
    

    int32_t size = actionNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string actionNameString = JavaBoxes::unbox<std::string>(actionNameArray[index]);;
    
this->logUtil->putF(JavaString::valueOf("Processing Action: ") +JavaString::valueOf(actionNameString), this, this->PROCESS_DATA_WORKER_RESULTS);
    

    GenericProfileAction* genericProfileAction = dynamic_cast<GenericProfileAction*>(hashMap->get(actionNameString));;
    

    GenericProfileActionScript* genericProfileActionScript = genericProfileAction->getGenericProfileActionScript();;
    

    BasicArrayList* vector = genericProfileActionScript->getProfileActionConditionInterfaceVector();;
    
CaptureWorkerUtil::processProfileActionConditions(vector, getFrame());
    
}

this->lastFrame= this->getFrame();
    

                                    }
                                

                                    }
                                
                        else {
                            this->logUtil->putF("Image Not Available", this, this->PROCESS_DATA_WORKER_RESULTS);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GenericInputAutomationWorker::process() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->PROCESS);
    
this->startDataWorkers();
    
this->processDataWorkerResults();
    
}


    auto GenericInputAutomationWorker::getGenericProfile() -> GenericProfile*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->genericProfile;
    
}


    auto GenericInputAutomationWorker::setGenericProfile(GenericProfile* genericProfile) -> void{
this->genericProfile= genericProfile;
    
}


    auto GenericInputAutomationWorker::getFrame() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->frame;
    
}


    auto GenericInputAutomationWorker::setFrame(int64_t frame) -> void{
this->frame= frame;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONWORKER_CPP
