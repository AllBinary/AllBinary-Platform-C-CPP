
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/ViewPositionBase.h"

class ViewPosition: public ViewPositionBase {

    public: static ViewPosition* getInstanceD(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ViewPosition(0, 0, 0);
    
}


    private: AllBinaryLayer* allbinaryLayer = AllBinaryLayer::NULL_ALLBINARY_LAYER;

protected: ViewPosition(int32_t x, int32_t y, int32_t z) : ViewPositionBase(x, y, z){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->allbinaryLayer->getXP();;
    
}


    public: int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->allbinaryLayer->getYP();;
    
}


    public: int32_t getZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->allbinaryLayer->getZP();;
    
}


    public: int32_t getX2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getX() +this->allbinaryLayer->getWidth();
    
}


    public: int32_t getY2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getY() +this->allbinaryLayer->getHeight();
    
}


    public: int32_t getZ2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this->getZ() +this->allbinaryLayer->getDepth()));
    
}


    public: void setAllbinaryLayer(Object* allbinaryLayer){
this->allbinaryLayer= dynamic_cast<AllBinaryLayer*>(allbinaryLayer as unknown);
    
}


};

            

