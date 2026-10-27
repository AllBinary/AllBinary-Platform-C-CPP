
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/image/PaintableToImageUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/geographic/map/MiniMapLayer.h"

class ImageMiniMapLayer: public MiniMapLayer {

    private: Image* image = NullImage::NULL_IMAGE;

public: ImageMiniMapLayer(BasicGeographicMap* geographicMapInterface, ViewPositionBase* viewPosition) : MiniMapLayer(geographicMapInterface, viewPosition){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    protected: void init(){

    int32_t aWidth = this->allBinaryTiledLayer.getWidth();;
    

    int32_t aHeight = this->allBinaryTiledLayer.getHeight();;
    
this->image= PaintableToImageUtil::getImage(this->allBinaryTiledLayer, aWidth, aHeight);
    
}


    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paint(Graphics* graphics){
graphics->drawImage(this->image, this->x, this->y, this->anchor);
    
this->paintDots(graphics);
    
}


};

            

