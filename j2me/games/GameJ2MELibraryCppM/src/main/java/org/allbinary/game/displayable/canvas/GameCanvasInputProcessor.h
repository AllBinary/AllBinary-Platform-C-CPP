
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Canvas;
class GameKey;
class GameKeyEventSourceInterface;
class GameKeyFactory;
#include <org/allbinary/game/input/InputProcessor.h>
class PlatformInputMappingFactory;
class DownGameKeyEventHandler;
class DownKeyEventHandler;
class GameKeyEvent;
class GameKeyEventFactory;
class UpGameKeyEventHandler;
class InputToGameKeyMapping;
class LogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryGameCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameCanvasInputProcessor: public InputProcessor {

    /*protected*/ public: LogUtil* logUtil;

    private: AllBinaryGameCanvas* allBinaryGameCanvas;

    private: DownGameKeyEventHandler* downGameKeyEventHandler;

    private: UpGameKeyEventHandler* upGameKeyEventHandler;

    private: DownKeyEventHandler* downKeyEventHandler;

    private: SmallIntegerSingletonFactory* smallIntegerSingletonFactory;

    private: InputToGameKeyMapping* inputToGameKeyMapping;

public: GameCanvasInputProcessor(AllBinaryGameCanvas* allBinaryGameCanvas);

    private: GameKey* NONE;

    private: GameKeyEventFactory* gameKeyEventFactory;

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(Canvas* canvas, int32_t keyCode, int32_t deviceId);

    private: void removeGameKeyEvent(Canvas* canvas, int32_t keyCode, int32_t deviceId, bool repeated);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyEventSourceInterface.h>)
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyFactory.h>)
#include <org/allbinary/game/input/GameKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/InputProcessor.h>)
#include <org/allbinary/game/input/InputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/input/PlatformInputMappingFactory.h>)
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/DownGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/DownKeyEventHandler.h>)
#include <org/allbinary/game/input/event/DownKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/UpGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

        #endif
    
