
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_H
        #define ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_H

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

class TestingInputSingleton: public AllBinaryGameLayer, public GameInputInterface {

    private: static TestingInputSingleton* instance() { static std::unique_ptr<TestingInputSingleton> value(new TestingInputSingleton()); return value.get(); }

    public: static TestingInputSingleton* getInstance();

    protected: const std::vector<GameInputProcessor*> inputProcessorArray = std::vector<GameInputProcessor*>(InputFactory::getInstance()->MAX);

private: TestingInputSingleton();

    private: PaintableInterface* paintable = NullPaintable::getInstance();

    public: void initInputProcessors();

    public: void initInputProcessorsForTestInput(TestInputInterface* aTestInputInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void processInputList(AllBinaryLayerManager* allbinaryLayerManager, BasicArrayList* list);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void processInput(AllBinaryLayerManager* allbinaryLayerManager);

    public: void paint(Graphics* graphics);

    public: bool implmentsGameInputInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_H
