
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCommandCanvas.h"

class BasicPaintablesCanvas: public GameCommandCanvas {

    private: std::vector<Paintable> paintableArray;

    private: ColorFillBasePaintable colorFillPaintable;

public: BasicPaintablesCanvas(CommandListener cmdListener, std::string name, AllBinaryGameLayerManager allBinaryGameLayerManager, std::vector<Paintable> paintableArray){
            super(cmdListener, name, allBinaryGameLayerManager.getBackgroundBasicColor(), allBinaryGameLayerManager.getForegroundBasicColor());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->paintableArray= paintableArray;
    
this->colorFillPaintable= ColorFillPaintableFactory::getInstance().getInstance(allBinaryGameLayerManager.getBackgroundBasicColor(), false);
    
}


    public: void paint(Graphics graphics){
this->colorFillPaintable.paint(graphics);
    
graphics.setColor(this->foregroundColor);
    




                        for (
    int32_t index = this->paintableArray.size() -1;index >= 0; index--)
        {
this->paintableArray[index]!.paint(graphics);
    
}

super.paint(graphics);
    
}


};

            

