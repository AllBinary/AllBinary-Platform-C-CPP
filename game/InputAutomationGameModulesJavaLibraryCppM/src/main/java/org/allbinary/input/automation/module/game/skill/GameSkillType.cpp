
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

private: GameSkillType(std::string name){
this->setName(name);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    protected: void setName(std::string name){
this->name= name;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->SPELL_GAME_SKILL_TYPE +this->getName();
    
}


};

            

