
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ABSTRACTINPUTROBOT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ABSTRACTINPUTROBOT_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HelpSet helpSet;

public: AbstractInputRobot(HelpSet helpSet);

    public: HelpSet getHelpSet();

    public: void mouseMove(Point point);

                //@Throws(Exception.constructor)
            
    public: void mouseMoveToTarget(Rectangle rectangle, Integer x, Integer y);

                //@Throws(Exception.constructor)
            
    public: void mouseMoveToTarget(Rectangle rectangle);

    public: void mouseMove(Integer x, Integer y);

    private: void setHelpSet(HelpSet helpSet);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ABSTRACTINPUTROBOT_H
