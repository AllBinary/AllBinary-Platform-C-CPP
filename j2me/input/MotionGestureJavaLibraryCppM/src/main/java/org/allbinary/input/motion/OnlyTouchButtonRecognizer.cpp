
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/motion/button/TouchButtonRecognizer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRecognizer.h"

class OnlyTouchButtonRecognizer: public MotionRecognizer {
        

    private: const touchButtonRecognizer: TouchButtonRecognizer;

    private: touchButtonProcessing: bool = false;

public constructor (){

            super();
        this.touchButtonRecognizer= new TouchButtonRecognizer();
    
}


                //@Throws(Exception.constructor)
            
    public processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this.touchButtonRecognizer!.pressTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    this.touchButtonProcessing= true;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this.touchButtonProcessing)
                        
                                    {
                                    this.touchButtonProcessing= false;
    

                                    }
                                

                        if(this.touchButtonRecognizer!.releaseTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){

                        if(this.touchButtonProcessing)
                        
                                    {
                                    this.touchButtonRecognizer!.pressTouchButtonInput(x, y, deviceId);
    

                                    }
                                
}


};

            

