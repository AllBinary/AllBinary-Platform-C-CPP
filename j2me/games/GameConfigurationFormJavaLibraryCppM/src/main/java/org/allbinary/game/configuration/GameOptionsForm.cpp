
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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

      
#include <org/allbinary/logic/MEUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/GameConfigurationTextInput.h"
#include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"

class GameOptionsForm: public CommandForm {

    private: MEUtil* meUtil = MEUtil::getInstance();

public: GameOptionsForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) : CommandForm(commandListener, title, backgrounBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->addConfiguration();
    

    GameFeatureFormUtil* gameFeatureFormUtil = GameFeatureFormUtil::getInstance();;
    
gameFeatureFormUtil->addChoiceGroup(this, GameFeatureChoiceGroups::getExclusiveInstance()->get(), Choice::EXCLUSIVE);
    
gameFeatureFormUtil->addChoiceGroup(this, GameFeatureChoiceGroups::getMultipleInstance()->get(), Choice::MULTIPLE);
    
this->initCommands(commandListener);
    
this->setItemStateListener(new GameFeatureItemStateListener(this));
    
this->addTextFieldsIfSimulated();
    
}


                //@Throws(Exception.constructor)
            
    public: void closeClientInformation(AbeClientInformationInterface* abeClientInformation){
super.close();
    
this->save(abeClientInformation);
    
}


    private: void addTextFieldsIfSimulated(){

    std::string key = OrientationData::getInstance()->ORIENTATION_SENSOR_INPUT;;
    

    ABHashtable<Object*, Object*>* hashtable = GameFeatureChoiceGroups::getExclusiveInstance()->get();;
    

                        if(hashtable != 
                                    nullptr
                                )
                        
                                    {
                                    
    Object* listCanBeNull = hashtable->get(key);;
    

                        if(listCanBeNull != 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList* list = dynamic_cast<BasicArrayList*>(listCanBeNull);;
    

                        if(list->contains(SensorFeatureFactory::getInstance()->SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    this->addTextFields();
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    private: void addTextFields(){

    ABHashtable<Object*, Object*>* hashtable = GameConfigurationTextInput::getHashtable();;
    

    int32_t size = hashtable->size();;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(hashtable);;
    

    GameConfigurationTextInput* gameConfigurationTextInput;;
    

    TextField* textField;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameConfigurationTextInput= dynamic_cast<GameConfigurationTextInput*>(hashtable->get(objectArray[index]));
    
textField= new TextField(gameConfigurationTextInput->getLabel(), gameConfigurationTextInput->getText(), 30, TextField::ANY);
    
this->meUtil->appendItem(this, textField);
    
}

}


    private: void addConfiguration(){

    std::string METHOD_NAME = "addConfiguration";;
    

    std::string NAME = "Name: ";;
    

    BasicArrayList* list = GameConfigurationSingleton::getInstance()->getOptionsBasicArrayList();;
    

    Command* GAUGE_CHANGE = MyCommandsFactory::getInstance()->GAUGE_CHANGE;;
    

    StringMaker* stringMaker = new StringMaker();;
    

    int32_t size = list->size();;
    

    GameConfiguration* gameConfiguration;;
    

    GameConfigurationGauge* gauge;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameConfiguration= dynamic_cast<GameConfiguration*>(list->objectArray[index]);
    
stringMaker->delete(0, stringMaker->length());
    
this->logUtil.putF(stringMaker->append(NAME)->append(gameConfiguration->toString())->toString(), this, METHOD_NAME);
    
gauge= new GameConfigurationGauge(gameConfiguration);
    
gauge->setDefaultCommand(GAUGE_CHANGE);
    
gauge->setItemCommandListener(new GameFeatureItemCommandListener(this));
    
this->meUtil->appendItem(this, gauge);
    
}

}


    public: void initCommands(CommandListener* cmdListener){

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    
this->removeAllCommands();
    
this->addCommand(gameCommandsFactory->CLOSE_OPTIONS);
    
this->addCommand(gameCommandsFactory->DEFAULT_OPTIONS);
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface* abeClientInformation){

    int32_t size = this->size();;
    

    Item* item;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
item= this->get(index);
    

                        if(
                                        (dynamic_cast<const GameConfigurationGauge*>(item) != nullptr)
                                    )
                        
                                    {
                                    GameConfigurationUtil::getInstance()->update(dynamic_cast<GameConfigurationGauge*>(item));
    

                                    }
                                
                             else 
                        if(
                                        (dynamic_cast<const TextField*>(item) != nullptr)
                                    )
                        
                                    {
                                    GameConfigurationTextInput::update(dynamic_cast<TextField*>(item));
    

                                    }
                                
}

GameConfigurationUtil::getInstance()->updateCompetitionValue();
    

    ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();;
    

    GameConfiguration* SCALE = GameConfigurationCentral::getInstance()->SCALE;;
    
hashtable->put(SCALE->getName(), SCALE->getValue()->toString());
    

    KeyValuePersistance* keyValuePersistance = GameConfigurationPersistanceSingleton::getInstance();;
    
keyValuePersistance->clear();
    
keyValuePersistance->loadAll(abeClientInformation);
    

    BasicArrayList* list = keyValuePersistance->getIds();;
    
keyValuePersistance->save(abeClientInformation, hashtable);
    

    int32_t size2 = list->size();;
    

    int32_t integer;;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
integer= list->objectArray[index];
    
keyValuePersistance->delete(abeClientInformation, integer.intValue());
    
}

}


};

            

