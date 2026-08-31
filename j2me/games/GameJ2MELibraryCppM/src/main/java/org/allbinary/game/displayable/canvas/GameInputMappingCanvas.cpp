
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
        
            #include "../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/mapping/InputMappingInterface.h>

      
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/game/paint/help/HelpPaintable.h>

      
#include <org/allbinary/game/paint/help/InputMappingHelpPaintable.h>

      
#include <org/allbinary/graphics/paint/ProcessPaintable.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCommandCanvas.h"
#include "GameInputMappingInstructionsCanvas.h"

class GameInputMappingCanvas: public GameCommandCanvas: public InputMappingInterface {
        

    public static const NAME: string = "GameInputMappingCanvas";

    public static const DISPLAY: Command = new Command("Controls", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 2);

    public static const DEFAULT: Command = new Command("Default", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 2);

    private: const paintable: ProcessPaintable;

    private: const helpPaintable: InputMappingHelpPaintable;

    const colorFillPaintable: ColorFillBasePaintable;

    private: const inputMapping: PersistentInputMapping;

    private: const NONE: GameKey = GameKeyFactory.getInstance()!.NONE;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: selectedGameKey: GameKey = this.NONE;

    private: selectedInput: Input = this.NONE;

public constructor (AbeClientInformationInterface abeClientInformation, CommandListener commandListener, AllBinaryGameLayerManager allBinaryGameLayerManager, HelpPaintable helpPaintable){
            super(commandListener, GameInputMappingCanvas.NAME, allBinaryGameLayerManager!.getBackgroundBasicColor(), allBinaryGameLayerManager!.getForegroundBasicColor());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    

                        if(helpPaintable == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Help Paintable Exception");
                    

                                    }
                                
this.abeClientInformation= abeClientInformation;
    
this.helpPaintable= helpPaintable as InputMappingHelpPaintable;
    
this.inputMapping= PlatformInputMappingFactory.getInstance()!.getPersistentInputMappingInstance();
    
this.paintable= new ProcessPaintable();
    
this.colorFillPaintable= ColorFillPaintableFactory.getInstance()!.getInstance(allBinaryGameLayerManager!.getBackgroundBasicColor(), false);
    
}


    public close(){
super.close();
    
this.paintable.process();
    
this.selectedGameKey= this.NONE;
    
this.selectedInput= this.NONE;
    
this.update();
    
}


    public initCommands(CommandListener cmdListener){
this.removeAllCommands();
    
this.addCommand(GameCommandsFactory.getInstance()!.CLOSE_AND_SHOW_GAME_CANVAS);
    
this.addCommand(GameInputMappingCanvas.DEFAULT);
    
this.addCommand(GameInputMappingInstructionsCanvas.DISPLAY);
    
this.setCommandListener(cmdListener);
    
}


    public keyPressed(int32_t keyCode){
this.keyPressedByDevice(keyCode, 0);
    
}


    public keyReleased(int32_t keyCode){
this.keyReleasedByDevice(keyCode, 0);
    
}


    public keyRepeated(int32_t keyCode){
this.keyRepeatedByDevice(keyCode, 0);
    
}


    public keyPressedByDevice(int32_t keyCode, int32_t deviceId){
this.addGameKey(keyCode, false);
    
super.keyPressedByDevice(keyCode, 0);
    
}


    private: const inputFactory: InputFactory = InputFactory.getInstance()!;

    addGameKey(int32_t keyCode, bool repeated){

        try {
            this.logUtil!.putF(new StringMaker().append("Raw Device Key Code: ")!.append(Integer.toHexString(keyCode))!.toString(), this, this.gameInputStrings!.ADD_KEY_EVENT);
    

    gameKey: GameKey = this.inputToGameKeyMapping!.getInstanceForCanvas(this, keyCode)!;;
    

    input: Input = this.inputFactory!.getInstanceById(keyCode)!;;
    
this.processInputMapping(gameKey, input);
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Key Event Error", this, this.gameInputStrings!.ADD_KEY_EVENT, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public processInputMapping(GameKey gameKey, Input input){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Start Passed GameKey: ");
    
stringBuffer!.append(this.stringUtil!.toString(gameKey));
    
stringBuffer!.append(" Input: ");
    
stringBuffer!.append(this.stringUtil!.toString(input));
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.PROCESS);
    

                        if(this.selectedGameKey != this.NONE)
                        
                                    {
                                    this.gameActionCrud(gameKey, input);
    

                                    }
                                
                        else {
                            this.setSelectedAction(gameKey);
    

                        }
                            
}


    setSelectedAction(GameKey gameKey){
this.logUtil!.putF(new StringMaker().append("Selected GameKey: ")!.append(this.stringUtil!.toString(gameKey))!.toString(), this, "setSelectedAction");
    
this.selectedGameKey= gameKey;
    
this.selectedInput= this.NONE;
    
this.helpPaintable!.update(this.selectedGameKey, this.selectedInput);
    
this.repaintBehavior!.onChangeRepaint(this);
    
}


                //@Throws(Exception.constructor)
            
    gameActionCrud(GameKey gameKey, Input input){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Start GameKey: ");
    
stringBuffer!.append(this.stringUtil!.toString(this.selectedGameKey));
    
stringBuffer!.append(" Input: ");
    
stringBuffer!.append(this.stringUtil!.toString(this.selectedInput));
    
this.logUtil!.putF(stringBuffer!.toString(), this, "gameActionCrud");
    

                        if(this.selectedInput == this.NONE)
                        
                                    {
                                    
    list: BasicArrayList = this.inputMapping!.getInputMapping()!.getMappedInput(this.selectedGameKey)!;;
    

    isInputAlreadyMappedToSelectedAction: bool = list.contains(input)!;;
    

                        if(isInputAlreadyMappedToSelectedAction)
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("Already Mapped Input: ")!.append(this.stringUtil!.toString(input))!.toString(), this, "gameActionCrud");
    
this.selectedInput= input;
    
this.helpPaintable!.update(this.selectedGameKey, this.selectedInput);
    
this.repaintBehavior!.onChangeRepaint(this);
    

                                    }
                                
                        else {
                            this.addNewMapping(gameKey, input);
    

                        }
                            

                                    }
                                
                             else 
                        if(this.inputMapping!.isDelete(input))
                        
                                    {
                                    this.deleteCurrentMapping();
    

                                    }
                                
                        else {
                            this.setSelectedAction(gameKey);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    addNewMapping(GameKey gameKey, Input input){

    METHOD_NAME: string = "addNewMapping";;
    
this.logUtil!.putF(this.commonStrings!.START, this, METHOD_NAME);
    

    isInputAlreadyMapped: bool = this.inputMapping!.getInputMapping()!.isMapped(input)!;;
    

                        if(!isInputAlreadyMapped && !this.inputMapping!.isSystemInput(input))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Add Key Mapping : GameKey: ");
    
stringBuffer!.append(this.stringUtil!.toString(this.selectedGameKey));
    
stringBuffer!.append(" Input: ");
    
stringBuffer!.append(this.stringUtil!.toString(this.selectedInput));
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_NAME);
    
this.inputMapping!.getInputMapping()!.add(this.selectedGameKey, input);
    
this.selectedInput= input;
    
this.update();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Unable to add Mapping since one already exists or is MENU, HOME, or BACK key and setting selected action to what it is already mapped to", this, METHOD_NAME);
    
this.setSelectedAction(gameKey);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    deleteCurrentMapping(){

    METHOD_NAME: string = "deleteCurrentMapping";;
    

    list: BasicArrayList = this.inputMapping!.getInputMapping()!.getMappedInput(this.selectedGameKey)!;;
    

                        if(list.size() > 1)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Start GameKey: ");
    
stringBuffer!.append("Remove Key Mapping: GameKey: ");
    
stringBuffer!.append(this.stringUtil!.toString(this.selectedGameKey));
    
stringBuffer!.append(" Input: ");
    
stringBuffer!.append(this.stringUtil!.toString(this.selectedInput));
    
this.logUtil!.putF(stringBuffer!.toString(), this, METHOD_NAME);
    
this.inputMapping!.getInputMapping()!.remove(this.selectedGameKey, this.selectedInput);
    
this.selectedInput= this.NONE;
    
this.update();
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Can't Remove Last Key Mapping", this, METHOD_NAME);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public setDefault(){
this.inputMapping!.setDefault(this.abeClientInformation);
    
this.helpPaintable!.update(this.NONE, this.NONE);
    
this.repaintBehavior!.onChangeRepaint(this);
    
}


                //@Throws(Exception.constructor)
            
    public update(){
this.inputMapping!.update(this.abeClientInformation);
    
this.helpPaintable!.update(this.selectedGameKey, this.selectedInput);
    
this.repaintBehavior!.onChangeRepaint(this);
    
}


    public paint(Graphics graphics){
this.colorFillPaintable!.paint(graphics);
    
this.helpPaintable!.paint(graphics);
    
this.paintable.paint(graphics);
    
super.paint(graphics);
    
}


};

            

