
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/game/skill/GameSkill.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/skill/GameSkillType.h"
#include "org/allbinary/input/automation/module/game/skill/GameSkillPropertyInterface.h"

HashMap<Object*, Object*>* GameSkill::hashMap = StdUtil::getInstance()->createHashMap();

GameSkill::GameSkill(GameSkillType* gameSkillType, std::string extra, int32_t time){
this->setGameSkillType(gameSkillType);
    
this->setExtra(extra);
    
this->setTime(time);
    
this->vector= new BasicArrayListD();
    
GameSkill::hashMap->put((new StringMaker())->append(this->getGameSkillType()->getName())->append(CommonSeps::getInstance()->SPACE)->append(extra)->toString(), this);
    
}


    auto GameSkill::getGameSkillType() -> GameSkillType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameSkillType;
    
}


    auto GameSkill::setGameSkillType(GameSkillType* gameSkillType) -> void{
this->gameSkillType= gameSkillType;
    
}


    auto GameSkill::getExtra() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->extra;
    
}


    auto GameSkill::setExtra(std::string extra) -> void{
this->extra= extra;
    
}


    auto GameSkill::getTime() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->time;
    
}


    auto GameSkill::setTime(int32_t time) -> void{
this->time= time;
    
}


    auto GameSkill::addProperty(GameSkillPropertyInterface* gameSkillPropertyInterface) -> void{
this->vector->add(gameSkillPropertyInterface);
    
}


    auto GameSkill::getProperties() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->vector;
    
}


    auto GameSkill::getInstance(GameSkillType* gameSkillType, std::string extra) -> GameSkill*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GameSkill*>(GameSkill::hashMap->get((new StringMaker())->append(gameSkillType->getName())->append(CommonSeps::getInstance()->SPACE)->append(extra)->toString()));
    
}


    auto GameSkill::toString() -> std::string{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->GAME_SKILL_LABEL);
    
stringBuffer->append(this->getGameSkillType()->toString());
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(this->EXTRA_LABEL);
    
stringBuffer->append(this->getExtra());
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(this->TIME_LABEL);
    
stringBuffer->appendlong(this->getTime());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_CPP
