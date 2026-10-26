
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
        



            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameSkillType.h"
#include "GameSkillPropertyInterface.h"

class GameSkill
            : public Object
         {

    private: static HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();

    public: static GameSkill getInstance(GameSkillType gameSkillType, std::string extra){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameSkill::hashMap.get(StringMaker().append(gameSkillType.getName()).append(CommonSeps::getInstance().SPACE).append(extra).toString());
    
}


    private: GameSkillType gameSkillType;

    private: std::string extra;

    private: int32_t time= 0;

    private: BasicArrayList vector;

    private: const std::string GAME_SKILL_LABEL = "GameSkill: ";

    private: const std::string EXTRA_LABEL = "Extra: ";

    private: const std::string TIME_LABEL = "Time: ";

public: GameSkill(GameSkillType gameSkillType, std::string extra, int32_t time){
this->setGameSkillType(gameSkillType);
    
this->setExtra(extra);
    
this->setTime(time);
    
this->vector= BasicArrayListD();
    
GameSkill::hashMap.put(StringMaker().append(this->getGameSkillType().getName()).append(CommonSeps::getInstance().SPACE).append(extra).toString(), this);
    
}


    public: GameSkillType getGameSkillType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameSkillType;
    
}


    public: void setGameSkillType(GameSkillType gameSkillType){
this->gameSkillType= gameSkillType;
    
}


    public: std::string getExtra(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->extra;
    
}


    public: void setExtra(std::string extra){
this->extra= extra;
    
}


    public: int32_t getTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->time;
    
}


    public: void setTime(int32_t time){
this->time= time;
    
}


    public: void addProperty(GameSkillPropertyInterface gameSkillPropertyInterface){
this->vector.add(gameSkillPropertyInterface);
    
}


    public: BasicArrayList getProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vector;
    
}


    public: std::string toString(){

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->GAME_SKILL_LABEL);
    
stringBuffer.append(this->getGameSkillType().toString());
    
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(this->EXTRA_LABEL);
    
stringBuffer.append(this->getExtra());
    
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(this->TIME_LABEL);
    
stringBuffer.appendlong(this->getTime());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

