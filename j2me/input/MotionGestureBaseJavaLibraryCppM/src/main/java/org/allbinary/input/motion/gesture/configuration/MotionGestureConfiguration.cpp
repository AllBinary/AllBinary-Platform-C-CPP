
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

public: MotionGestureConfiguration(){
}


    public: void addMotionGestureAction(BasicArrayList list, CompleteMotionGestureInputEvent commandAction){
this->activeCommands.add(MotionGestureToMotionGestureActionAssociation(list, commandAction));
    
}


    public: void clearMotionGestureAction(){
this->activeCommands.clear();
    
}


    public: BasicArrayList getAssociateCommandActionsList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->activeCommands;
    
}


    public: bool isDiagonalMotionGestureAllowed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->diagonalMotionGestureAllowed;
    
}


    public: bool isExecutingActionsAllowed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->executingActions;
    
}


    public: void setExecutingActionsAllowed(bool executingActionAllowed){
this->executingActions= executingActionAllowed;
    
}


    public: void setDiagonalMotionGestureAllowed(bool diagonalMotionGestureAllowed){
this->diagonalMotionGestureAllowed= diagonalMotionGestureAllowed;
    
}


    public: int32_t getDiagonalTolerance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->diagonalTolerance;
    
}


    public: void setDiagonalTolerance(int32_t diagonalTolerance){
this->diagonalTolerance= diagonalTolerance;
    
}


    public: int32_t getMinimumMotionGesture(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minimumMotionGesture;
    
}


    public: void setMinimumMotionGesture(int32_t minimumMotionGesture){
this->minimumMotionGesture= minimumMotionGesture;
    
}


    public: std::string getButton(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->button;
    
}


    public: void setButton(std::string button){
this->button= button;
    
}


    public: BasicColor getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->color;
    
}


    public: void setColor(BasicColor color){
this->color= color;
    
}


    public: int32_t getMouseButtonMask(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mouseButtonMask;
    
}


    public: void setMouseButtonMask(int32_t mouseButtonMask){
this->mouseButtonMask= mouseButtonMask;
    
}


};

            

