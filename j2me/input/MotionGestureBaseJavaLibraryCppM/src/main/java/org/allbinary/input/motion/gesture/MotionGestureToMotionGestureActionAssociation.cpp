
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

    private: BasicArrayList list;

    private: CompleteMotionGestureInputEvent motionGestureAction;

public: MotionGestureToMotionGestureActionAssociation(BasicArrayList list, CompleteMotionGestureInputEvent commandAction){
this->list= list;
    
this->motionGestureAction= commandAction;
    
}


    public: BasicArrayList getMotionGesture(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


    public: void setMotionGestures(BasicArrayList list){
this->list= list;
    
}


    public: CompleteMotionGestureInputEvent getCommandAction(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionGestureAction;
    
}


    public: void setMotionGestureAction(CompleteMotionGestureInputEvent commandAction){
this->motionGestureAction= commandAction;
    
}


    public: bool isMotionGestureArrayEquals(BasicArrayList aList){

    int32_t size = aList.size();;
    

                        if(this->list.size() != size)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                




                        for (
    int32_t i = size -1;i >= 0; i--)
        {

                        if(aList.objectArray[i] != this->list.objectArray[i])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

