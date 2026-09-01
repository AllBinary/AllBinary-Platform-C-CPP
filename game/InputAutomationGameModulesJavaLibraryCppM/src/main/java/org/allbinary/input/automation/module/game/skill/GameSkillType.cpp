
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
        



            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameSkillType
            : public Object
         {

    public: static GameSkillType MANA = GameSkillType("Mana");

    public: static GameSkillType REPLENISH = GameSkillType("Replenish");

    public: static GameSkillType TIMED = GameSkillType("Timed");

    public: static GameSkillType ATTACK = GameSkillType("Attack");

    public: static GameSkillType TRANSPORT = GameSkillType("Transport");

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

            

