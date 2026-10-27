
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Command;
class CommandListener;
class Graphics;
class GameCommandsFactory;
class GameKey;
class GameKeyFactory;
class Input;
class InputFactory;
class PlatformInputMappingFactory;
#include <org/allbinary/game/input/mapping/InputMappingInterface.h>
class PersistentInputMapping;
class AllBinaryGameLayerManager;
class ColorFillBasePaintable;
class ColorFillPaintableFactory;
class HelpPaintable;
class InputMappingHelpPaintable;
class ProcessPaintable;
class StringMaker;
class StringUtil;
class AbeClientInformationInterface;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
class GameInputMappingInstructionsCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInputMappingCanvas: public GameCommandCanvas, public InputMappingInterface {

    public: static inline const std::string NAME = "GameInputMappingCanvas";

    private: static Command* DISPLAY_owner();
    public: static Command* DISPLAY;

    private: static Command* DEFAULT_owner();
    public: static Command* DEFAULT;

    private: ProcessPaintable* paintable;

    private: InputMappingHelpPaintable* helpPaintable;

    /*protected*/ public: ColorFillBasePaintable* colorFillPaintable;

    private: PersistentInputMapping* inputMapping;

    private: GameKey* NONE;

    private: AbeClientInformationInterface* abeClientInformation;

    private: GameKey* selectedGameKey;

    private: Input* selectedInput;

public: GameInputMappingCanvas(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable);

    public: void close();

    public: void initCommands(CommandListener* cmdListener);

    public: void keyPressed(int32_t keyCode);

    public: void keyReleased(int32_t keyCode);

    public: void keyRepeated(int32_t keyCode);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    private: InputFactory* inputFactory;

    private: void addGameKey(int32_t keyCode, bool repeated);

                //@Throws(Exception.constructor)
            
    public: void processInputMapping(GameKey* gameKey, Input* input);

    private: void setSelectedAction(GameKey* gameKey);

                //@Throws(Exception.constructor)
            
    private: void gameActionCrud(GameKey* gameKey, Input* input);

                //@Throws(Exception.constructor)
            
    private: void addNewMapping(GameKey* gameKey, Input* input);

                //@Throws(Exception.constructor)
            
    private: void deleteCurrentMapping();

                //@Throws(Exception.constructor)
            
    public: void setDefault();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyFactory.h>)
#include <org/allbinary/game/input/GameKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/PlatformInputMappingFactory.h>)
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/InputMappingInterface.h>)
#include <org/allbinary/game/input/mapping/InputMappingInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/PersistentInputMapping.h>)
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/paint/ColorFillBasePaintable.h>)
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>
#endif
#if __has_include(<org/allbinary/game/paint/ColorFillPaintableFactory.h>)
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>
#endif
#if __has_include(<org/allbinary/game/paint/help/HelpPaintable.h>)
#include <org/allbinary/game/paint/help/HelpPaintable.h>
#endif
#if __has_include(<org/allbinary/game/paint/help/InputMappingHelpPaintable.h>)
#include <org/allbinary/game/paint/help/InputMappingHelpPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/ProcessPaintable.h>)
#include <org/allbinary/graphics/paint/ProcessPaintable.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCommandCanvas.h")
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h")
#include "org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h"
#endif

        #endif
    
