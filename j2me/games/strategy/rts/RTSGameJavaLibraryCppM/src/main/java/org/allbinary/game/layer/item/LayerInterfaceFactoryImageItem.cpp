
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/graphics/form/item/ABCustomImageItem.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerInterfaceFactoryImageItem: public ABCustomImageItem {
        

    private: const animationArray: std::vector<Animation>;

    private: const layerInterfaceFactoryInterface: LayerInterfaceFactoryInterface;

public constructor (string label, Image img, int32_t layout, string altText, BasicColor basicColor, std::vector<Animation> animationArray, LayerInterfaceFactoryInterface layerInterfaceFactoryInterface){
            super(label, img, layout, altText, basicColor, 0);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.animationArray= animationArray;
    
this.layerInterfaceFactoryInterface= layerInterfaceFactoryInterface;
    
}


    public LayerInterfaceFactoryInterface getLayerInterfaceFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layerInterfaceFactoryInterface;
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
super.paintXY(graphics, x, y);
    




                        for (
    index: int32_t = this.animationArray!.length
                ;--index >= 0; )
        {
this.animationArray[index]!.paintXY(graphics, x, y);
    
}

}


};

            

