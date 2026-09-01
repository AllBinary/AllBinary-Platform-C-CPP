
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

    private: int32_t dx= 0;

    private: int32_t dy= 0;

public: ScrollMapEvent(Object* anyType){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setDx(int32_t dx){
this->dx= dx;
    
}


    public: int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dx;
    
}


    public: void setDy(int32_t dy){
this->dy= dy;
    
}


    public: int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dy;
    
}


    public: void setDxDy(int32_t dx, int32_t dy){
this->dx= dx;
    
this->dy= dy;
    
}


};

            

