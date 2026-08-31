
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVAS_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
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
        #include "AllBinaryGameCanvas.h"

class NullGameCanvas: public AllBinaryGameCanvas {
        

    static NullGameCanvas createNull();

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static NullGameCanvas getInstance();

                //@Throws(Exception.constructor)
            
    public static NullGameCanvas createCanvas(AllBinaryGameLayerManager gameLayerManager);

    public static const NO_GAME: string = "No Background Game";

    public static const TYPE: int32_t = 1;

protected constructor (AllBinaryGameLayerManager gameLayerManager);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isGameOver();

    private: runningNull: bool = true;

    public setRunning(bool running);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public pause();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public unPause();

    public initCommands(CommandListener cmdListener);

                //@Throws(Exception.constructor)
            
    public buildGameInit(bool isProgress);

    public draw(Graphics graphics);

    public run();

    public int32_t getType();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVAS_H
