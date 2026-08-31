
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

            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameSkillType
            : public Object
         {
        

    public static MANA: GameSkillType = new GameSkillType("Mana");

    public static REPLENISH: GameSkillType = new GameSkillType("Replenish");

    public static TIMED: GameSkillType = new GameSkillType("Timed");

    public static ATTACK: GameSkillType = new GameSkillType("Attack");

    public static TRANSPORT: GameSkillType = new GameSkillType("Transport");

    private: const SPELL_GAME_SKILL_TYPE: string = "SpellGameSkillType: ";

    private: name: string;

private constructor (string name);

    public string getName();

    setName(string name);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILLTYPE_H
