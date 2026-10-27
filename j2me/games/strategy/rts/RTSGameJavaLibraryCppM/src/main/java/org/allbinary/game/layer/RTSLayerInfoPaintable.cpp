
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERINFOPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERINFOPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayerInfoPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SelectionHudPaintable.h"


RTSLayerInfoPaintable::RTSLayerInfoPaintable() : initUpdatePaintable(NullInitUpdatePaintable::getInstance()){
}


    auto RTSLayerInfoPaintable::update() -> void{
this->initUpdatePaintable->update();
    
}


    auto RTSLayerInfoPaintable::paint(Graphics* graphics) -> void{
this->initUpdatePaintable->paint(graphics);
    
}


    auto RTSLayerInfoPaintable::updateRTSLayerInfoInit(InitUpdatePaintable* hudPaintable) -> void{
this->initUpdatePaintable= hudPaintable;
    
}


    auto RTSLayerInfoPaintable::updateRTSLayerInfoSelection(SelectionHudPaintable* hudPaintable) -> void{
hudPaintable->updateSelectionInfo();
    
this->initUpdatePaintable= hudPaintable;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERINFOPAINTABLE_CPP
