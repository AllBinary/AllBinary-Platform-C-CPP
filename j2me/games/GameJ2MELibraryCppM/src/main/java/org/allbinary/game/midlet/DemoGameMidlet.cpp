
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/ClientInformationFactory.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <org/allbinary/game/displayable/canvas/NullGameCanvasRunnable.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameMidlet.h"
#include "DemoRunnable.h"
#include "CreateGameRunnable.h"

class DemoGameMidlet: public GameMidlet {

public: DemoGameMidlet(ClientInformationFactory clientInformationFactory) : GameMidlet(clientInformationFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    protected: bool isContinue(){

    ABHashtable<Object*, Object*> hashtable = this->getStartStateHashtable();;
    

                        if(hashtable != 
                                    nullptr
                                 && hashtable.size() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: int32_t getHighestLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


                //@Throws(Exception.constructor)
            
    public: GameCanvasRunnableInterface createDemoGameCanvasRunnableInterface(){
this->logUtil.putF(this->commonStrings.NOT_IMPLEMENTED, this, this->commonStrings.CREATE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullGameCanvasRunnable::NULL_GAME_CANVAS_RUNNABLE;
    
}


                //@Throws(Exception.constructor)
            
    protected: GameCanvasRunnableInterface createGameCanvasRunnable(AllBinaryGameLayerManager allBinaryGameLayerManager){



                            throw Exception(this->commonStrings.NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    protected: GameCanvasRunnableInterface createGameCanvasRunnableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->createGameCanvasRunnable(this->createGameLayerManager());;
    
}


    public: void demoSetup(){
}


    public: void postDemoSetup(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setDemo(){
this->logUtil.putF(this->commonStrings.START, this, "setDemo");
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.start();
    
PrimaryThreadPool::getInstance().runTask(DemoRunnable(this));
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void createGame(){

    std::string CREATE_GAME = "createGame";;
    
this->logUtil.putF(this->commonStrings.START, this, CREATE_GAME);
    

    ProgressCanvas progressCanvas = ProgressCanvasFactory::getInstance();;
    
progressCanvas.start();
    

    ABHashtable<Object*, Object*> hashtable = this->getStartStateHashtable();;
    
this->setStartStateHashtable(StdUtil::getInstance().NULL_TABLE);
    
PrimaryThreadPool::getInstance().runTask(CreateGameRunnable(this, hashtable));
    
this->logUtil.putF(this->commonStrings.END, this, CREATE_GAME);
    
}


    public: bool isReady(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

