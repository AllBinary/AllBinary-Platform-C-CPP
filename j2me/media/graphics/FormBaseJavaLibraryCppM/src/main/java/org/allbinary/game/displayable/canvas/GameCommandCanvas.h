
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

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Vector.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MenuListener.h"
#include "NoMenuInputProcessor.h"
#include "BasicMenuInputProcessor.h"
#include "ImmediateCommandFormInputProcessor.h"

class GameCommandCanvas: public MyCanvas: public MenuListener, public DisplayChangeEventListener, public UpdateMyFontInterface {
        

    private: static const id: int32_t = 0;

    private: const repaintProcessor: Processor = ScreenRepaintProcessorFactory.getInstance()!.create(this)!;

    const gameInputStrings: GameInputStrings = GameInputStrings.getInstance()!;

    const foregroundBasicColor: BasicColor;

    const backgroundBasicColor: BasicColor;

    const inputToGameKeyMapping: InputToGameKeyMapping = PlatformInputMappingFactory.getInstance()!.getPersistentInputMappingInstance()!.getInputMapping()!;

    const gameKeyFactory: GameKeyFactory = GameKeyFactory.getInstance()!;

    private: const gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;

    private: const downGameKeyEventHandler: DownGameKeyEventHandler = DownGameKeyEventHandler.getInstance()!;

    private: const upGameKeyEventHandler: UpGameKeyEventHandler = UpGameKeyEventHandler.getInstance()!;

    public const repaintBehavior: RepaintBehavior;

    const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    foregroundColor: int32_t;

    backgroundColor: int32_t;

    private: menuInputProcessor: BasicMenuInputProcessor = NoMenuInputProcessor.getInstance()!;

    private: menuPaintable: Paintable = NullPaintable.getInstance()!;

    private: menuForm: PaintableForm = PaintableForm.getNullPaintableForm()!;

    private: isSingleKeyRepeatableProcessing: bool = Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS)!;

    fontHeight: int32_t = 0;

public constructor (CommandListener cmdListener, string name, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public updateMeasurement(Graphics graphics);

    public onEvent(AllBinaryEventObject eventObject);

    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent);

    public initCommands(CommandListener cmdListener);

                //@Throws(Exception.constructor)
            
    initMenu();

                //@Throws(Exception.constructor)
            
    public ScrollSelectionForm createForm();

    public Rectangle createRectangle(int32_t size);

    public open();

    public close();

                //@Throws(Exception.constructor)
            
    public update();

    public int32_t getSourceId();

    public keyPressed(int32_t keyCode);

    public keyReleased(int32_t keyCode);

    public keyRepeated(int32_t keyCode);

    public keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    public keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    addGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated);

    removeGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated);

    public paint(Graphics graphics);

    setMenuInputProcessor(BasicMenuInputProcessor menuInputProcessor);

    BasicMenuInputProcessor getMenuInputProcessor();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_H
