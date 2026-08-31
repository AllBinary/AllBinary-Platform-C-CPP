
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
        

    private: diagonalMotionGestureAllowed: bool = true;

    private: diagonalTolerance: int32_t = 7;

    private: minimumMotionGesture: int32_t = 9;

    private: button: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: color: BasicColor = BasicColorFactory.getInstance()!.BLUE;

    private: executingActions: bool = true;

    private: mouseButtonMask: int32_t = 0;

    private: activeCommands: BasicArrayList = new BasicArrayListD();

public constructor ();

    public addMotionGestureAction(BasicArrayList list, CompleteMotionGestureInputEvent commandAction);

    public clearMotionGestureAction();

    public BasicArrayList getAssociateCommandActionsList();

    public bool isDiagonalMotionGestureAllowed();

    public bool isExecutingActionsAllowed();

    public setExecutingActionsAllowed(bool executingActionAllowed);

    public setDiagonalMotionGestureAllowed(bool diagonalMotionGestureAllowed);

    public int32_t getDiagonalTolerance();

    public setDiagonalTolerance(int32_t diagonalTolerance);

    public int32_t getMinimumMotionGesture();

    public setMinimumMotionGesture(int32_t minimumMotionGesture);

    public string getButton();

    public setButton(string button);

    public BasicColor getColor();

    public setColor(BasicColor color);

    public int32_t getMouseButtonMask();

    public setMouseButtonMask(int32_t mouseButtonMask);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H
