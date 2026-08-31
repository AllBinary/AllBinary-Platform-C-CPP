
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
        



#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScrollMapEvent: public AllBinaryEventObject {
        

    private: dx: int32_t= 0;

    private: dy: int32_t= 0;

public constructor (any = {} anyType){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public setDx(int32_t dx){
this.dx= dx;
    
}


    public int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dx;
    
}


    public setDy(int32_t dy){
this.dy= dy;
    
}


    public int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dy;
    
}


    public setDxDy(int32_t dx, int32_t dy){
this.dx= dx;
    
this.dy= dy;
    
}


};

            

