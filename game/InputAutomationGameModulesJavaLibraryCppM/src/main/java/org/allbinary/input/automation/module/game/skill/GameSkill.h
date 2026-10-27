
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class StdUtil;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameSkillType;
class GameSkillPropertyInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameSkill
            : public virtual Object
         {

    private: static HashMap<Object*, Object*>* hashMap;

    public: static GameSkill* getInstance(GameSkillType* gameSkillType, std::string extra);

    private: GameSkillType* gameSkillType;

    private: std::string extra;

    private: int32_t time= 0;

    private: BasicArrayList* vector;

    private: const std::string GAME_SKILL_LABEL = "GameSkill: ";

    private: const std::string EXTRA_LABEL = "Extra: ";

    private: const std::string TIME_LABEL = "Time: ";

public: GameSkill(GameSkillType* gameSkillType, std::string extra, int32_t time);

    public: GameSkillType* getGameSkillType();

    public: void setGameSkillType(GameSkillType* gameSkillType);

    public: std::string getExtra();

    public: void setExtra(std::string extra);

    public: int32_t getTime();

    public: void setTime(int32_t time);

    public: void addProperty(GameSkillPropertyInterface* gameSkillPropertyInterface);

    public: BasicArrayList* getProperties();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_SKILL_GAMESKILL_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/input/automation/module/game/skill/GameSkillType.h")
#include "org/allbinary/input/automation/module/game/skill/GameSkillType.h"
#endif
#if __has_include("org/allbinary/input/automation/module/game/skill/GameSkillPropertyInterface.h")
#include "org/allbinary/input/automation/module/game/skill/GameSkillPropertyInterface.h"
#endif

        #endif
    
