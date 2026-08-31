
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

public constructor (CommandListener cmdListener, string name, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(name, CanvasStrings.getInstance()!.EMPTY_CHILD_NAME_LIST);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.repaintBehavior= RepaintBehavior.getInstance();
    
this.foregroundBasicColor= foregroundBasicColor;
    
this.backgroundBasicColor= backgroundBasicColor;
    
this.foregroundColor= this.foregroundBasicColor!.intValue();
    
this.backgroundColor= this.backgroundBasicColor!.intValue();
    
this.initCommands(cmdListener);
    

                        if(cmdListener != NullCommandListener.NULL_COMMAND_LISTENER)
                        
                                    {
                                    
        try {
            this.initMenu();
    
this.repaintProcessor!.process();
    

                //: 
} catch(e) 
            {



                            throw new RuntimeException();
                    
}


                                    }
                                
}


    public updateMeasurement(Graphics graphics){

        try {
            
    font: Font = graphics.getFont()!;;
    
this.logUtil!.putF(new StringMaker().append(this.commonStrings!.START)!.append(this.canvasStrings!.FD_WIDTH)!.appendint(MyFontProcessor.defaultCharWidth(font))!.append(this.canvasStrings!.FD_HEIGHT)!.appendint(font.getHeight())!.toString(), this, this.canvasStrings!.UPDATE_MEASUREMENT);
    
this.fontHeight= font.getHeight();
    

    rectangle: Rectangle = this.createRectangle(this.menuForm!.size())!;;
    
this.menuForm!.init(rectangle, FormTypeFactory.getInstance()!.VERTICAL_CENTER_FORM);
    
this.update();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.canvasStrings!.ON_DISPLAY_CHANGE_EVENT, e);
    
}

this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


    public onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){
this.logUtil!.putF(new StringMaker().append(this.commonStrings!.START)!.append(DisplayInfoSingleton.getInstance()!.toString())!.toString(), this, this.canvasStrings!.ON_DISPLAY_CHANGE_EVENT);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public initCommands(CommandListener cmdListener){
this.removeAllCommands();
    
this.addCommand(GameCommandsFactory.getInstance()!.CLOSE_AND_SHOW_GAME_CANVAS);
    
this.setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    initMenu(){

    form: ScrollSelectionForm = this.createForm()!;;
    
this.menuForm= form;
    

                        if(form != ScrollSelectionFormNoneFactory.getInstance())
                        
                                    {
                                    this.setMenuInputProcessor(new ImmediateCommandFormInputProcessor(new BasicArrayListD(),  -1, this, form));
    
this.menuPaintable= new FormPaintable(form);
    

                                    }
                                
this.repaintBehavior!.onChangeRepaint(this);
    
}


                //@Throws(Exception.constructor)
            
    public ScrollSelectionForm createForm(){

    items: std::vector<ABCustomItem> = new CommandTextItemArrayFactory(new AllCommandsVisitor()).getInstance(this.getCommandStack() as Vector<any>, this.backgroundBasicColor, this.foregroundBasicColor)!;;
    

    rectangle: Rectangle = this.createRectangle(items.length)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommandCurrentSelectionFormFactory.getInstance(StringUtil.getInstance()!.EMPTY_STRING, items, rectangle, FormTypeFactory.getInstance()!.VERTICAL_CENTER_FORM, 15, false, this.backgroundBasicColor, this.foregroundBasicColor);;
    
}


    public Rectangle createRectangle(int32_t size){

    height: int32_t = size *this.fontHeight;;
    

    startY: int32_t = (this.displayInfo!.getLastHeight() *2 /3) -height;;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    rectangle: Rectangle = new Rectangle(pointFactory!.createXY(30, startY), this.displayInfo!.getLastWidth() -30, startY);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangle;
    
}


    public open(){
this.logUtil!.putF(this.commonStrings!.START, this, "open");
    
BasicMotionGesturesHandler.getInstance()!.addListenerInterface(this.getMenuInputProcessor());
    
GameKeyEventHandler.getInstance()!.addListener(this.getMenuInputProcessor());
    
DisplayChangeEventHandler.getInstance()!.addListenerInterface(this);
    
}


    public close(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CLOSE);
    
BasicMotionGesturesHandler.getInstance()!.removeListener(this.getMenuInputProcessor());
    
GameKeyEventHandler.getInstance()!.removeListener(this.getMenuInputProcessor());
    
DisplayChangeEventHandler.getInstance()!.removeListener(this);
    
}


                //@Throws(Exception.constructor)
            
    public update(){
this.repaintProcessor!.process();
    
}


    public int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameCommandCanvas.id;
    
}


    public keyPressed(int32_t keyCode){
this.keyPressedByDevice(keyCode, 0);
    
}


    public keyReleased(int32_t keyCode){
this.keyReleasedByDevice(keyCode, 0);
    
}


    public keyRepeated(int32_t keyCode){
this.keyRepeatedByDevice(keyCode, 0);
    
}


    public keyPressedByDevice(int32_t keyCode, int32_t deviceId){
this.logUtil!.putF(new StringMaker().append(CommonSeps.getInstance()!.SPACE)!.appendint(keyCode)!.toString(), this, this.gameInputStrings!.KEY_PRESSED);
    
this.addGameKeyEvent(keyCode, 0, false);
    
}


    public keyReleasedByDevice(int32_t keyCode, int32_t deviceId){
this.removeGameKeyEvent(keyCode, deviceId, false);
    
}


    public keyRepeatedByDevice(int32_t keyCode, int32_t deviceId){

                        if(this.isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this.addGameKeyEvent(keyCode, deviceId, true);
    

                                    }
                                
}


    addGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated){

        try {
            
    gameKey: GameKey = this.inputToGameKeyMapping!.getInstanceForCanvas(this, keyCode)!;;
    

                        if(gameKey != this.gameKeyFactory!.NONE)
                        
                                    {
                                    
    gameKeyEvent: GameKeyEvent = this.gameKeyEventFactory!.getInstanceForInput(this, gameKey)!;;
    
this.downGameKeyEventHandler!.fireEvent(gameKeyEvent);
    
this.downGameKeyEventHandler!.getInstanceForDevice(deviceId)!.fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this.logUtil!.putF(new StringMaker().append(this.gameInputStrings!.NO_KEY)!.appendint(keyCode)!.toString(), this, this.gameInputStrings!.ADD_KEY_EVENT);
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put("Key Event Error", this, this.gameInputStrings!.ADD_KEY_EVENT, e);
    
}

}


    removeGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated){

        try {
            
    gameKey: GameKey = this.inputToGameKeyMapping!.getInstanceForCanvas(this, keyCode)!;;
    

                        if(gameKey != this.gameKeyFactory!.NONE)
                        
                                    {
                                    
    gameKeyEvent: GameKeyEvent = this.gameKeyEventFactory!.getInstanceForInput(this, gameKey)!;;
    
this.upGameKeyEventHandler!.fireEvent(gameKeyEvent);
    
this.upGameKeyEventHandler!.getInstanceForDevice(deviceId)!.fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this.logUtil!.putF(new StringMaker().append(this.gameInputStrings!.NO_KEY)!.appendint(keyCode)!.toString(), this, this.gameInputStrings!.REMOVE_KEY_EVENT);
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put("Key Event Error", this, this.gameInputStrings!.REMOVE_KEY_EVENT, e);
    
}

}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    
this.menuPaintable!.paint(graphics);
    
this.repaintBehavior!.repaint(this);
    
}


    setMenuInputProcessor(BasicMenuInputProcessor menuInputProcessor){
this.menuInputProcessor= menuInputProcessor;
    
}


    BasicMenuInputProcessor getMenuInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.menuInputProcessor;
    
}


};

            

