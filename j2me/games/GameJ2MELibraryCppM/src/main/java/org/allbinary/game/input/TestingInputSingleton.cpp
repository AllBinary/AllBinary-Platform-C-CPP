
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_CPP
        #define ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/TestingInputSingleton.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/input/GameInputInterface.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/GameInputProcessorUtil.h"
#include "org/allbinary/game/input/TestInputInterface.h"

auto TestingInputSingleton::instance_owner() -> TestingInputSingleton* { static std::unique_ptr<TestingInputSingleton> value(new TestingInputSingleton()); return value.get(); }
TestingInputSingleton* TestingInputSingleton::instance = TestingInputSingleton::instance_owner();

    auto TestingInputSingleton::getInstance() -> TestingInputSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TestingInputSingleton::instance;
    
}


TestingInputSingleton::TestingInputSingleton() : AllBinaryGameLayer(StringUtil::getInstance()->EMPTY_STRING, RectangleFactory::SINGLETON, ViewPosition::getInstanceD()), inputProcessorArray(std::vector<GameInputProcessor*>(InputFactory::getInstance()->MAX)), paintable(NullPaintable::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


    auto TestingInputSingleton::initInputProcessors() -> void{
}


    auto TestingInputSingleton::initInputProcessorsForTestInput(TestInputInterface* aTestInputInterface) -> void{

    TestInputInterface* testInputInterface = aTestInputInterface;;
    
this->paintable= testInputInterface;
    
this->inputProcessorArray[Canvas::UP]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent){
testInputInterface->up();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::DOWN]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent){
testInputInterface->down();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::LEFT]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent){
testInputInterface->left();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::RIGHT]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent){
testInputInterface->right();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::KEY_NUM7]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent){
testInputInterface->strafeLeft();
    
}

                                }
                            ;
    
this->inputProcessorArray[Canvas::KEY_NUM9]= class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent){
testInputInterface->strafeRight();
    
}

                                }
                            ;
    
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TestingInputSingleton::processInputList(AllBinaryLayerManager* allbinaryLayerManager, BasicArrayList* list) -> void{

    int32_t key = 0;;
    

    GameKeyEvent* gameKeyEvent;;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameKeyEvent= (dynamic_cast<GameKeyEvent*>(list->objectArray[index]));
    
key= gameKeyEvent->getKey();
    
this->inputProcessorArray[key]->processEvent(allbinaryLayerManager, GameKeyEvent::NONE);
    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TestingInputSingleton::processInput(AllBinaryLayerManager* allbinaryLayerManager) -> void{
this->processInputList(allbinaryLayerManager, this->getGameKeyEventList());
    
this->getGameKeyEventList()->clear();
    
}


    auto TestingInputSingleton::paint(Graphics* graphics) -> void{
this->paintable->paint(graphics);
    
}


    auto TestingInputSingleton::implmentsGameInputInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_CPP
