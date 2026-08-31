
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
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Toolkit.h"
#include "Dimension.h"
#include "Rectangle.h"

class ScreenScavangerRobot
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public std::vector<BufferedImage> getScreenAsBufferedImages(){
this.logUtil!.putF(this.commonStrings!.START, this, "getScreenAsBufferedImages");
    

    dimScreenSize: Dimension = Toolkit.getDefaultToolkit()!.getScreenSize()!;;
    

    rectScreenSize: Rectangle = new Rectangle(dimScreenSize);;
    

    robotHashtable: Hashtable<any, any> = InputRobotFactory.getInstance()!.get()!;;
    

    bufferedImageArray: std::vector<BufferedImage> = new Array(1);;
    

    index: int32_t = 0;;
    

    inputRobotInterface: InputRobotInterface = robotHashtable!.get("Java Robot") as InputRobotInterface;;
    
bufferedImageArray[index]= inputRobotInterface!.createScreenCapture(rectScreenSize);
    
this.logUtil!.putF("Finish", this, "getScreenAsBufferedImages");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}


};

            

