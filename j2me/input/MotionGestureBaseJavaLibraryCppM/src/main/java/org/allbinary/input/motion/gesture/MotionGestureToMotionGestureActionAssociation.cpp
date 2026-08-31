
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionGestureToMotionGestureActionAssociation
            : public Object
         {
        

    private: list: BasicArrayList;

    private: motionGestureAction: CompleteMotionGestureInputEvent;

public constructor (BasicArrayList list, CompleteMotionGestureInputEvent commandAction){

            super();
        this.list= list;
    
this.motionGestureAction= commandAction;
    
}


    public BasicArrayList getMotionGesture(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


    public setMotionGestures(BasicArrayList list){
this.list= list;
    
}


    public CompleteMotionGestureInputEvent getCommandAction(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.motionGestureAction;
    
}


    public setMotionGestureAction(CompleteMotionGestureInputEvent commandAction){
this.motionGestureAction= commandAction;
    
}


    public bool isMotionGestureArrayEquals(BasicArrayList aList){

    size: int32_t = aList!.size()!;;
    

                        if(this.list.size() != size)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                




                        for (
    i: int32_t = size -1;i >= 0; i--)
        {

                        if(aList!.objectArray[i] != this.list.objectArray[i])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

