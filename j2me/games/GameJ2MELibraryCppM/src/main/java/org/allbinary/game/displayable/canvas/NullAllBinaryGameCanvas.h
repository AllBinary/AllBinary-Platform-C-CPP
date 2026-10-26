
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_H

            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvasInterface.h"

class NullAllBinaryGameCanvas
            : public Object
        : public AllBinaryGameCanvasInterface {

    public: static const NullAllBinaryGameCanvas NULL_ALLBINARY_GAME_CANVAS = NullAllBinaryGameCanvas();

    public: AllBinaryGameLayerManager getLayerManager();

    public: void addCommand(Command cmd);

    public: int32_t getHeight();

    public: int32_t getWidth();

    public: void removeCommand(Command cmd);

    public: void setCommandListener(CommandListener l);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_H
