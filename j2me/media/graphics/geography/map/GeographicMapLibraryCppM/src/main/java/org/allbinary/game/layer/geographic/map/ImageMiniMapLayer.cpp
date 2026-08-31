
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/image/PaintableToImageUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MiniMapLayer.h"

class ImageMiniMapLayer: public MiniMapLayer {
        

    private: image: Image = NullImage.NULL_IMAGE;

public constructor (BasicGeographicMap geographicMapInterface, ViewPositionBase viewPosition){
            super(geographicMapInterface, viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    init(){

    aWidth: int32_t = this.allBinaryTiledLayer!.getWidth()!;;
    

    aHeight: int32_t = this.allBinaryTiledLayer!.getHeight()!;;
    
this.image= PaintableToImageUtil.getImage(this.allBinaryTiledLayer, aWidth, aHeight);
    
}


    private: anchor: int32_t = Anchor.TOP_LEFT;

    public paint(Graphics graphics){
graphics.drawImage(this.image, this.x, this.y, this.anchor);
    
this.paintDots(graphics);
    
}


};

            

