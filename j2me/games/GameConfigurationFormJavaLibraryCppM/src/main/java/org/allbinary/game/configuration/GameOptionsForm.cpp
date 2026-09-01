
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
        



            #include <vector>
        
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

public: GameOptionsForm(CommandListener commandListener, std::string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){
            super(commandListener, title, backgrounBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->addConfiguration();
    

    GameFeatureFormUtil gameFeatureFormUtil = GameFeatureFormUtil::getInstance();;
    
gameFeatureFormUtil.addChoiceGroup(this, GameFeatureChoiceGroups::getExclusiveInstance().get(), Choice::EXCLUSIVE);
    
gameFeatureFormUtil.addChoiceGroup(this, GameFeatureChoiceGroups::getMultipleInstance().get(), Choice::MULTIPLE);
    
this->initCommands(commandListener);
    
this->setItemStateListener(GameFeatureItemStateListener(this));
    
this->addTextFieldsIfSimulated();
    
}


                //@Throws(Exception.constructor)
            
    public: void closeClientInformation(AbeClientInformationInterface abeClientInformation){
super.close();
    
this->save(abeClientInformation);
    
}


    private: void addTextFieldsIfSimulated(){

    std::string key = OrientationData::getInstance().ORIENTATION_SENSOR_INPUT;;
    

    Hashtable<any, any> hashtable = GameFeatureChoiceGroups::getExclusiveInstance().get();;
    

                        if(hashtable != 
                                    nullptr
                                )
                        
                                    {
                                    
    Object* listCanBeNull = hashtable.get(key);;
    

                        if(listCanBeNull != 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList list = listCanBeNull as BasicArrayList;;
    

                        if(list.contains(SensorFeatureFactory::getInstance().SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    this->addTextFields();
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    private: void addTextFields(){

    Hashtable<any, any> hashtable = GameConfigurationTextInput::getHashtable();;
    

    int32_t size = hashtable.length;;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance().getKeysAsArray(hashtable);;
    

    GameConfigurationTextInput gameConfigurationTextInput;;
    

    TextField textField;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameConfigurationTextInput= hashtable.get(objectArray[index]!) as GameConfigurationTextInput;
    
textField= TextField(gameConfigurationTextInput.getLabel(), gameConfigurationTextInput.getText(), 30, TextField::ANY);
    
this->append(textField);
    
}

}


    private: void addConfiguration(){

    std::string METHOD_NAME = "addConfiguration";;
    

    std::string NAME = "Name: ";;
    

    BasicArrayList list = GameConfigurationSingleton::getInstance().getOptionsBasicArrayList();;
    

    Command GAUGE_CHANGE = MyCommandsFactory::getInstance().GAUGE_CHANGE;;
    

    StringMaker stringMaker = StringMaker();;
    

    int32_t size = list.size();;
    

    GameConfiguration gameConfiguration;;
    

    GameConfigurationGauge gauge;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameConfiguration= list.objectArray[index]! as GameConfiguration;
    
stringMaker.delete(0, stringMaker.length());
    
this->logUtil.putF(stringMaker.append(NAME).append(gameConfiguration.toString()).toString(), this, METHOD_NAME);
    
gauge= GameConfigurationGauge(gameConfiguration);
    
gauge.setDefaultCommand(GAUGE_CHANGE);
    
gauge.setItemCommandListener(GameFeatureItemCommandListener(this));
    
this->append(gauge);
    
}

}


    public: void initCommands(CommandListener cmdListener){

    GameCommandsFactory gameCommandsFactory = GameCommandsFactory::getInstance();;
    
this->removeAllCommands();
    
this->addCommand(gameCommandsFactory.CLOSE_OPTIONS);
    
this->addCommand(gameCommandsFactory.DEFAULT_OPTIONS);
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface abeClientInformation){

    int32_t size = this->size();;
    

    Item item;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
item= this->get(index);
    

                        if(item instanceof GameConfigurationGauge)
                        
                                    {
                                    GameConfigurationUtil::getInstance().update(item as GameConfigurationGauge);
    

                                    }
                                
                             else 
                        if(item instanceof TextField)
                        
                                    {
                                    GameConfigurationTextInput::update(item as TextField);
    

                                    }
                                
}

GameConfigurationUtil::getInstance().updateCompetitionValue();
    

    Hashtable<any, any> hashtable = Hashtable<any, any>();;
    

    GameConfiguration SCALE = GameConfigurationCentral::getInstance().SCALE;;
    
hashtable.put(SCALE::getName(), SCALE::getValue().toString());
    

    KeyValuePersistance keyValuePersistance = GameConfigurationPersistanceSingleton::getInstance();;
    
keyValuePersistance.clear();
    
keyValuePersistance.loadAll(abeClientInformation);
    

    BasicArrayList list = keyValuePersistance.getIds();;
    
keyValuePersistance.save(abeClientInformation, hashtable);
    

    int32_t size2 = list.size();;
    

    Integer integer;;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
integer= list.objectArray[index]! as Integer;
    
keyValuePersistance.delete(abeClientInformation, integer.intValue());
    
}

}


};

            

