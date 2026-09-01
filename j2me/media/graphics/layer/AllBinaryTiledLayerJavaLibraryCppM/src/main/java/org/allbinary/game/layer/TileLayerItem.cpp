
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Screen.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItemInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryTiledLayer.h"

class TileLayerItem: public ABCustomItem, public ABCustomItemInterface {

    private: AllBinaryTiledLayer tiledLayer;

public: TileLayerItem(std::string label, AllBinaryTiledLayer tiledLayer, int32_t layout, std::string altText, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(label, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->tiledLayer= tiledLayer;
    
}


    public: void setOwner(Screen owner){
}


    public: int32_t getMinimumWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tiledLayer.getWidth();;
    
}


    public: int32_t getMinimumHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tiledLayer.getHeight();;
    
}


    protected: int32_t getMinContentHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tiledLayer.getHeight();;
    
}


    protected: int32_t getMinContentWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tiledLayer.getWidth();;
    
}


    protected: int32_t getPrefContentHeight(int32_t width){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tiledLayer.getHeight();;
    
}


    protected: int32_t getPrefContentWidth(int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tiledLayer.getWidth();;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->tiledLayer.setPosition(x, y, this->tiledLayer.getZP());
    
this->tiledLayer.paint(graphics);
    
}


    public: void paintUnselected(Graphics graphics, int32_t x, int32_t y){
}


};

            

