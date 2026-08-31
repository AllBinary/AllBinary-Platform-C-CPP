
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectionHudPaintable.h"

class RTSLayerInfoPaintable: public InitUpdatePaintable {
        

    private: initUpdatePaintable: InitUpdatePaintable = NullInitUpdatePaintable.getInstance()!;

public constructor (){

            super();
        }


    public update(){
this.initUpdatePaintable!.update();
    
}


    public paint(Graphics graphics){
this.initUpdatePaintable!.paint(graphics);
    
}


    public updateRTSLayerInfoInit(InitUpdatePaintable hudPaintable){
this.initUpdatePaintable= hudPaintable;
    
}


    public updateRTSLayerInfoSelection(SelectionHudPaintable hudPaintable){
hudPaintable!.updateSelectionInfo();
    
this.initUpdatePaintable= hudPaintable;
    
}


};

            

