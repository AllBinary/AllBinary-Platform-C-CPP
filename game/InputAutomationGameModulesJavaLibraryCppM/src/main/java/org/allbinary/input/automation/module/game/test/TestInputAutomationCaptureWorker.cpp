
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
        
class TestInputAutomationCaptureWorker: public AbstractInputAutomationWorker {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GenericProfileActions genericProfileActions;

    private: const std::string MESSAGE = "GenericInputAutomationCaptureWorker";

    private: const std::string PROCESS_DATA_WORKER_RESULTS = "processDataWorkerResults";

    private: const std::string IMAGE_AVAILABLE_SO_PROCESSING = "Image Available so processing";

    private: const std::string IMAGE_NOT_AVAILABLE = "Image Not Available";

public: TestInputAutomationCaptureWorker(InputAutomationActionInterface inputAutomationActionInterface, GenericProfileActions genericProfileActions, ImageComparatorConstraintsInterface imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface motionRectangleConstraintsInterface) : AbstractInputAutomationWorker(inputAutomationActionInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->MESSAGE, this, this->commonStrings.CONSTRUCTOR);
    
this->setGenericProfileActions(genericProfileActions);
    
}


                //@Throws(Exception.constructor)
            
    public: void processDataWorkerResults(){

    J2SECacheInterface cacheInterface = CapturedBufferedImagesCacheSingleton::getInstance();;
    

                        if(cacheInterface.keySet().size() > 0)
                        
                                    {
                                    this->logUtil.putF(this->IMAGE_AVAILABLE_SO_PROCESSING, this, this->PROCESS_DATA_WORKER_RESULTS);
    

    Object* anyType = cacheInterface.keySet().()[0];;
    

    HashMap<Object*, Object*> hashMap = this->getGenericProfileActions().getHashMap();;
    

    Set set = hashMap.keys();;
    

    std::vector<Object*> actionNameArray = set.toArray();;
    

    int32_t size = actionNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string actionNameString = actionNameArray[index];;
    

    GenericProfileAction genericProfileAction = hashMap.get(actionNameString);;
    

    GenericProfileActionScript genericProfileActionScript = genericProfileAction.getGenericProfileActionScript();;
    

    BasicArrayList vector = genericProfileActionScript.getProfileActionConditionInterfaceVector();;
    
}

cacheInterface.get(anyType);
    

                                    }
                                
                        else {
                            this->logUtil.putF(this->IMAGE_NOT_AVAILABLE, this, this->PROCESS_DATA_WORKER_RESULTS);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.PROCESS);
    
this->startDataWorkers();
    
this->processDataWorkerResults();
    
}


    public: GenericProfileActions getGenericProfileActions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActions;
    
}


    public: void setGenericProfileActions(GenericProfileActions genericProfileActions){
this->genericProfileActions= genericProfileActions;
    
}


};

            

