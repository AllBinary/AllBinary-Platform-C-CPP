
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameSkillType
            : public virtual Object
         {

    private: static GameSkillType* MANA_owner();
    public: static GameSkillType* MANA;

    private: static GameSkillType* REPLENISH_owner();
    public: static GameSkillType* REPLENISH;

    private: static GameSkillType* TIMED_owner();
    public: static GameSkillType* TIMED;

    private: static GameSkillType* ATTACK_owner();
    public: static GameSkillType* ATTACK;

    private: static GameSkillType* TRANSPORT_owner();
    public: static GameSkillType* TRANSPORT;

    private: const std::string SPELL_GAME_SKILL_TYPE = "SpellGameSkillType: ";

    private: std::string name;

private: GameSkillType(std::string name);

    public: std::string getName();

    /*protected*/ public: void setName(std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_H_COMPLETE
        
        #endif
    
