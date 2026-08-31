
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/PostGameCommandFactory.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScoresHelperBaseInterface.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoreUtil.h"

class HighScoreTextBox: public CustomTextBox {
        

    private: const virtualKeyboardEventHandler: VirtualKeyboardEventHandler = VirtualKeyboardEventHandler.getInstance()!;

    private: const highScoreUtil: HighScoreUtil;

    private: const pleaseWait: Paintable = new SimpleTextPaintable(this.commonStrings!.PLEASE_WAIT, BasicColorFactory.getInstance()!.WHITE);

    private: paintable: Paintable = NullPaintable.getInstance()!;

    public submitted: bool = false;

public constructor (HighScoresFactoryInterface highScoresFactoryInterface, HighScoresHelperBaseInterface highScoresHelper, AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, CommandListener cmdListener, string name, HighScore highScore, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){
            super(cmdListener, "New High Score Enter Name:", name, 12, TextField.ANY, Font.getDefaultFont(), backgrounBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.highScoreUtil= new HighScoreUtil(highScoresFactoryInterface, highScoresHelper, abeClientInformation, gameInfo, cmdListener, name, highScore);
    

    operatingSystemInterface: GenericOperatingSystem = OperatingSystemFactory.getInstance()!.getOperatingSystemInstance()!;;
    

                        if(operatingSystemInterface!.isOverScan())
                        
                                    {
                                    
    username: string = InApplicationPurchaseFactory.getInstance()!.getUserName()!;;
    

                        if(username != 
                                    null
                                )
                        
                                    {
                                    this.getTextFieldItem()!.setString(username);
    

                                    }
                                
                        else {
                            this.getTextFieldItem()!.setString("NoGamerInfo");
    

                        }
                            

                                    }
                                
}


    public initCommands(CommandListener cmdListener){
this.removeAllCommands();
    
PostGameCommandFactory.getInstance()!.addCommands(this);
    
this.addCommand(HighScoreUtil.SUBMIT_TEXTBOX_COMMAND);
    
this.setCommandListener(cmdListener);
    
}


    public open(){
this.virtualKeyboardEventHandler!.open();
    
this.paintable= NullPaintable.getInstance();
    
super.open();
    
}


    public close(){
this.virtualKeyboardEventHandler!.close();
    
this.paintable= this.pleaseWait;
    
this.repaintBehavior!.onChangeRepaint(this);
    
super.close();
    
this.removeCommand(HighScoreUtil.SUBMIT_TEXTBOX_COMMAND);
    
this.update();
    

                        if(this.submitted)
                        
                                    {
                                    this.highScoreUtil!.saveHighScore();
    

                                    }
                                
                        else {
                            
                        }
                            
this.paintable= NullPaintable.getInstance();
    
this.repaintBehavior!.onChangeRepaint(this);
    
}


                //@Throws(Exception.constructor)
            
    public update(){

    name: string = this.getTextFieldItem()!.getString()!;;
    
this.highScoreUtil!.update(name);
    
super.update();
    
}


    public paint(Graphics graphics){
super.paint(graphics);
    
this.paintable.paint(graphics);
    
}


    public saveHighScore(){
this.highScoreUtil!.saveHighScore();
    
}


    public submit(){
this.highScoreUtil!.submit(this);
    
}


};

            

