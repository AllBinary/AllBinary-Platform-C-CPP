
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class CommandListener;
class Font;
class Graphics;
class NullCommandListener;
class Processor;
class GameCommandsFactory;
class Features;
class InputFeatureFactory;
class RepaintBehavior;
class GameInputStrings;
class GameKey;
class GameKeyFactory;
class PlatformInputMappingFactory;
class DownGameKeyEventHandler;
class GameKeyEvent;
class GameKeyEventFactory;
class GameKeyEventHandler;
class UpGameKeyEventHandler;
class InputToGameKeyMapping;
class PointFactory;
class Rectangle;
class BasicColor;
class CanvasStrings;
class DisplayInfoSingleton;
#include <org/allbinary/graphics/displayable/MyCanvas.h>
class DisplayChangeEvent;
class DisplayChangeEventHandler;
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>
class ScreenRepaintProcessorFactory;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class CommandCurrentSelectionFormFactory;
class FormPaintable;
class FormTypeFactory;
class PaintableForm;
class ScrollSelectionForm;
class ScrollSelectionFormNoneFactory;
class CommandTextItemArrayFactory;
class ABCustomItem;
class AllCommandsVisitor;
class NullPaintable;
class Paintable;
class BasicMotionGesturesHandler;
class ForcedLogUtil;
class StringMaker;
class StringUtil;
class AllBinaryEventObject;
class EventStrings;
class CommonSeps;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/MenuListener.h"
class NoMenuInputProcessor;
class BasicMenuInputProcessor;
class ImmediateCommandFormInputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameCommandCanvas: public MyCanvas, public virtual MenuListener, public virtual DisplayChangeEventListener, public virtual UpdateMyFontInterface {

    private: static inline const int32_t id = 0;

    private: Processor* repaintProcessor;

    /*protected*/ public: GameInputStrings* gameInputStrings;

    /*protected*/ public: BasicColor* foregroundBasicColor;

    /*protected*/ public: BasicColor* backgroundBasicColor;

    /*protected*/ public: InputToGameKeyMapping* inputToGameKeyMapping;

    /*protected*/ public: GameKeyFactory* gameKeyFactory;

    private: GameKeyEventFactory* gameKeyEventFactory;

    private: DownGameKeyEventHandler* downGameKeyEventHandler;

    private: UpGameKeyEventHandler* upGameKeyEventHandler;

    public: RepaintBehavior* repaintBehavior;

    /*protected*/ public: MyFontProcessor* updateMyFontProcessor;

    /*protected*/ public: MyFontProcessor* myFontProcessor;

    /*protected*/ public: int32_t foregroundColor;

    /*protected*/ public: int32_t backgroundColor;

    private: BasicMenuInputProcessor* menuInputProcessor;

    private: Paintable* menuPaintable;

    private: PaintableForm* menuForm;

    private: bool isSingleKeyRepeatableProcessing;

    /*protected*/ public: int32_t fontHeight = 0;

public: GameCommandCanvas(CommandListener* cmdListener, std::string name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent);

    public: void initCommands(CommandListener* cmdListener);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initMenu();

                //@Throws(Exception.constructor)
            
    public: ScrollSelectionForm* createForm();

    public: Rectangle* createRectangle(int32_t size);

    public: void open();

    public: void close();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: int32_t getSourceId();

    public: void keyPressed(int32_t keyCode);

    public: void keyReleased(int32_t keyCode);

    public: void keyRepeated(int32_t keyCode);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    private: void addGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated);

    private: void removeGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated);

    public: void paint(Graphics* graphics);

    private: void setMenuInputProcessor(BasicMenuInputProcessor* menuInputProcessor);

    /*protected*/ public: BasicMenuInputProcessor* getMenuInputProcessor();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCommandListener.h>)
#include <javax/microedition/lcdui/NullCommandListener.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/InputFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/displayable/RepaintBehavior.h>)
#include <org/allbinary/game/displayable/RepaintBehavior.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInputStrings.h>)
#include <org/allbinary/game/input/GameInputStrings.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyFactory.h>)
#include <org/allbinary/game/input/GameKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/PlatformInputMappingFactory.h>)
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/DownGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/UpGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h>)
#include <org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h>)
#include <org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/FormPaintable.h>)
#include <org/allbinary/graphics/form/FormPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/form/FormTypeFactory.h>)
#include <org/allbinary/graphics/form/FormTypeFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/PaintableForm.h>)
#include <org/allbinary/graphics/form/PaintableForm.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h>)
#include <org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>)
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/validation/AllCommandsVisitor.h>)
#include <org/allbinary/graphics/form/item/validation/AllCommandsVisitor.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>)
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/MenuListener.h")
#include "org/allbinary/game/displayable/canvas/MenuListener.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ImmediateCommandFormInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/ImmediateCommandFormInputProcessor.h"
#endif

        #endif
    
