
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

    private: static HashMap<any, any> hashMap = HashMap<any, any>();

    public: static GameSkill getInstance(GameSkillType gameSkillType, std::string extra);

    private: GameSkillType gameSkillType;

    private: std::string extra;

    private: int32_t time= 0;

    private: Vector vector;

    private: const std::string GAME_SKILL_LABEL = "GameSkill: ";

    private: const std::string EXTRA_LABEL = "Extra: ";

    private: const std::string TIME_LABEL = "Time: ";

public: GameSkill(GameSkillType gameSkillType, std::string extra, int32_t time);

    public: GameSkillType getGameSkillType();

    public: void setGameSkillType(GameSkillType gameSkillType);

    public: std::string getExtra();

    public: void setExtra(std::string extra);

    public: int32_t getTime();

    public: void setTime(int32_t time);

    public: void addProperty(GameSkillPropertyInterface gameSkillPropertyInterface);

    public: Vector getProperties();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_H
