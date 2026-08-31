
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/DemoCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameRunnable.h>

      
#include <org/allbinary/game/displayable/canvas/NullDisplayable.h>

      
#include <org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>

      
#include <org/allbinary/game/layer/SWTUtil.h>

      
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLFeatureFactory.h"

class CurrentDisplayableFactory
            : public Object
         {
        

    private: static const instance: CurrentDisplayableFactory = new CurrentDisplayableFactory();

    public static CurrentDisplayableFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CurrentDisplayableFactory.instance;
    
}


    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const SET_DISPLAYABLE: string = "setDisplayable";

    private: const SET_RUNNABLE: string = "setRunnable";

    private: const CLEAR_RUNNABLE: string = "clearRunnable";

    private: const SET_USED_RUNNABLE: string = "setUsedRunnable";

    private: const RUNNABLE: string = "Runnable: ";

    private: const RUNNABLE_WAS_ALREADY_IN_USE: string = "Runnable was already in use: ";

    public const DEFAULT_CHILD_NAME_LIST: BasicArrayList = new BasicArrayListD();

    private: displayable: Displayable = NullDisplayable.getInstance()!;

    private: openGlReadydisplayable: Displayable = NullDisplayable.getInstance()!;

    private: runnable: GameRunnable = NullWaitGameRunnable.getInstance()!;

    private: usedRunnable: GameRunnable = NullWaitGameRunnable.getInstance()!;

private constructor (){

            super();
        this.DEFAULT_CHILD_NAME_LIST.add(this.canvasStrings!.ABOUT);
    
this.DEFAULT_CHILD_NAME_LIST.add(this.canvasStrings!.OPTIONS);
    
this.DEFAULT_CHILD_NAME_LIST.add(GameInputMappingCanvas.NAME);
    
this.DEFAULT_CHILD_NAME_LIST.add(GameInputMappingInstructionsCanvas.NAME);
    
this.DEFAULT_CHILD_NAME_LIST.add(HighScoresCanvas.NAME);
    
}


    public setMyCanvas(MyCanvas displayable){

                        if(this.displayable instanceof MyCanvas)
                        
                                    {
                                    
                        if(displayable.hasChild(this.displayable as MyCanvas))
                        
                                    {
                                    PreLogUtil.put(new StringMaker().append("Child Displayable is already set for: ")!.append(this.stringUtil!.toString(displayable))!.toString(), this, this.SET_DISPLAYABLE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                                    }
                                
this.setDisplayable(displayable);
    
}


    public setDisplayable(Displayable displayable){
this.displayable= displayable;
    
this.setOpenGlReadydisplayable(displayable);
    
}


    public setOpenGlReadydisplayable(Displayable openGlReadydisplayable){
this.openGlReadydisplayable= openGlReadydisplayable;
    
this.update();
    
}


    public Displayable getOpenGlReadydisplayable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.openGlReadydisplayable;
    
}


    public setRunnable(GameRunnable runnable){
PreLogUtil.put(new StringMaker().append(this.RUNNABLE)!.append(this.stringUtil!.toString(runnable))!.toString(), this, this.SET_RUNNABLE);
    
this.runnable= runnable;
    

                        if(this.usedRunnable != this.runnable)
                        
                                    {
                                    this.update();
    

                                    }
                                
                        else {
                            PreLogUtil.put(new StringMaker().append(this.RUNNABLE_WAS_ALREADY_IN_USE)!.append(this.stringUtil!.toString(runnable))!.toString(), this, this.SET_RUNNABLE);
    

                        }
                            
}


    public clearRunnable(){
PreLogUtil.put(new StringMaker().append(this.RUNNABLE)!.append(this.stringUtil!.toString(NullRunnable.getInstance()))!.toString(), this, this.CLEAR_RUNNABLE);
    
this.setUsedRunnable(NullWaitGameRunnable.getInstance());
    
}


    update(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    features: Features = Features.getInstance()!;;
    

    stringMaker: StringMaker = new StringMaker();;
    
stringMaker!.append(this.stringUtil!.toString(this.openGlReadydisplayable));
    

                        if(SWTUtil.isSWT && !features.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL))
                        
                                    {
                                    PreLogUtil.put(stringMaker!.append(commonSeps!.SPACE)!.append(SWTUtil.SWT)!.append(commonSeps!.SPACE)!.append(this.RUNNABLE)!.append(this.stringUtil!.toString(NullRunnable.getInstance()))!.toString(), this, this.commonStrings!.UPDATE);
    
this.setUsedRunnable(NullWaitGameRunnable.getInstance());
    

                                    }
                                
                             else 
                        if(J2MEUtil.isHTML())
                        
                                    {
                                    PreLogUtil.put(stringMaker!.append(commonSeps!.SPACE)!.append(GraphicsStrings.getInstance()!.HTML)!.append(commonSeps!.SPACE)!.append(this.RUNNABLE)!.append(this.stringUtil!.toString(this.runnable))!.toString(), this, this.commonStrings!.UPDATE);
    
this.setUsedRunnable(this.runnable);
    

                                    }
                                
                             else 
                        if(this.openGlReadydisplayable instanceof DemoCanvas || this.openGlReadydisplayable instanceof AllBinaryGameCanvas || features.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL))
                        
                                    {
                                    PreLogUtil.put(stringMaker!.append(commonSeps!.SPACE)!.append(OpenGLFeatureFactory.getInstance()!.OPENGL.toString())!.append(commonSeps!.SPACE)!.append(this.RUNNABLE)!.append(this.stringUtil!.toString(this.runnable))!.toString(), this, this.commonStrings!.UPDATE);
    
this.setUsedRunnable(this.runnable);
    

                                    }
                                
                        else {
                            PreLogUtil.put(stringMaker!.append(this.RUNNABLE)!.append(this.stringUtil!.toString(NullRunnable.getInstance()))!.toString(), this, this.commonStrings!.UPDATE);
    
this.setUsedRunnable(NullWaitGameRunnable.getInstance());
    

                        }
                            


}


    public Displayable getDisplayable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.displayable;
    
}


    public GameRunnable getUsedRunnable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.usedRunnable;
    
}


    public setUsedRunnable(GameRunnable usedRunnable){
PreLogUtil.put(new StringMaker().append(this.RUNNABLE)!.append(this.stringUtil!.toString(this.runnable))!.toString(), this, this.SET_USED_RUNNABLE);
    
this.usedRunnable= usedRunnable;
    
}


};

            

