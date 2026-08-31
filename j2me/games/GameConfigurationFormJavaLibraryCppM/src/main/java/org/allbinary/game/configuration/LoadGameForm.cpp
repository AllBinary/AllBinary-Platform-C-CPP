
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
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Choice.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <javax/microedition/lcdui/StringItem.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LoadGameForm: public CommandForm {
        

    private: areChoices: bool= false;

public constructor (CommandListener commandListener, string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){
            super(commandListener, title, backgrounBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.update();
    
this.initCommands(commandListener);
    
}


    public initCommands(CommandListener cmdListener){

    gameCommandsFactory: GameCommandsFactory = GameCommandsFactory.getInstance()!;;
    
this.removeAllCommands();
    
this.addCommand(gameCommandsFactory!.LOAD_FILE);
    
this.addCommand(gameCommandsFactory!.DELETE_FILE);
    
this.addCommand(gameCommandsFactory!.CLOSE_AND_SHOW_GAME_CANVAS);
    
this.setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    public update(){

    list: BasicArrayList = GamePersistanceSingleton.getInstance()!.getIds()!;;
    
this.deleteAll();
    

                        if(list.size() > 0)
                        
                                    {
                                    this.add(list, "Select A Saved Game", ChoiceI.EXCLUSIVE);
    
this.areChoices= true;
    

                                    }
                                
                        else {
                            this.append(new StringItem("No Saved Games", StringUtil.getInstance()!.EMPTY_STRING, Item.PLAIN));
    
this.areChoices= false;
    

                        }
                            
super.update();
    
}


    add(BasicArrayList list, string name, int32_t option){

    choiceGroup: ChoiceGroup = this.getChoiceGroup(list, name, option)!;;
    

                        if(list.size() > 0)
                        
                                    {
                                    choiceGroup!.setSelectedIndex(0, true);
    

                                    }
                                
this.append(choiceGroup);
    
}


    ChoiceGroup getChoiceGroup(BasicArrayList list, string name, int32_t option){

    METHOD_NAME: string = "getChoiceGroup";;
    

    ADDING_CHOICE: string = "Adding Choice: ";;
    

    choiceGroup: ChoiceGroup = new ChoiceGroup(name, option, StringUtil.getInstance()!.getArrayInstance(), NullImage.NULL_IMAGE_ARRAY);;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    anyType: any = list.objectArray[index]!;;
    
this.logUtil!.putF(new StringMaker().append(ADDING_CHOICE)!.append(anyType!.toString())!.toString(), this, METHOD_NAME);
    
choiceGroup!.append(anyType!.toString(), NullImage.NULL_IMAGE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return choiceGroup;
    
}


    public int32_t getSelectedId(){

                        if(this.areChoices)
                        
                                    {
                                    
    choiceGroup: ChoiceGroup = this.get(0) as ChoiceGroup;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return choiceGroup!.getSelectedIndex();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                        }
                            
}


    public int32_t getSelectedText(){

                        if(this.areChoices)
                        
                                    {
                                    
    choiceGroup: ChoiceGroup = this.get(0) as ChoiceGroup;;
    

    value: int32_t = Integer.valueOf(choiceGroup!.getString(choiceGroup!.getSelectedIndex()))!.intValue()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                        }
                            
}


};

            

