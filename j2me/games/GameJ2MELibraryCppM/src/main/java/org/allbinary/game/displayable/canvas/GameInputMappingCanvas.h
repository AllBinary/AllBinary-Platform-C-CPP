
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/mapping/InputMappingInterface.h>

      
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/game/paint/help/HelpPaintable.h>

      
#include <org/allbinary/game/paint/help/InputMappingHelpPaintable.h>

      
#include <org/allbinary/graphics/paint/ProcessPaintable.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCommandCanvas.h"
#include "GameInputMappingInstructionsCanvas.h"

class GameInputMappingCanvas: public GameCommandCanvas: public InputMappingInterface {
        

    public static const NAME: string = "GameInputMappingCanvas";

    public static const DISPLAY: Command = new Command("Controls", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 2);

    public static const DEFAULT: Command = new Command("Default", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 2);

    private: const paintable: ProcessPaintable;

    private: const helpPaintable: InputMappingHelpPaintable;

    const colorFillPaintable: ColorFillBasePaintable;

    private: const inputMapping: PersistentInputMapping;

    private: const NONE: GameKey = GameKeyFactory.getInstance()!.NONE;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: selectedGameKey: GameKey = this.NONE;

    private: selectedInput: Input = this.NONE;

public constructor (AbeClientInformationInterface abeClientInformation, CommandListener commandListener, AllBinaryGameLayerManager allBinaryGameLayerManager, HelpPaintable helpPaintable);

    public close();

    public initCommands(CommandListener cmdListener);

    public keyPressed(int32_t keyCode);

    public keyReleased(int32_t keyCode);

    public keyRepeated(int32_t keyCode);

    public keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    private: const inputFactory: InputFactory = InputFactory.getInstance()!;

    addGameKey(int32_t keyCode, bool repeated);

                //@Throws(Exception.constructor)
            
    public processInputMapping(GameKey gameKey, Input input);

    setSelectedAction(GameKey gameKey);

                //@Throws(Exception.constructor)
            
    gameActionCrud(GameKey gameKey, Input input);

                //@Throws(Exception.constructor)
            
    addNewMapping(GameKey gameKey, Input input);

                //@Throws(Exception.constructor)
            
    deleteCurrentMapping();

                //@Throws(Exception.constructor)
            
    public setDefault();

                //@Throws(Exception.constructor)
            
    public update();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H
