
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
        

    static NullGameCanvas createNull(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NullGameCanvas(AllBinaryGameLayerManager.getNullInstance());
    

                //: 
} catch(e) 
            {
LogUtil.getInstance()!.put(CommonStrings.getInstance()!.EXCEPTION, "NullGameCanvas", CommonStrings.getInstance()!.GET_INSTANCE, e);
    



                            throw new RuntimeException();
                    
}

}


    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static NullGameCanvas getInstance(){

                        if(NullGameCanvas.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    NullGameCanvas.instance= NullGameCanvas.createNull();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullGameCanvas.instance as NullGameCanvas;
    
}


                //@Throws(Exception.constructor)
            
    public static NullGameCanvas createCanvas(AllBinaryGameLayerManager gameLayerManager){

    nullGameCanvas: NullGameCanvas = new NullGameCanvas(gameLayerManager);;
    
nullGameCanvas!.setInitialized(true);
    
nullGameCanvas!.setTitle(NullGameCanvas.NO_GAME);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullGameCanvas;
    
}


    public static const NO_GAME: string = "No Background Game";

    public static const TYPE: int32_t = 1;

protected constructor (AllBinaryGameLayerManager gameLayerManager){
            super(NullCommandListener.NULL_COMMAND_LISTENER, gameLayerManager, NoHighScoresFactory.getInstance(), BasicBuildGameInitializerFactory.NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY, false);
                    

                            //For kotlin this is before the body of the constructor.
                    
super.setWait(1200);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isGameOver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    private: runningNull: bool = true;

    public setRunning(bool running){
this.runningNull= running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.runningNull;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public pause(){
this.setPaused(true);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public unPause(){
this.setPaused(false);
    
}


    public initCommands(CommandListener cmdListener){
this.removeAllCommands();
    
this.setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    public buildGameInit(bool isProgress){
}


    public draw(Graphics graphics){
}


    public run(){

        try {
            this.logUtil!.putF(this.commonStrings!.START_RUNNABLE, this, this.commonStrings!.RUN);
    
this.logUtil!.putF(this.commonStrings!.END_RUNNABLE, this, this.commonStrings!.RUN);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.RUN, e);
    
}

}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullGameCanvas.TYPE;
    
}


};

            

