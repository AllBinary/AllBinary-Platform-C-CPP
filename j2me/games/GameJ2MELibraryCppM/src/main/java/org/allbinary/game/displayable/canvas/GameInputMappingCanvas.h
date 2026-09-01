
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

class GameInputMappingCanvas: public GameCommandCanvas, public InputMappingInterface {

    public: static const std::string NAME = "GameInputMappingCanvas";

    public: static const Command DISPLAY = Command("Controls", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 2);

    public: static const Command DEFAULT = Command("Default", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 2);

    private: ProcessPaintable paintable;

    private: InputMappingHelpPaintable helpPaintable;

    protected: ColorFillBasePaintable colorFillPaintable;

    private: PersistentInputMapping inputMapping;

    private: const GameKey NONE = GameKeyFactory::getInstance().NONE;

    private: AbeClientInformationInterface abeClientInformation;

    private: GameKey selectedGameKey = this->NONE;

    private: Input selectedInput = this->NONE;

public: GameInputMappingCanvas(AbeClientInformationInterface abeClientInformation, CommandListener commandListener, AllBinaryGameLayerManager allBinaryGameLayerManager, HelpPaintable helpPaintable);

    public: void close();

    public: void initCommands(CommandListener cmdListener);

    public: void keyPressed(int32_t keyCode);

    public: void keyReleased(int32_t keyCode);

    public: void keyRepeated(int32_t keyCode);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    private: const InputFactory inputFactory = InputFactory::getInstance();

    private: void addGameKey(int32_t keyCode, bool repeated);

                //@Throws(Exception.constructor)
            
    public: void processInputMapping(GameKey gameKey, Input input);

    private: void setSelectedAction(GameKey gameKey);

                //@Throws(Exception.constructor)
            
    private: void gameActionCrud(GameKey gameKey, Input input);

                //@Throws(Exception.constructor)
            
    private: void addNewMapping(GameKey gameKey, Input input);

                //@Throws(Exception.constructor)
            
    private: void deleteCurrentMapping();

                //@Throws(Exception.constructor)
            
    public: void setDefault();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H
