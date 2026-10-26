
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
        



#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ViewPositionBase: public GPoint {

    public: static const ViewPositionBase NULL_VIEW_POSITION = ViewPositionBase(0, 0, 0);

protected: ViewPositionBase(int32_t x, int32_t y, int32_t z) : GPoint(x, y, z){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: int32_t getX2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getX();;
    
}


    public: int32_t getY2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getY();;
    
}


    public: int32_t getZ2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getZ();;
    
}


    public: void setAllbinaryLayer(Object* allbinaryLayer){
}


};

            

