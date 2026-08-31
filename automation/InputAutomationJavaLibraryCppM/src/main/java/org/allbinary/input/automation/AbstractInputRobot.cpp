
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <javax/help/HelpSet.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Point.h"
#include "PointHelper.h"
#include "Rectangle.h"

class AbstractInputRobot
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: helpSet: HelpSet;

public constructor (HelpSet helpSet){

            super();
        this.setHelpSet(helpSet);
    
}


    public HelpSet getHelpSet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.helpSet;
    
}


    public mouseMove(Point point){
this.mouseMove(point.x, point.y);
    
this.logUtil!.putF("Moved Mouse To: x: " +point.x +" y: " +point.y, this, "moveMouse");
    
}


                //@Throws(Exception.constructor)
            
    public mouseMoveToTarget(Rectangle rectangle, Integer x, Integer y){

    point: Point = PointHelper.getCenterPoint(rectangle)!;;
    
this.mouseMove(point.x +x, point.y +y);
    
this.logUtil!.putF("Moved Mouse To: x: " +point.x +" y: " +point.y +" in the middle of: " +rectangle, this, "moveMouseToTarget");
    
}


                //@Throws(Exception.constructor)
            
    public mouseMoveToTarget(Rectangle rectangle){
this.mouseMoveToTarget(rectangle, 0, 0);
    
}


    public mouseMove(Integer x, Integer y){



                            throw new RuntimeException();
                    
}


    setHelpSet(HelpSet helpSet){
this.helpSet= helpSet;
    
}


};

            

