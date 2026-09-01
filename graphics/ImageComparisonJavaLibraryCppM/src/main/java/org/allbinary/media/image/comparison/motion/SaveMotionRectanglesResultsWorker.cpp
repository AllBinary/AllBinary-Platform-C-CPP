
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectanglesResultsListener.h"
#include "MotionRectanglesResultsEvent.h"
#include "MotionRectangles.h"
#include "MotionRectanglesImageInputOutput.h"

class SaveMotionRectanglesResultsWorker
            : public Object
        : public MotionRectanglesResultsListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: bool running= false;

    private: Vector motionRectanglesVector;

public: SaveMotionRectanglesResultsWorker(){
this->motionRectanglesVector= Vector();
    
}


    public: Vector getMotionRectanglesVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectanglesVector;
    
}


    public: void onMotionRectanglesImageComparisonResultsEvent(MotionRectanglesResultsEvent motionRectanglesResultsEvent){
this->getMotionRectanglesVector().add(motionRectanglesResultsEvent);
    
this->run();
    
}


    public: void onEvent(AllBinaryEventObject allBinaryEventObject){
this->onMotionRectanglesImageComparisonResultsEvent(allBinaryEventObject as MotionRectanglesResultsEvent);
    
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
    

    MotionRectanglesResultsEvent motionRectanglesResultsEvent = this->getMotionRectanglesVector().get(0) as MotionRectanglesResultsEvent;;
    

    MotionRectangles motionRectangles = motionRectanglesResultsEvent.getMotionRectangles();;
    
MotionRectanglesImageInputOutput().save(motionRectangles, motionRectanglesResultsEvent.getFrame());
    
this->getMotionRectanglesVector().remove(motionRectangles);
    
this->logUtil.putF(CommonLabels::getInstance().ELAPSED +timeHelper.getElapsedTNT(), this, this->commonStrings.RUN);
    
this->logUtil.putF(this->commonStrings.END, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


};

            

