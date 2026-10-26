
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonResultsListener.h"
#include "ImageComparisonResultsEvent.h"
#include "ImageComparisonResult.h"
#include "ComparisonImageInputOutput.h"

class SaveImageComparisonWorker
            : public Object
        : public ImageComparisonResultsListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: bool running= false;

    private: const BasicArrayList imageComparisonInfoVector = BasicArrayListD();

public: SaveImageComparisonWorker(){
}


    public: void onImageComparisonResultsEvent(ImageComparisonResultsEvent imageComparisonResultsEvent){
this->imageComparisonInfoVector.add(imageComparisonResultsEvent);
    
this->run();
    
}


    public: void onEvent(AllBinaryEventObject allBinaryEventObject){
this->onImageComparisonResultsEvent(allBinaryEventObject);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running){
this->running= running;
    
}


    public: void run(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.RUN);
    
this->setRunning(true);
    

    TimeDelayHelper timeHelper = TimeDelayHelper(1000);;
    
timeHelper.setStartTimeTNT();
    

    ImageComparisonResultsEvent imageComparisonResultsEvent = this->imageComparisonInfoVector.get(0);;
    

    ImageComparisonResult imageComparisonInfo = imageComparisonResultsEvent.getImageComparisonResult();;
    
this->logUtil.putF(imageComparisonInfo.toString(), this, this->commonStrings.RUN);
    
ComparisonImageInputOutput().save(imageComparisonInfo, imageComparisonInfo.getFrameTwo());
    
this->imageComparisonInfoVector.remove(imageComparisonInfo);
    
this->logUtil.putF(CommonLabels::getInstance().ELAPSED +timeHelper.getElapsedTNT(), this, this->commonStrings.RUN);
    
this->logUtil.putF(this->commonStrings.END, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


};

            

