
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/game/skill/GameSkillType.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GameSkillType::MANA_owner() -> GameSkillType* { static std::unique_ptr<GameSkillType> value(new GameSkillType("Mana")); return value.get(); }
GameSkillType* GameSkillType::MANA = GameSkillType::MANA_owner();
auto GameSkillType::REPLENISH_owner() -> GameSkillType* { static std::unique_ptr<GameSkillType> value(new GameSkillType("Replenish")); return value.get(); }
GameSkillType* GameSkillType::REPLENISH = GameSkillType::REPLENISH_owner();
auto GameSkillType::TIMED_owner() -> GameSkillType* { static std::unique_ptr<GameSkillType> value(new GameSkillType("Timed")); return value.get(); }
GameSkillType* GameSkillType::TIMED = GameSkillType::TIMED_owner();
auto GameSkillType::ATTACK_owner() -> GameSkillType* { static std::unique_ptr<GameSkillType> value(new GameSkillType("Attack")); return value.get(); }
GameSkillType* GameSkillType::ATTACK = GameSkillType::ATTACK_owner();
auto GameSkillType::TRANSPORT_owner() -> GameSkillType* { static std::unique_ptr<GameSkillType> value(new GameSkillType("Transport")); return value.get(); }
GameSkillType* GameSkillType::TRANSPORT = GameSkillType::TRANSPORT_owner();

GameSkillType::GameSkillType(std::string name){
this->setName(name);
    
}


    auto GameSkillType::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto GameSkillType::setName(std::string name) -> void{
this->name= name;
    
}


    auto GameSkillType::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->SPELL_GAME_SKILL_TYPE +this->getName();
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_CPP
