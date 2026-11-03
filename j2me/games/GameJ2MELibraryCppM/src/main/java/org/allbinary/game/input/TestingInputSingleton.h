
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Canvas;
class Graphics;
class GameKeyEvent;
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>
class RectangleFactory;
class NullPaintable;
class PaintableInterface;
class AllBinaryLayerManager;
class StringUtil;
class BasicArrayList;
class ViewPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameInputInterface.h"
class InputFactory;
class GameInputProcessor;
class GameInputProcessorUtil;
class TestInputInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TestingInputSingleton: public AllBinaryGameLayer, public virtual GameInputInterface {

    private: static TestingInputSingleton* instance_owner();
    private: static TestingInputSingleton* instance;

    public: static TestingInputSingleton* getInstance();

    /*protected*/ public: std::vector<GameInputProcessor*> inputProcessorArray;

private: TestingInputSingleton();

    private: PaintableInterface* paintable;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_TESTINGINPUTSINGLETON_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayer.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/RectangleFactory.h>)
#include <org/allbinary/graphics/RectangleFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/view/ViewPosition.h>)
#include <org/allbinary/view/ViewPosition.h>
#endif
#if __has_include("org/allbinary/game/input/GameInputInterface.h")
#include "org/allbinary/game/input/GameInputInterface.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessorUtil.h")
#include "org/allbinary/game/input/GameInputProcessorUtil.h"
#endif
#if __has_include("org/allbinary/game/input/TestInputInterface.h")
#include "org/allbinary/game/input/TestInputInterface.h"
#endif

        #endif
    
