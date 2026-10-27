
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameSkillType
            : public Object
         {

    public: static GameSkillType* MANA() { static std::unique_ptr<GameSkillType> value(new GameSkillType("Mana")); return value.get(); }

    public: static GameSkillType* REPLENISH() { static std::unique_ptr<GameSkillType> value(new GameSkillType("Replenish")); return value.get(); }

    public: static GameSkillType* TIMED() { static std::unique_ptr<GameSkillType> value(new GameSkillType("Timed")); return value.get(); }

    public: static GameSkillType* ATTACK() { static std::unique_ptr<GameSkillType> value(new GameSkillType("Attack")); return value.get(); }

    public: static GameSkillType* TRANSPORT() { static std::unique_ptr<GameSkillType> value(new GameSkillType("Transport")); return value.get(); }

    private: const std::string SPELL_GAME_SKILL_TYPE = "SpellGameSkillType: ";

    private: std::string name;

private: GameSkillType(std::string name);

    public: std::string getName();

    protected: void setName(std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_H
