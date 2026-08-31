
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
        
            #include "../../../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/displayable/canvas/GameCommandCanvas.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/game/score/HighScoreCommandsFactory.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/HighScoresCanvasInputProcessor.h>

      
#include <org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresHelperBase.h>

      
#include <org/allbinary/game/score/HighScoresPaintable.h>

      
#include <org/allbinary/game/score/HighScoresResultsListener.h>

      
#include <org/allbinary/game/score/NoHighScoresFactory.h>

      
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
#include <org/allbinary/thread/SecondaryThreadPool.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoresCanvas: public GameCommandCanvas: public HighScoresResultsListener {
        

    public static const NAME: string = "HighScoresCanvas";

    private: paintable: Paintable = NullPaintable.getInstance()!;

    private: const highScoreCommandsFactory: HighScoreCommandsFactory = HighScoreCommandsFactory.getInstance()!;

    private: const waitPaintable: SimpleTextPaintable = new SimpleTextPaintable(this.commonStrings!.PLEASE_WAIT_FOR_SERVER, BasicColorFactory.getInstance()!.WHITE);

    private: const highScoresPaintable: HighScoresPaintable;

    private: const highScoresFactoryInterface: HighScoresFactoryInterface;

    colorFillPaintable: ColorFillBasePaintable;

    private: const highScoresHelper: HighScoresHelperBase = new HighScoresHelperBase();

    private: const gameInfo: GameInfo;

    private: const highScoresCanvasInputProcessor: HighScoresCanvasInputProcessor;

    private: currentCommand: Command = this.highScoreCommandsFactory!.HIGH_SCORE_COMMANDS[0]!;

    private: hasPainted: bool = false;

public constructor (CommandListener commandListener, AllBinaryGameLayerManager allBinaryGameLayerManager, GameInfo gameInfo, HighScoresPaintable paintable, HighScoresFactoryInterface highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface highScoresCanvasInputProcessorFactoryInterface){
            super(commandListener, HighScoresCanvas.NAME, allBinaryGameLayerManager!.getBackgroundBasicColor(), allBinaryGameLayerManager!.getForegroundBasicColor());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.highScoresPaintable= paintable;
    
this.highScoresFactoryInterface= highScoresFactoryInterface;
    
this.highScoresCanvasInputProcessor= highScoresCanvasInputProcessorFactoryInterface!.getInstance(this);
    
this.gameInfo= gameInfo;
    
this.waitPaintable!.setBasicColorP(allBinaryGameLayerManager!.getForegroundBasicColor());
    
this.getHighScoresPaintable()!.setBasicColorP(allBinaryGameLayerManager!.getForegroundBasicColor());
    
this.colorFillPaintable= ColorFillPaintableFactory.getInstance()!.getInstance(allBinaryGameLayerManager!.getBackgroundBasicColor(), false);
    

                        if(this.highScoresHelper!.getHighScoresArray() == NoHighScoresFactory.getInstance()!.NO_HIGH_SCORES)
                        
                                    {
                                    this.setPaintable(this.waitPaintable);
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Show HighScores that are already loaded", this, this.commonStrings!.CONSTRUCTOR);
    
this.updateCommand(this.currentCommand);
    
this.setPaintable(this.getHighScoresPaintable());
    

                        }
                            

//inner=true member= isStatic=
class HighScoreRunnable: public ARunnable {
        

    const highScoresCanvas: HighScoresCanvas;

 constructor (HighScoresCanvas highScoresCanvas){

            super();
        this.highScoresCanvas= highScoresCanvas;
    
}


    public run(){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

    highScoresCanvas: HighScoresCanvas = this.highScoresCanvas;;
    

        try {
            
    isHTML: bool = J2MEUtil.isHTML()!;;
    

                        if(!isHTML)
                        
                                    {
                                    
        while(!highScoresCanvas!.hasPainted)
        {
}

highScoresCanvas!.hasPainted= false;
    

                                    }
                                

    stringMaker: StringMaker = new StringMaker();;
    
logUtil!.putF(stringMaker!.append("HighScoresCanvas - Request repaint to be sure: ")!.appendlong(Date.now())!.toString(), this, commonStrings!.RUN);
    
highScoresCanvas!.repaintBehavior!.onChangeRepaint(highScoresCanvas);
    

                        if(!isHTML)
                        
                                    {
                                    
        while(!highScoresCanvas!.hasPainted)
        {
}


                                    }
                                
stringMaker!.delete(0, stringMaker!.length());
    
logUtil!.putF(stringMaker!.append("HighScoresCanvas - Now that the canvas has completed repaint go ahead and fetch the scores: ")!.appendlong(Date.now())!.toString(), this, commonStrings!.RUN);
    
highScoresCanvas!.executeUpdate();
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.RUN, e);
    
}

}


};

            

                    //Otherwise - statement - EmptyStmt

SecondaryThreadPool.getInstance()!.runTask(new HighScoreRunnable(this));
    
}


    public initCommands(CommandListener cmdListener){
this.removeAllCommands();
    
this.addCommand(GameCommandsFactory.getInstance()!.CLOSE_AND_SHOW_GAME_CANVAS);
    
this.setCommandListener(cmdListener);
    
}


    public open(){
super.open();
    
this.highScoresCanvasInputProcessor!.open();
    
}


    public close(){
super.close();
    
this.highScoresCanvasInputProcessor!.close();
    
}


    public paint(Graphics graphics){
this.colorFillPaintable!.paint(graphics);
    
this.paintable.paint(graphics);
    

                        if(this.waitPaintable != this.paintable)
                        
                                    {
                                    this.highScoresCanvasInputProcessor!.paint(graphics);
    

                                    }
                                
super.paint(graphics);
    
this.hasPainted= true;
    
}


    public executeUpdate(){

        try {
            this.highScoresFactoryInterface!.fetchHighScores(this.getGameInfo(), this);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.UPDATE, e);
    
}

}


    HighScoresPaintable getHighScoresPaintable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.highScoresPaintable;
    
}


    public setHighScoresArray(std::vector<HighScores> highScoresArray){

        try {
            
                        if(highScoresArray != 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append(this.commonStrings!.START)!.appendint(highScoresArray!.length)!.toString(), this, "setHighScoresArray");
    

                                    }
                                
                        else {
                            this.logUtil!.putF(this.commonStrings!.START, this, "setHighScoresArray");
    

                        }
                            
this.highScoresHelper!.setHighScoresArray(highScoresArray);
    
this.updateCommand(this.currentCommand);
    
this.setPaintable(this.getHighScoresPaintable());
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.UPDATE, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public updateCommand(Command command){
this.logUtil!.putF(new StringMaker().append(this.commonStrings!.START)!.append(this.stringUtil!.toString(command))!.toString(), this, this.commonStrings!.UPDATE);
    

    gameCommandsFactory: GameCommandsFactory = GameCommandsFactory.getInstance()!;;
    

                        if(this.highScoreCommandsFactory!.isHighScoreCommand(command))
                        
                                    {
                                    
    index: int32_t = this.highScoreCommandsFactory!.getIndex(command)!;;
    

    nextIndex: int32_t = index +1;;
    

    highScoresArray: std::vector<HighScores> = this.highScoresHelper!.getHighScoresArray()!;;
    

                        if(nextIndex >= highScoresArray!.length)
                        
                                    {
                                    nextIndex= 0;
    

                                    }
                                

                        if(highScoresArray!.length > 0)
                        
                                    {
                                    this.getHighScoresPaintable()!.setHighScores(highScoresArray[index]!);
    

                                    }
                                
                        else {
                            this.getHighScoresPaintable()!.setHighScores(NullHighScoresSingletonFactory.getInstance());
    

                        }
                            

                        if(index != nextIndex)
                        
                                    {
                                    this.removeAllCommands();
    
this.addCommand(gameCommandsFactory!.CLOSE_AND_SHOW_GAME_CANVAS);
    
this.addCommand(this.highScoreCommandsFactory!.HIGH_SCORE_COMMANDS[nextIndex]!);
    

                                    }
                                

                                    }
                                
this.currentCommand= command;
    
this.close();
    
super.initMenu();
    
this.open();
    
this.repaintBehavior!.onChangeRepaint(this);
    
}


    public GameInfo getGameInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameInfo;
    
}


    setPaintable(Paintable paintable){
this.paintable= paintable;
    
this.repaintBehavior!.onChangeRepaint(this);
    
}


};

            

