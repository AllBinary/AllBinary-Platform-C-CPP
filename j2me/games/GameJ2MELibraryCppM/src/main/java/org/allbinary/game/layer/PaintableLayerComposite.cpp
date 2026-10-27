
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/PaintableLayerComposite.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PaintableLayerComposite::PaintableLayerComposite(std::vector<Layer*> paintableArray){
this->paintableArray= paintableArray;
    
}


    auto PaintableLayerComposite::paint(Graphics* graphics) -> void{




                        for (
    int32_t index = this->paintableArray.size();--index >= 0; )
        {
this->paintableArray[index]->paint(graphics);
    
}

}


    auto PaintableLayerComposite::paintThreed(Graphics* graphics) -> void{

    PaintableInterface* paintableInterface;;
    




                        for (
    int32_t index = this->paintableArray.size();--index >= 0; )
        {
paintableInterface= dynamic_cast<PaintableInterface*>(this->paintableArray[index]);
    
paintableInterface->paintThreed(graphics);
    
}

}




        #endif //ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_CPP
