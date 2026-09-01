
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
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
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
        #include "GenericProfileCaptureWorkerFactory.h"
#include "CaptureWorkerUtil.h"

class GenericInputAutomationWorker: public AbstractInputAutomationWorker {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string PROCESS_DATA_WORKER_RESULTS = "processDataWorkerResults";

    private: Long lastFrame = Long( -1);

    private: Long frame;

    private: GenericProfile genericProfile;

public: GenericInputAutomationWorker(InputAutomationActionInterface inputAutomationActionInterface, GenericProfile genericProfile, MotionRectangleConstraintsInterface motionRectangleConstraintsInterface, ImageComparatorConstraintsInterface imageComparatorConstraintsInterface){
            super(inputAutomationActionInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->setCaptureWorker(GenericProfileCaptureWorkerFactory::getInstance(genericProfile));
    
this->setInputAutomationActionInterface(inputAutomationActionInterface);
    
this->setImageComparisonWorker(ImageComparisonWorker(imageComparatorConstraintsInterface));
    
this->setMotionRectanglesWorker(MotionRectanglesWorker(motionRectangleConstraintsInterface));
    
this->setGenericProfile(genericProfile);
    

    Vector vector = this->getGenericProfile().getGenericProfileDataWorkerTypeVector();;
    

    int32_t size = vector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GenericProfileDataWorkerType genericProfileDataWorkerType = vector.get(index) as GenericProfileDataWorkerType;;
    
this->logUtil.putF("Adding Listener: " +genericProfileDataWorkerType, this, this->commonStrings.CONSTRUCTOR);
    

                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::COMPARISON)
                        
                                    {
                                    this->getCaptureWorker().addListenerInterface(this->getImageComparisonWorker());
    

                                    }
                                
                             else 
                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::MOTION)
                        
                                    {
                                    this->getImageComparisonWorker().addListenerInterface(this->getMotionRectanglesWorker());
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void processDataWorkerResults(){
this->logUtil.putF(this->commonStrings.START, this, this->PROCESS_DATA_WORKER_RESULTS);
    
this->waitForDataWorkers();
    

    J2SECacheInterface cacheInterface = CapturedBufferedImagesCacheSingleton::getInstance() as J2SECacheInterface;;
    

    std::vector<Object*> keyArray = cacheInterface.keySet().();;
    

                        if(keyArray.size() > 0)
                        
                                    {
                                    this->logUtil.putF("Image Available", this, this->PROCESS_DATA_WORKER_RESULTS);
    
this->setFrame(keyArray[keyArray.size() -1]! as Long);
    

                        if(getFrame() > this->lastFrame)
                        
                                    {
                                    this->logUtil.putF("Processing new frame: " +getFrame(), this, this->PROCESS_DATA_WORKER_RESULTS);
    

    HashMap<any, any> hashMap = this->getGenericProfile().getGenericProfileActions().getHashMap();;
    

    Set set = hashMap.keys();;
    
this->logUtil.putF("Processing " +set.size() +"Actions", this, this->PROCESS_DATA_WORKER_RESULTS);
    

    std::vector<Object*> actionNameArray = set.toArray();;
    

    int32_t size = actionNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string actionNameString = actionNameArray[index]! as string;;
    
this->logUtil.putF("Processing Action: " +actionNameString, this, this->PROCESS_DATA_WORKER_RESULTS);
    

    GenericProfileAction genericProfileAction = hashMap.get(actionNameString) as GenericProfileAction;;
    

    GenericProfileActionScript genericProfileActionScript = genericProfileAction.getGenericProfileActionScript();;
    

    Vector vector = genericProfileActionScript.getProfileActionConditionInterfaceVector();;
    
CaptureWorkerUtil::processProfileActionConditions(vector, getFrame());
    
}

this->lastFrame= this->getFrame();
    

                                    }
                                

                                    }
                                
                        else {
                            this->logUtil.putF("Image Not Available", this, this->PROCESS_DATA_WORKER_RESULTS);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void process(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.PROCESS);
    
this->startDataWorkers();
    
this->processDataWorkerResults();
    
}


    public: GenericProfile getGenericProfile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfile;
    
}


    public: void setGenericProfile(GenericProfile genericProfile){
this->genericProfile= genericProfile;
    
}


    protected: Long getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    protected: void setFrame(Long frame){
this->frame= frame;
    
}


};

            

