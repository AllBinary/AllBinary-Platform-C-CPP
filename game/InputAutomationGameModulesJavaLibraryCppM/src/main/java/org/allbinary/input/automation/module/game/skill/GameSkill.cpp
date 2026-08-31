
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

    public static GameSkill getInstance(GameSkillType gameSkillType, string extra){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameSkill.hashMap!.get(new StringMaker().append(gameSkillType!.getName())!.append(CommonSeps.getInstance()!.SPACE)!.append(extra)!.toString()) as GameSkill;
    
}


    private: gameSkillType: GameSkillType;

    private: extra: string;

    private: time: int32_t= 0;

    private: vector: Vector;

    private: const GAME_SKILL_LABEL: string = "GameSkill: ";

    private: const EXTRA_LABEL: string = "Extra: ";

    private: const TIME_LABEL: string = "Time: ";

public constructor (GameSkillType gameSkillType, string extra, int32_t time){

            super();
        this.setGameSkillType(gameSkillType);
    
this.setExtra(extra);
    
this.setTime(time);
    
this.vector= new Vector();
    
GameSkill.hashMap!.put(new StringMaker().append(this.getGameSkillType()!.getName())!.append(CommonSeps.getInstance()!.SPACE)!.append(extra)!.toString(), this);
    
}


    public GameSkillType getGameSkillType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameSkillType;
    
}


    public setGameSkillType(GameSkillType gameSkillType){
this.gameSkillType= gameSkillType;
    
}


    public string getExtra(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.extra;
    
}


    public setExtra(string extra){
this.extra= extra;
    
}


    public int32_t getTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.time;
    
}


    public setTime(int32_t time){
this.time= time;
    
}


    public addProperty(GameSkillPropertyInterface gameSkillPropertyInterface){
this.vector.add(gameSkillPropertyInterface);
    
}


    public Vector getProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.vector;
    
}


    public string toString(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.GAME_SKILL_LABEL);
    
stringBuffer!.append(this.getGameSkillType()!.toString());
    
stringBuffer!.append(commonSeps!.SPACE);
    
stringBuffer!.append(this.EXTRA_LABEL);
    
stringBuffer!.append(this.getExtra());
    
stringBuffer!.append(commonSeps!.SPACE);
    
stringBuffer!.append(this.TIME_LABEL);
    
stringBuffer!.appendlong(this.getTime());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

