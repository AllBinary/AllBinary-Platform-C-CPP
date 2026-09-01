
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: ScreenScavangerRobot(){
}


                //@Throws(Exception.constructor)
            
    public: std::vector<BufferedImage> getScreenAsBufferedImages(){
this->logUtil.putF(this->commonStrings.START, this, "getScreenAsBufferedImages");
    

    Dimension dimScreenSize = Toolkit::getDefaultToolkit().getScreenSize();;
    

    Rectangle rectScreenSize = Rectangle(dimScreenSize);;
    

    Hashtable<any, any> robotHashtable = InputRobotFactory::getInstance().get();;
    

    std::vector<BufferedImage> bufferedImageArray = new Array(1);;
    

    int32_t index = 0;;
    

    InputRobotInterface inputRobotInterface = robotHashtable.get("Java Robot") as InputRobotInterface;;
    
bufferedImageArray[index]= inputRobotInterface.createScreenCapture(rectScreenSize);
    
this->logUtil.putF("Finish", this, "getScreenAsBufferedImages");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageArray;
    
}


};

            

