
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

class RTSLayerInfoPaintable: public InitUpdatePaintable {

    private: InitUpdatePaintable* initUpdatePaintable = NullInitUpdatePaintable::getInstance();

public: RTSLayerInfoPaintable(){
}


    public: void update(){
this->initUpdatePaintable->update();
    
}


    public: void paint(Graphics* graphics){
this->initUpdatePaintable->paint(graphics);
    
}


    public: void updateRTSLayerInfoInit(InitUpdatePaintable* hudPaintable){
this->initUpdatePaintable= hudPaintable;
    
}


    public: void updateRTSLayerInfoSelection(SelectionHudPaintable* hudPaintable){
hudPaintable->updateSelectionInfo();
    
this->initUpdatePaintable= hudPaintable;
    
}


};

            

