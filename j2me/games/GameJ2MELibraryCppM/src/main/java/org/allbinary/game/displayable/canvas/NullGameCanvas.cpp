
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVAS_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/NullGameCanvas.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullCommandListener.h>

      
#include <org/allbinary/game/init/BasicBuildGameInitializerFactory.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/score/NoHighScoresFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


    auto NullGameCanvas::createNull() -> NullGameCanvas*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NullGameCanvas(AllBinaryGameLayerManager::getNullInstance());
    

                //: 
} catch(Exception& e) 
            {
LogUtil::getInstance()->put(CommonStrings::getInstance()->EXCEPTION, "NullGameCanvas", CommonStrings::getInstance()->GET_INSTANCE, &e);
    



                            throw RuntimeException();
                    
}

}

Object* NullGameCanvas::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto NullGameCanvas::getInstance() -> NullGameCanvas*{

                        if(NullGameCanvas::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    NullGameCanvas::instance= NullGameCanvas::createNull();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<NullGameCanvas*>(NullGameCanvas::instance);
    
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvas::createCanvas(AllBinaryGameLayerManager* gameLayerManager) -> NullGameCanvas*{

    NullGameCanvas* nullGameCanvas = new NullGameCanvas(gameLayerManager);;
    
nullGameCanvas->setInitialized(true);
    
nullGameCanvas->setTitle(NullGameCanvas::NO_GAME);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullGameCanvas;
    
}


NullGameCanvas::NullGameCanvas(AllBinaryGameLayerManager* gameLayerManager) : AllBinaryGameCanvas(NullCommandListener::NULL_COMMAND_LISTENER, gameLayerManager, NoHighScoresFactory::getInstance(), BasicBuildGameInitializerFactory::NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY, false){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
AllBinaryGameCanvas::setWait(1200);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto NullGameCanvas::isGameOver() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto NullGameCanvas::setRunning(bool running) -> void{
this->runningNull= running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto NullGameCanvas::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runningNull;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto NullGameCanvas::pause() -> void{
this->setPaused(true);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto NullGameCanvas::unPause() -> void{
this->setPaused(false);
    
}


    auto NullGameCanvas::initCommands(CommandListener* cmdListener) -> void{
this->removeAllCommands();
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    auto NullGameCanvas::buildGameInit(bool isProgress) -> void{
}


    auto NullGameCanvas::draw(Graphics* graphics) -> void{
}


    auto NullGameCanvas::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
    
this->logUtil->putF(this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}


    auto NullGameCanvas::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullGameCanvas::TYPE;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVAS_CPP
