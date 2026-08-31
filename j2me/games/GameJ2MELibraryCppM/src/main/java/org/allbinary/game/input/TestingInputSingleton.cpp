
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

class TestingInputSingleton: public AllBinaryGameLayer: public GameInputInterface {
        

    private: static const instance: TestingInputSingleton = new TestingInputSingleton();

    public static TestingInputSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TestingInputSingleton.instance;
    
}


    const inputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

private constructor (){
            super(StringUtil.getInstance()!.EMPTY_STRING, RectangleFactory.SINGLETON, ViewPosition.getInstanceD());
                    

                            //For kotlin this is before the body of the constructor.
                    
GameInputProcessorUtil.init(this.inputProcessorArray);
    
}


    private: paintable: PaintableInterface = NullPaintable.getInstance()!;

    public initInputProcessors(){
}


    public initInputProcessorsForTestInput(TestInputInterface aTestInputInterface){

    testInputInterface: TestInputInterface = aTestInputInterface;;
    
this.paintable= testInputInterface;
    
this.inputProcessorArray[Canvas.UP]= new class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface!.up();
    
}

                                }
                            ;
    
this.inputProcessorArray[Canvas.DOWN]= new class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface!.down();
    
}

                                }
                            ;
    
this.inputProcessorArray[Canvas.LEFT]= new class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface!.left();
    
}

                                }
                            ;
    
this.inputProcessorArray[Canvas.RIGHT]= new class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface!.right();
    
}

                                }
                            ;
    
this.inputProcessorArray[Canvas.KEY_NUM7]= new class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface!.strafeLeft();
    
}

                                }
                            ;
    
this.inputProcessorArray[Canvas.KEY_NUM9]= new class extends GameInputProcessor
                                {
                                
                //@Throws(Exception.constructor)
            
    public processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
testInputInterface!.strafeRight();
    
}

                                }
                            ;
    
GameInputProcessorUtil.init(this.inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public processInputList(AllBinaryLayerManager allbinaryLayerManager, BasicArrayList list){

    key: int32_t = 0;;
    

    gameKeyEvent: GameKeyEvent;;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
gameKeyEvent= (list.objectArray[index]! as GameKeyEvent);
    
key= gameKeyEvent!.getKey();
    
this.inputProcessorArray[key]!.processEvent(allbinaryLayerManager, GameKeyEvent.NONE);
    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public processInput(AllBinaryLayerManager allbinaryLayerManager){
this.processInputList(allbinaryLayerManager, this.getGameKeyEventList());
    
this.getGameKeyEventList()!.clear();
    
}


    public paint(Graphics graphics){
this.paintable.paint(graphics);
    
}


    public bool implmentsGameInputInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

