
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameMidlet.h"
#include "DemoRunnable.h"
#include "CreateGameRunnable.h"

class DemoGameMidlet: public GameMidlet {
        

public constructor (ClientInformationFactory clientInformationFactory){
            super(clientInformationFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    bool isContinue(){

    hashtable: Hashtable<any, any> = this.getStartStateHashtable()!;;
    

                        if(hashtable != 
                                    null
                                 && hashtable.length > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public int32_t getHighestLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


                //@Throws(Exception.constructor)
            
    public GameCanvasRunnableInterface createDemoGameCanvasRunnableInterface(){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    GameCanvasRunnableInterface createGameCanvasRunnable(AllBinaryGameLayerManager allBinaryGameLayerManager){



                            throw new Exception(this.commonStrings!.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    GameCanvasRunnableInterface createGameCanvasRunnableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.createGameCanvasRunnable(this.createGameLayerManager());;
    
}


    public demoSetup(){
}


    public postDemoSetup(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setDemo(){
this.logUtil!.putF(this.commonStrings!.START, this, "setDemo");
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.start();
    
PrimaryThreadPool.getInstance()!.runTask(new DemoRunnable(this));
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public createGame(){

    CREATE_GAME: string = "createGame";;
    
this.logUtil!.putF(this.commonStrings!.START, this, CREATE_GAME);
    

    progressCanvas: ProgressCanvas = ProgressCanvasFactory.getInstance()!;;
    
progressCanvas!.start();
    

    hashtable: Hashtable<any, any> = this.getStartStateHashtable()!;;
    
this.setStartStateHashtable(NullUtil.getInstance()!.NULL_TABLE);
    
PrimaryThreadPool.getInstance()!.runTask(new CreateGameRunnable(this, hashtable));
    
this.logUtil!.putF(this.commonStrings!.END, this, CREATE_GAME);
    
}


    public bool isReady(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

