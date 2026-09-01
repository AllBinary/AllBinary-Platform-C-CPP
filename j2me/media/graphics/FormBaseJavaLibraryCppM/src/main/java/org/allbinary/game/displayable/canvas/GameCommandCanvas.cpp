
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
        



            #include <vector>
        
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

class GameCommandCanvas: public MyCanvas, public MenuListener, public DisplayChangeEventListener, public UpdateMyFontInterface {

    private: static const int32_t id = 0;

    private: const Processor repaintProcessor = ScreenRepaintProcessorFactory::getInstance().create(this);

    protected: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    protected: BasicColor foregroundBasicColor;

    protected: BasicColor backgroundBasicColor;

    protected: const InputToGameKeyMapping inputToGameKeyMapping = PlatformInputMappingFactory::getInstance().getPersistentInputMappingInstance().getInputMapping();

    protected: const GameKeyFactory gameKeyFactory = GameKeyFactory::getInstance();

    private: const GameKeyEventFactory gameKeyEventFactory = GameKeyEventFactory::getInstance();

    private: const DownGameKeyEventHandler downGameKeyEventHandler = DownGameKeyEventHandler::getInstance();

    private: const UpGameKeyEventHandler upGameKeyEventHandler = UpGameKeyEventHandler::getInstance();

    public: RepaintBehavior repaintBehavior;

    protected: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    protected: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    protected: int32_t foregroundColor;

    protected: int32_t backgroundColor;

    private: BasicMenuInputProcessor menuInputProcessor = NoMenuInputProcessor::getInstance();

    private: Paintable menuPaintable = NullPaintable::getInstance();

    private: PaintableForm menuForm = PaintableForm::getNullPaintableForm();

    private: bool isSingleKeyRepeatableProcessing = Features::getInstance().isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_REPEAT_PRESS);

    protected: int32_t fontHeight = 0;

public: GameCommandCanvas(CommandListener cmdListener, std::string name, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(name, CanvasStrings::getInstance().EMPTY_CHILD_NAME_LIST);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->repaintBehavior= RepaintBehavior::getInstance();
    
this->foregroundBasicColor= foregroundBasicColor;
    
this->backgroundBasicColor= backgroundBasicColor;
    
this->foregroundColor= this->foregroundBasicColor.intValue();
    
this->backgroundColor= this->backgroundBasicColor.intValue();
    
this->initCommands(cmdListener);
    

                        if(cmdListener != NullCommandListener::NULL_COMMAND_LISTENER)
                        
                                    {
                                    
        try {
            this->initMenu();
    
this->repaintProcessor.process();
    

                //: 
} catch(e) 
            {



                            throw RuntimeException();
                    
}


                                    }
                                
}


    public: void updateMeasurement(Graphics graphics){

        try {
            
    Font font = graphics.getFont();;
    
this->logUtil.putF(StringMaker().append(this->commonStrings.START).append(this->canvasStrings.FD_WIDTH).appendint(MyFontProcessor::defaultCharWidth(font)).append(this->canvasStrings.FD_HEIGHT).appendint(font.getHeight()).toString(), this, this->canvasStrings.UPDATE_MEASUREMENT);
    
this->fontHeight= font.getHeight();
    

    Rectangle rectangle = this->createRectangle(this->menuForm.size());;
    
this->menuForm.init(rectangle, FormTypeFactory::getInstance().VERTICAL_CENTER_FORM);
    
this->update();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->canvasStrings.ON_DISPLAY_CHANGE_EVENT, e);
    
}

this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    public: void onDisplayChangeEvent(DisplayChangeEvent displayChangeEvent){
this->logUtil.putF(StringMaker().append(this->commonStrings.START).append(DisplayInfoSingleton::getInstance().toString()).toString(), this, this->canvasStrings.ON_DISPLAY_CHANGE_EVENT);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    public: void initCommands(CommandListener cmdListener){
this->removeAllCommands();
    
this->addCommand(GameCommandsFactory::getInstance().CLOSE_AND_SHOW_GAME_CANVAS);
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    protected: void initMenu(){

    ScrollSelectionForm form = this->createForm();;
    
this->menuForm= form;
    

                        if(form != ScrollSelectionFormNoneFactory::getInstance())
                        
                                    {
                                    this->setMenuInputProcessor(ImmediateCommandFormInputProcessor(BasicArrayListD(),  -1, this, form));
    
this->menuPaintable= FormPaintable(form);
    

                                    }
                                
this->repaintBehavior.onChangeRepaint(this);
    
}


                //@Throws(Exception.constructor)
            
    public: ScrollSelectionForm createForm(){

    std::vector<ABCustomItem> items = CommandTextItemArrayFactory(AllCommandsVisitor()).getInstance(this->getCommandStack() as Vector<any>, this->backgroundBasicColor, this->foregroundBasicColor);;
    

    Rectangle rectangle = this->createRectangle(items.size());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommandCurrentSelectionFormFactory::getInstance(StringUtil::getInstance().EMPTY_STRING, items, rectangle, FormTypeFactory::getInstance().VERTICAL_CENTER_FORM, 15, false, this->backgroundBasicColor, this->foregroundBasicColor);;
    
}


    public: Rectangle createRectangle(int32_t size){

    int32_t height = size *this->fontHeight;;
    

    int32_t startY = (this->displayInfo.getLastHeight() *2 /3) -height;;
    

    PointFactory pointFactory = PointFactory::getInstance();;
    

    Rectangle rectangle = Rectangle(pointFactory.createXY(30, startY), this->displayInfo.getLastWidth() -30, startY);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangle;
    
}


    public: void open(){
this->logUtil.putF(this->commonStrings.START, this, "open");
    
BasicMotionGesturesHandler::getInstance().addListenerInterface(this->getMenuInputProcessor());
    
GameKeyEventHandler::getInstance().addListener(this->getMenuInputProcessor());
    
DisplayChangeEventHandler::getInstance().addListenerInterface(this);
    
}


    public: void close(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CLOSE);
    
BasicMotionGesturesHandler::getInstance().removeListener(this->getMenuInputProcessor());
    
GameKeyEventHandler::getInstance().removeListener(this->getMenuInputProcessor());
    
DisplayChangeEventHandler::getInstance().removeListener(this);
    
}


                //@Throws(Exception.constructor)
            
    public: void update(){
this->repaintProcessor.process();
    
}


    public: int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameCommandCanvas::id;
    
}


    public: void keyPressed(int32_t keyCode){
this->keyPressedByDevice(keyCode, 0);
    
}


    public: void keyReleased(int32_t keyCode){
this->keyReleasedByDevice(keyCode, 0);
    
}


    public: void keyRepeated(int32_t keyCode){
this->keyRepeatedByDevice(keyCode, 0);
    
}


    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId){
this->logUtil.putF(StringMaker().append(CommonSeps::getInstance().SPACE).appendint(keyCode).toString(), this, this->gameInputStrings.KEY_PRESSED);
    
this->addGameKeyEvent(keyCode, 0, false);
    
}


    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId){
this->removeGameKeyEvent(keyCode, deviceId, false);
    
}


    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId){

                        if(this->isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this->addGameKeyEvent(keyCode, deviceId, true);
    

                                    }
                                
}


    private: void addGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated){

        try {
            
    GameKey gameKey = this->inputToGameKeyMapping.getInstanceForCanvas(this, keyCode);;
    

                        if(gameKey != this->gameKeyFactory.NONE)
                        
                                    {
                                    
    GameKeyEvent gameKeyEvent = this->gameKeyEventFactory.getInstanceForInput(this, gameKey);;
    
this->downGameKeyEventHandler.fireEvent(gameKeyEvent);
    
this->downGameKeyEventHandler.getInstanceForDevice(deviceId).fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil.putF(StringMaker().append(this->gameInputStrings.NO_KEY).appendint(keyCode).toString(), this, this->gameInputStrings.ADD_KEY_EVENT);
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put("Key Event Error", this, this->gameInputStrings.ADD_KEY_EVENT, e);
    
}

}


    private: void removeGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated){

        try {
            
    GameKey gameKey = this->inputToGameKeyMapping.getInstanceForCanvas(this, keyCode);;
    

                        if(gameKey != this->gameKeyFactory.NONE)
                        
                                    {
                                    
    GameKeyEvent gameKeyEvent = this->gameKeyEventFactory.getInstanceForInput(this, gameKey);;
    
this->upGameKeyEventHandler.fireEvent(gameKeyEvent);
    
this->upGameKeyEventHandler.getInstanceForDevice(deviceId).fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil.putF(StringMaker().append(this->gameInputStrings.NO_KEY).appendint(keyCode).toString(), this, this->gameInputStrings.REMOVE_KEY_EVENT);
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put("Key Event Error", this, this->gameInputStrings.REMOVE_KEY_EVENT, e);
    
}

}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    
this->menuPaintable.paint(graphics);
    
this->repaintBehavior.repaint(this);
    
}


    private: void setMenuInputProcessor(BasicMenuInputProcessor menuInputProcessor){
this->menuInputProcessor= menuInputProcessor;
    
}


    protected: BasicMenuInputProcessor getMenuInputProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->menuInputProcessor;
    
}


};

            

