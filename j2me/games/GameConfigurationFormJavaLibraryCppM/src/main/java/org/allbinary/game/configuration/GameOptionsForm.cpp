
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

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Choice.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureItemCommandListener.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureItemStateListener.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>

      
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/input/gyro/OrientationData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfigurationTextInput.h"
#include "GameConfigurationSingleton.h"
#include "GameConfiguration.h"
#include "GameConfigurationGauge.h"
#include "GameConfigurationUtil.h"
#include "GameConfigurationCentral.h"

class GameOptionsForm: public CommandForm {
        

public constructor (CommandListener commandListener, string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){
            super(commandListener, title, backgrounBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.addConfiguration();
    

    gameFeatureFormUtil: GameFeatureFormUtil = GameFeatureFormUtil.getInstance()!;;
    
gameFeatureFormUtil!.addChoiceGroup(this, GameFeatureChoiceGroups.getExclusiveInstance()!.get(), ChoiceI.EXCLUSIVE);
    
gameFeatureFormUtil!.addChoiceGroup(this, GameFeatureChoiceGroups.getMultipleInstance()!.get(), ChoiceI.MULTIPLE);
    
this.initCommands(commandListener);
    
this.setItemStateListener(new GameFeatureItemStateListener(this));
    
this.addTextFieldsIfSimulated();
    
}


                //@Throws(Exception.constructor)
            
    public closeClientInformation(AbeClientInformationInterface abeClientInformation){
super.close();
    
this.save(abeClientInformation);
    
}


    addTextFieldsIfSimulated(){

    key: string = OrientationData.getInstance()!.ORIENTATION_SENSOR_INPUT;;
    

    hashtable: Hashtable<any, any> = GameFeatureChoiceGroups.getExclusiveInstance()!.get()!;;
    

                        if(hashtable != 
                                    null
                                )
                        
                                    {
                                    
    listCanBeNull: any = hashtable.get(key);;
    

                        if(listCanBeNull != 
                                    null
                                )
                        
                                    {
                                    
    list: BasicArrayList = listCanBeNull as BasicArrayList;;
    

                        if(list.contains(SensorFeatureFactory.getInstance()!.SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    this.addTextFields();
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    addTextFields(){

    hashtable: Hashtable<any, any> = GameConfigurationTextInput.getHashtable()!;;
    

    size: int32_t = hashtable.length!;;
    

    objectArray: std::vector<any> = HashtableUtil.getInstance()!.getKeysAsArray(hashtable)!;;
    

    gameConfigurationTextInput: GameConfigurationTextInput;;
    

    textField: TextField;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
gameConfigurationTextInput= hashtable.get(objectArray[index]!) as GameConfigurationTextInput;
    
textField= new TextField(gameConfigurationTextInput!.getLabel(), gameConfigurationTextInput!.getText(), 30, TextField.ANY);
    
this.append(textField);
    
}

}


    addConfiguration(){

    METHOD_NAME: string = "addConfiguration";;
    

    NAME: string = "Name: ";;
    

    list: BasicArrayList = GameConfigurationSingleton.getInstance()!.getOptionsBasicArrayList()!;;
    

    GAUGE_CHANGE: Command = MyCommandsFactory.getInstance()!.GAUGE_CHANGE;;
    

    stringMaker: StringMaker = new StringMaker();;
    

    size: int32_t = list.size()!;;
    

    gameConfiguration: GameConfiguration;;
    

    gauge: GameConfigurationGauge;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
gameConfiguration= list.objectArray[index]! as GameConfiguration;
    
stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append(NAME)!.append(gameConfiguration!.toString())!.toString(), this, METHOD_NAME);
    
gauge= new GameConfigurationGauge(gameConfiguration);
    
gauge.setDefaultCommand(GAUGE_CHANGE);
    
gauge.setItemCommandListener(new GameFeatureItemCommandListener(this));
    
this.append(gauge);
    
}

}


    public initCommands(CommandListener cmdListener){

    gameCommandsFactory: GameCommandsFactory = GameCommandsFactory.getInstance()!;;
    
this.removeAllCommands();
    
this.addCommand(gameCommandsFactory!.CLOSE_OPTIONS);
    
this.addCommand(gameCommandsFactory!.DEFAULT_OPTIONS);
    
this.setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    public save(AbeClientInformationInterface abeClientInformation){

    size: int32_t = this.size()!;;
    

    item: Item;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
item= this.get(index);
    

                        if(item instanceof GameConfigurationGauge)
                        
                                    {
                                    GameConfigurationUtil.getInstance()!.update(item as GameConfigurationGauge);
    

                                    }
                                
                             else 
                        if(item instanceof TextField)
                        
                                    {
                                    GameConfigurationTextInput.update(item as TextField);
    

                                    }
                                
}

GameConfigurationUtil.getInstance()!.updateCompetitionValue();
    

    hashtable: Hashtable<any, any> = new Hashtable<any, any>();;
    

    SCALE: GameConfiguration = GameConfigurationCentral.getInstance()!.SCALE;;
    
hashtable.put(SCALE.getName(), SCALE.getValue()!.toString());
    

    keyValuePersistance: KeyValuePersistance = GameConfigurationPersistanceSingleton.getInstance()!;;
    
keyValuePersistance!.clear();
    
keyValuePersistance!.loadAll(abeClientInformation);
    

    list: BasicArrayList = keyValuePersistance!.getIds()!;;
    
keyValuePersistance!.save(abeClientInformation, hashtable);
    

    size2: int32_t = list.size()!;;
    

    integer: Integer;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
integer= list.objectArray[index]! as Integer;
    
keyValuePersistance!.delete(abeClientInformation, integer.intValue());
    
}

}


};

            

