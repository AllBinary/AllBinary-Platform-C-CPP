
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameInputInterface.h"
#include "InputFactory.h"
#include "GameInputProcessor.h"
#include "GameInputProcessorUtil.h"
#include "TestInputInterface.h"

class TestingInputSingleton: public AllBinaryGameLayer, public GameInputInterface {

    private: static TestingInputSingleton instance() { return TestingInputSingleton(); }

    public: static TestingInputSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TestingInputSingleton::instance();
    
}


    protected: const std::vector<GameInputProcessor> inputProcessorArray = new Array(InputFactory::getInstance().MAX);

private: TestingInputSingleton(){
            super(StringUtil::getInstance().EMPTY_STRING, RectangleFactory::SINGLETON, ViewPosition::getInstanceD());
                    

                            //For kotlin this is before the body of the constructor.
                    
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


    private: PaintableInterface paintable = NullPaintable::getInstance();

    public: void initInputProcessors(){
}


    public: void initInputProcessorsForTestInput(TestInputInterface aTestInputInterface){

    TestInputInterface testInputInterface = aTestInputInterface;;
    
this->paintable= testInputInterface;
    
this->inputProcessorArray[Canvas::UP]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface.up();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::DOWN]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface.down();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::LEFT]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface.left();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::RIGHT]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface.right();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::KEY_NUM7]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface.strafeLeft();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::KEY_NUM9]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface.strafeRight();
    
}

                                }
                            ;
    
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void processInputList(AllBinaryLayerManager allbinaryLayerManager, BasicArrayList list){

    int32_t key = 0;;
    

    GameKeyEvent gameKeyEvent;;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameKeyEvent= (list.objectArray[index]! as GameKeyEvent);
    
key= gameKeyEvent.getKey();
    
this->inputProcessorArray[key]!.processEvent(allbinaryLayerManager, GameKeyEvent::NONE);
    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void processInput(AllBinaryLayerManager allbinaryLayerManager){
this->processInputList(allbinaryLayerManager, this->getGameKeyEventList());
    
this->getGameKeyEventList().clear();
    
}


    public: void paint(Graphics graphics){
this->paintable.paint(graphics);
    
}


    public: bool implmentsGameInputInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

