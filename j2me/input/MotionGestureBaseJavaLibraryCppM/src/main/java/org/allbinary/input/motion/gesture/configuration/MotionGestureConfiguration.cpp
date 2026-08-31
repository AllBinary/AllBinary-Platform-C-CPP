
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

public constructor (){

            super();
        }


    public addMotionGestureAction(BasicArrayList list, CompleteMotionGestureInputEvent commandAction){
this.activeCommands!.add(new MotionGestureToMotionGestureActionAssociation(list, commandAction));
    
}


    public clearMotionGestureAction(){
this.activeCommands!.clear();
    
}


    public BasicArrayList getAssociateCommandActionsList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.activeCommands;
    
}


    public bool isDiagonalMotionGestureAllowed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.diagonalMotionGestureAllowed;
    
}


    public bool isExecutingActionsAllowed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.executingActions;
    
}


    public setExecutingActionsAllowed(bool executingActionAllowed){
this.executingActions= executingActionAllowed;
    
}


    public setDiagonalMotionGestureAllowed(bool diagonalMotionGestureAllowed){
this.diagonalMotionGestureAllowed= diagonalMotionGestureAllowed;
    
}


    public int32_t getDiagonalTolerance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.diagonalTolerance;
    
}


    public setDiagonalTolerance(int32_t diagonalTolerance){
this.diagonalTolerance= diagonalTolerance;
    
}


    public int32_t getMinimumMotionGesture(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minimumMotionGesture;
    
}


    public setMinimumMotionGesture(int32_t minimumMotionGesture){
this.minimumMotionGesture= minimumMotionGesture;
    
}


    public string getButton(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.button;
    
}


    public setButton(string button){
this.button= button;
    
}


    public BasicColor getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.color;
    
}


    public setColor(BasicColor color){
this.color= color;
    
}


    public int32_t getMouseButtonMask(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mouseButtonMask;
    
}


    public setMouseButtonMask(int32_t mouseButtonMask){
this.mouseButtonMask= mouseButtonMask;
    
}


};

            

