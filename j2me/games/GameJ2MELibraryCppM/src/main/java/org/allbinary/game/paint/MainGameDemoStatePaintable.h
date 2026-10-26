
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MainGameDemoStatePaintable: public Paintable {

    private: Paintable ownershipPaintableInterface;

    private: Paintable menuPaintableInterface;

public: MainGameDemoStatePaintable(Paintable ownershipPaintableInterface, Paintable menuPaintableInterface);

    public: void paint(Graphics graphics);

    public: Paintable getOwnershipPaintableInterface();

    public: Paintable getMenuPaintableInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_H
