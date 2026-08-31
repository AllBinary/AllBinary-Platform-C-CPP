
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGINSTRUCTIONSCANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGINSTRUCTIONSCANVAS_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/draw/DrawStringUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCommandCanvas.h"

class GameInputMappingInstructionsCanvas: public GameCommandCanvas {
        

    public static const DISPLAY: Command = new Command("Help", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public static const CLOSE: Command = new Command("Close", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public static const NAME: string = "GameInputMappingInstructionsCanvas";

    private: const drawStringUtil: DrawStringUtil = DrawStringUtil.getInstance()!;

    const TITLE: string = "Input Instructions";

    private: const instructions: std::vector<string> = 
                                                        [
                                                            "Add Input Mapping:","1. Select the desired action by generating a currently defined input for a given action.","(Example: Press the '1' key to select the Fire action)","2. Make the newly desired input for the selected action.","(Example: Press 'f' to add it to the selected action)","Note: If the input is already mapped to another action then it will not be added. You","will need to deleted from the other action before adding it to another.","Warning: Not all keys map for a given platform and show as Unknown.",StringUtil.getInstance()!.EMPTY_STRING,"Remove Input Mapping:","1. Select the desired action by generating a currently defined input for a given action.","(Example: Press the key '1' to select the Fire action)","2. Select a mapped input for the selected action.","(Example: Press the key '1' to select the '1' key input for the selected Fire action)","3. Press the Delete Key."
                                                        ];

    private: colorFillPaintable: ColorFillBasePaintable;

    private: anchor: int32_t = Anchor.TOP_LEFT;

public constructor (CommandListener commandListener, AllBinaryGameLayerManager allBinaryGameLayerManager);

    public initCommands(CommandListener cmdListener);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGINSTRUCTIONSCANVAS_H
