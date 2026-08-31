
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_H

            #include "../../../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameSkillType.h"
#include "GameSkillPropertyInterface.h"

class GameSkill
            : public Object
         {
        

    private: static hashMap: HashMap<any, any> = new HashMap<any, any>();

    public static GameSkill getInstance(GameSkillType gameSkillType, string extra);

    private: gameSkillType: GameSkillType;

    private: extra: string;

    private: time: int32_t= 0;

    private: vector: Vector;

    private: const GAME_SKILL_LABEL: string = "GameSkill: ";

    private: const EXTRA_LABEL: string = "Extra: ";

    private: const TIME_LABEL: string = "Time: ";

public constructor (GameSkillType gameSkillType, string extra, int32_t time);

    public GameSkillType getGameSkillType();

    public setGameSkillType(GameSkillType gameSkillType);

    public string getExtra();

    public setExtra(string extra);

    public int32_t getTime();

    public setTime(int32_t time);

    public addProperty(GameSkillPropertyInterface gameSkillPropertyInterface);

    public Vector getProperties();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_H
