
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResultsListener.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangleConstraintsInterface.h"
#include "AllMotionRectangles.h"
#include "AllMotionRectanglesResultsCacheSingleton.h"
#include "MotionRectanglesResultsFrameCacheable.h"
#include "ConsolidateMotionRectangles.h"
#include "ConsolidatedMotionRectanglesResultsCacheSingleton.h"
#include "ConstrainedMotionRectangles.h"
#include "ConstrainedMotionRectanglesResultsCacheSingleton.h"
#include "MotionRectanglesResultsEvent.h"
#include "MotionRectangles.h"

class MotionRectanglesWorker: public BasicEventHandler: public ImageComparisonResultsListener {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const imageComparisonInfoVector: Vector = new Vector();

    private: const motionRectangleConstraintsInterface: MotionRectangleConstraintsInterface;

    private: index: int64_t= 0;

    private: running: bool= false;

public constructor (MotionRectangleConstraintsInterface motionRectangleConstraintsInterface){

            super();
        this.motionRectangleConstraintsInterface= motionRectangleConstraintsInterface;
    
}


    public onImageComparisonResultsEvent(ImageComparisonResultsEvent imageComparisonResultsEvent){
this.imageComparisonInfoVector!.add(imageComparisonResultsEvent);
    
this.run();
    
}


    public onEvent(AllBinaryEventObject allBinaryEventObject){
this.onImageComparisonResultsEvent(allBinaryEventObject as ImageComparisonResultsEvent);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setRunning(bool running){
this.running= running;
    
}


    public run(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.RUN);
    
this.setRunning(true);
    

    timeHelper: TimeDelayHelper = new TimeDelayHelper(1000);;
    
timeHelper!.setStartTimeTNT();
    

    imageComparisonResultsEvent: ImageComparisonResultsEvent = this.imageComparisonInfoVector!.get(0) as ImageComparisonResultsEvent;;
    

    imageComparisonInfo: ImageComparisonResult = imageComparisonResultsEvent!.getImageComparisonResult() as ImageComparisonResult;;
    
this.logUtil!.putF(imageComparisonInfo!.toString(), this, this.commonStrings!.RUN);
    

    allMotionRectangles: AllMotionRectangles = new AllMotionRectangles(imageComparisonInfo);;
    
AllMotionRectanglesResultsCacheSingleton.getInstance()!.add(new MotionRectanglesResultsFrameCacheable(allMotionRectangles, imageComparisonInfo!.getFrameTwo()));
    

    consolidatedMotionRectangles: ConsolidateMotionRectangles = new ConsolidateMotionRectangles(allMotionRectangles);;
    
ConsolidatedMotionRectanglesResultsCacheSingleton.getInstance()!.add(new MotionRectanglesResultsFrameCacheable(consolidatedMotionRectangles, imageComparisonInfo!.getFrameTwo()));
    

    constrainedMotionRectangles: ConstrainedMotionRectangles = new ConstrainedMotionRectangles(this.motionRectangleConstraintsInterface, consolidatedMotionRectangles);;
    
constrainedMotionRectangles!.applyMotionRectangleConstraints(consolidatedMotionRectangles);
    
ConstrainedMotionRectanglesResultsCacheSingleton.getInstance()!.add(new MotionRectanglesResultsFrameCacheable(constrainedMotionRectangles, imageComparisonInfo!.getFrameTwo()));
    
this.fireEvent(new MotionRectanglesResultsEvent(this, imageComparisonInfo!.getFrameTwo(), constrainedMotionRectangles as MotionRectangles));
    
this.imageComparisonInfoVector!.remove(imageComparisonResultsEvent);
    
this.index++;
    
this.logUtil!.putF(CommonLabels.getInstance()!.ELAPSED +timeHelper!.getElapsedTNT(), this, this.commonStrings!.RUN);
    
this.setRunning(false);
    
this.logUtil!.putF(this.commonStrings!.END, this, this.commonStrings!.RUN);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.RUN, e);
    
}

}


};

            

