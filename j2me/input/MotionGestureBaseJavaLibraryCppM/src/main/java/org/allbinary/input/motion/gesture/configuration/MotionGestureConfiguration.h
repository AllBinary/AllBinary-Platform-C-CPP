
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H

            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionGestureConfiguration
            : public Object
         {

    private: bool diagonalMotionGestureAllowed = true;

    private: int32_t diagonalTolerance = 7;

    private: int32_t minimumMotionGesture = 9;

    private: std::string button = StringUtil::getInstance().EMPTY_STRING;

    private: BasicColor color = BasicColorFactory::getInstance().BLUE;

    private: bool executingActions = true;

    private: int32_t mouseButtonMask = 0;

    private: BasicArrayList activeCommands = BasicArrayListD();

public: MotionGestureConfiguration();

    public: void addMotionGestureAction(BasicArrayList list, CompleteMotionGestureInputEvent commandAction);

    public: void clearMotionGestureAction();

    public: BasicArrayList getAssociateCommandActionsList();

    public: bool isDiagonalMotionGestureAllowed();

    public: bool isExecutingActionsAllowed();

    public: void setExecutingActionsAllowed(bool executingActionAllowed);

    public: void setDiagonalMotionGestureAllowed(bool diagonalMotionGestureAllowed);

    public: int32_t getDiagonalTolerance();

    public: void setDiagonalTolerance(int32_t diagonalTolerance);

    public: int32_t getMinimumMotionGesture();

    public: void setMinimumMotionGesture(int32_t minimumMotionGesture);

    public: std::string getButton();

    public: void setButton(std::string button);

    public: BasicColor getColor();

    public: void setColor(BasicColor color);

    public: int32_t getMouseButtonMask();

    public: void setMouseButtonMask(int32_t mouseButtonMask);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H
