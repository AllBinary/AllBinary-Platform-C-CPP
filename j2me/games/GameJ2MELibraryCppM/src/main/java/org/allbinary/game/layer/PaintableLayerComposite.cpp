
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
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaintableLayerComposite: public Paintable {

    private: std::vector<Layer> paintableArray;

public: PaintableLayerComposite(std::vector<Layer> paintableArray){
this->paintableArray= paintableArray;
    
}


    public: void paint(Graphics graphics){




                        for (
    int32_t index = this->paintableArray.size();--index >= 0; )
        {
this->paintableArray[index].paint(graphics);
    
}

}


    public: void paintThreed(Graphics graphics){

    PaintableInterface paintableInterface;;
    




                        for (
    int32_t index = this->paintableArray.size();--index >= 0; )
        {
paintableInterface= this->paintableArray[index];
    
paintableInterface.paintThreed(graphics);
    
}

}


};

            

