
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CompleteMotionGestureInputEvent;
class BasicColor;
class BasicColorFactory;
class MotionGestureToMotionGestureActionAssociation;
class StringUtil;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionGestureConfiguration
            : public virtual Object
         {

    private: bool diagonalMotionGestureAllowed = true;

    private: int32_t diagonalTolerance = 7;

    private: int32_t minimumMotionGesture = 9;

    private: std::string button;

    private: BasicColor* color;

    private: bool executingActions = true;

    private: int32_t mouseButtonMask = 0;

    private: BasicArrayList* activeCommands;

public: MotionGestureConfiguration();

    public: void addMotionGestureAction(BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction);

    public: void clearMotionGestureAction();

    public: BasicArrayList* getAssociateCommandActionsList();

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

    public: BasicColor* getColor();

    public: void setColor(BasicColor* color);

    public: int32_t getMouseButtonMask();

    public: void setMouseButtonMask(int32_t mouseButtonMask);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEvent.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
