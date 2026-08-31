
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_H
        #define ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/Layer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaintableLayerComposite: public Paintable {
        

    private: const paintableArray: std::vector<Layer>;

public constructor (std::vector<Layer> paintableArray);

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PAINTABLELAYERCOMPOSITE_H
