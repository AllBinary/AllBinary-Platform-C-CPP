
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullCommandListener.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/displayable/RepaintBehavior.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h>

      
#include <org/allbinary/graphics/form/FormPaintable.h>

      
#include <org/allbinary/graphics/form/FormTypeFactory.h>

      
#include <org/allbinary/graphics/form/PaintableForm.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h>

      
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/form/item/validation/AllCommandsVisitor.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/ImmediateCommandFormInputProcessor.h"

class GameCommandCanvas: public MyCanvas, public MenuListener, public DisplayChangeEventListener, public UpdateMyFontInterface {

    private: static inline const int32_t id = 0;

    private: Processor* repaintProcessor = ScreenRepaintProcessorFactory::getInstance()->create(this);

    protected: GameInputStrings* gameInputStrings = GameInputStrings::getInstance();

    protected: BasicColor* foregroundBasicColor;

    protected: BasicColor* backgroundBasicColor;

    protected: InputToGameKeyMapping* inputToGameKeyMapping = PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance()->getInputMapping();

    protected: GameKeyFactory* gameKeyFactory = GameKeyFactory::getInstance();

    private: GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory::getInstance();

    private: DownGameKeyEventHandler* downGameKeyEventHandler = DownGameKeyEventHandler::getInstance();

    private: UpGameKeyEventHandler* upGameKeyEventHandler = UpGameKeyEventHandler::getInstance();

    public: RepaintBehavior* repaintBehavior;

    protected: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    protected: MyFontProcessor* myFontProcessor = this->updateMyFontProcessor;

    protected: int32_t foregroundColor;

    protected: int32_t backgroundColor;

    private: BasicMenuInputProcessor* menuInputProcessor = NoMenuInputProcessor::getInstance();

    private: Paintable* menuPaintable = NullPaintable::getInstance();

    private: PaintableForm* menuForm = PaintableForm::getNullPaintableForm();

    private: bool isSingleKeyRepeatableProcessing = Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_REPEAT_PRESS);

    protected: int32_t fontHeight = 0;

public: GameCommandCanvas(CommandListener* cmdListener, std::string name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent);

    public: void initCommands(CommandListener* cmdListener);

                //@Throws(Exception.constructor)
            
    protected: void initMenu();

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

    protected: BasicMenuInputProcessor* getMenuInputProcessor();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H
