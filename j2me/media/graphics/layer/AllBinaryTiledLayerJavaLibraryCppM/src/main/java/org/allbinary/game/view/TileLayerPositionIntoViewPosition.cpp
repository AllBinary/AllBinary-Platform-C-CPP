
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/layer/NullLayer.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TileLayerPositionIntoViewPosition: public ViewPosition {

    private: Layer tiledLayer = NullLayer::getInstance();

public: TileLayerPositionIntoViewPosition() : ViewPosition(0, 0, 0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getX() -this->tiledLayer.getXP();
    
}


    public: int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getY() -this->tiledLayer.getYP();
    
}


    public: int32_t getZ(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getZ() -this->tiledLayer.getZP();
    
}


    public: void setTiledLayer(AllBinaryTiledLayer tiledLayer){
this->tiledLayer= tiledLayer;
    
}


};

            

