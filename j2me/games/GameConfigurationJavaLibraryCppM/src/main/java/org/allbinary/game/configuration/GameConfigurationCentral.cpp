
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameConfigurationCentral.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>

      
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/GameConfiguration.h"

Object* GameConfigurationCentral::SINGLETON = NullUtil::getInstance()->NULL_OBJECT;

    auto GameConfigurationCentral::getInstance() -> GameConfigurationCentral*{

                        if(GameConfigurationCentral::SINGLETON == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameConfigurationCentral::SINGLETON= new GameConfigurationCentral();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameConfigurationCentral*>(GameConfigurationCentral::SINGLETON);
    
}


GameConfigurationCentral::GameConfigurationCentral() : logUtil(LogUtil::getInstance()){

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    
this->SCALE= new GameConfiguration("Scale", smallIntegerSingletonFactory->getAt(2), smallIntegerSingletonFactory->getAt(2), smallIntegerSingletonFactory->getAt(3));
    
this->ORIENTATION= new GameConfiguration("Orientation", smallIntegerSingletonFactory->getAt(0), smallIntegerSingletonFactory->getAt(0), smallIntegerSingletonFactory->getAt(8));
    
this->SENSOR_UPDATE_RATE= new GameConfiguration("Sensor Update Rate", smallIntegerSingletonFactory->getAt(0), smallIntegerSingletonFactory->getAt(0), smallIntegerSingletonFactory->getAt(3));
    
this->VIBRATION= new GameConfiguration("Vibration", smallIntegerSingletonFactory->getAt(0), smallIntegerSingletonFactory->getAt(0), smallIntegerSingletonFactory->getAt(3));
    
this->CHALLENGE_LEVEL= new GameConfiguration("Global Challenge Level", smallIntegerSingletonFactory->getAt(3), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(10));
    
this->COLLIDE_DAMAGE= new GameConfiguration("Collide Damage Challenge Level", smallIntegerSingletonFactory->getAt(3), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(10));
    
this->DURABILITY_CHALLENGE_LEVEL= new GameConfiguration("Enemy Durability Challenge Level", smallIntegerSingletonFactory->getAt(3), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(10));
    
this->SPEED_CHALLENGE_LEVEL= new GameConfiguration("Enemy Speed Challenge Level", smallIntegerSingletonFactory->getAt(3), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(10));
    
this->ATTACK_CHALLENGE_LEVEL= new GameConfiguration("Enemy Attack Challenge Level", smallIntegerSingletonFactory->getAt(3), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(10));
    
this->CONTROL_LEVEL= new GameConfiguration("Control Fidelity", smallIntegerSingletonFactory->getAt(5), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(10));
    
this->PLAYER_INPUT_WAIT= new GameConfiguration("Input Wait", smallIntegerSingletonFactory->getAt(5), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(10));
    
this->SPEED= new GameConfiguration("Game Speed (Device Specific)", smallIntegerSingletonFactory->getAt(5), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(10));
    
this->SOUND_VOLUME= new GameConfiguration("Sound Volume", smallIntegerSingletonFactory->getAt(6), smallIntegerSingletonFactory->getAt(0), smallIntegerSingletonFactory->getAt(10));
    
this->MAX_GAME_OBJECTS= new GameConfiguration("Max Game Objects", smallIntegerSingletonFactory->getAt(20), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(50));
    
this->MAX_LAYERS= new GameConfiguration("Max Layers", smallIntegerSingletonFactory->getAt(20), smallIntegerSingletonFactory->getAt(1), smallIntegerSingletonFactory->getAt(50));
    
}


    auto GameConfigurationCentral::load(AbeClientInformationInterface* abeClientInformation) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    KeyValuePersistance* keyValuePersistance = GameConfigurationPersistanceSingleton::getInstance();;
    
keyValuePersistance->clear();
    
keyValuePersistance->loadAll(abeClientInformation);
    

    BasicArrayList* list = keyValuePersistance->getIds();;
    

                        if(list->size() > 0)
                        
                                    {
                                    
    ABHashtable<Object*, Object*>* hashtable = keyValuePersistance->get(0);;
    

    Object* anyType = this->SCALE->getName();;
    

    std::string value = JavaBoxes::unbox<std::string>(hashtable->get(anyType));;
    
this->SCALE->setValue(smallIntegerSingletonFactory->getAt(Integer.valueOf(value)->intValue()));
    

                                    }
                                
                        else {
                            this->logUtil->putF("No Game Configuration To Load", this, commonStrings->LOAD);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->LOAD, &e);
    
}

}


    auto GameConfigurationCentral::setGameControlFidelity(int32_t gameControlFidelity) -> void{
this->gameControlFidelity= gameControlFidelity;
    
}


    auto GameConfigurationCentral::getGameControlFidelity() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameControlFidelity;
    
}


    auto GameConfigurationCentral::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonStrings = CommonSeps::getInstance();;
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->SCALE->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->SCALE->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->ORIENTATION->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->ORIENTATION->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->SENSOR_UPDATE_RATE->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->SENSOR_UPDATE_RATE->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->VIBRATION->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->VIBRATION->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->CHALLENGE_LEVEL->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->CHALLENGE_LEVEL->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->COLLIDE_DAMAGE->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->COLLIDE_DAMAGE->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->DURABILITY_CHALLENGE_LEVEL->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->DURABILITY_CHALLENGE_LEVEL->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->SPEED_CHALLENGE_LEVEL->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->SPEED_CHALLENGE_LEVEL->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->ATTACK_CHALLENGE_LEVEL->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->ATTACK_CHALLENGE_LEVEL->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->CONTROL_LEVEL->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->CONTROL_LEVEL->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->SPEED->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->SPEED->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->MAX_GAME_OBJECTS->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->MAX_GAME_OBJECTS->getValue()->intValue());
    
stringBuffer->append(commonStrings->COMMA_SEP);
    
stringBuffer->append(this->MAX_LAYERS->getName());
    
stringBuffer->append(commonStrings->EQUALS);
    
stringBuffer->appendint(this->MAX_LAYERS->getValue()->intValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_CPP
