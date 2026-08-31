
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>

      
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfiguration.h"

class GameConfigurationCentral
            : public Object
         {
        

    private: static SINGLETON: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameConfigurationCentral getInstance(){

                        if(GameConfigurationCentral.SINGLETON == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    GameConfigurationCentral.SINGLETON= new GameConfigurationCentral();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationCentral.SINGLETON as GameConfigurationCentral;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const SCALE: GameConfiguration;

    public const ORIENTATION: GameConfiguration;

    public const SENSOR_UPDATE_RATE: GameConfiguration;

    public const VIBRATION: GameConfiguration;

    public const CHALLENGE_LEVEL: GameConfiguration;

    public const COLLIDE_DAMAGE: GameConfiguration;

    public const DURABILITY_CHALLENGE_LEVEL: GameConfiguration;

    public const SPEED_CHALLENGE_LEVEL: GameConfiguration;

    public const ATTACK_CHALLENGE_LEVEL: GameConfiguration;

    public const CONTROL_LEVEL: GameConfiguration;

    public const PLAYER_INPUT_WAIT: GameConfiguration;

    public const SPEED: GameConfiguration;

    public const SOUND_VOLUME: GameConfiguration;

    public const MAX_GAME_OBJECTS: GameConfiguration;

    public const MAX_LAYERS: GameConfiguration;

    private: gameControlFidelity: int32_t = 36;

private constructor (){

            super();
        
    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    
this.SCALE= new GameConfiguration("Scale", smallIntegerSingletonFactory!.getAt(2), smallIntegerSingletonFactory!.getAt(2), smallIntegerSingletonFactory!.getAt(3));
    
this.ORIENTATION= new GameConfiguration("Orientation", smallIntegerSingletonFactory!.getAt(0), smallIntegerSingletonFactory!.getAt(0), smallIntegerSingletonFactory!.getAt(8));
    
this.SENSOR_UPDATE_RATE= new GameConfiguration("Sensor Update Rate", smallIntegerSingletonFactory!.getAt(0), smallIntegerSingletonFactory!.getAt(0), smallIntegerSingletonFactory!.getAt(3));
    
this.VIBRATION= new GameConfiguration("Vibration", smallIntegerSingletonFactory!.getAt(0), smallIntegerSingletonFactory!.getAt(0), smallIntegerSingletonFactory!.getAt(3));
    
this.CHALLENGE_LEVEL= new GameConfiguration("Global Challenge Level", smallIntegerSingletonFactory!.getAt(3), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(10));
    
this.COLLIDE_DAMAGE= new GameConfiguration("Collide Damage Challenge Level", smallIntegerSingletonFactory!.getAt(3), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(10));
    
this.DURABILITY_CHALLENGE_LEVEL= new GameConfiguration("Enemy Durability Challenge Level", smallIntegerSingletonFactory!.getAt(3), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(10));
    
this.SPEED_CHALLENGE_LEVEL= new GameConfiguration("Enemy Speed Challenge Level", smallIntegerSingletonFactory!.getAt(3), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(10));
    
this.ATTACK_CHALLENGE_LEVEL= new GameConfiguration("Enemy Attack Challenge Level", smallIntegerSingletonFactory!.getAt(3), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(10));
    
this.CONTROL_LEVEL= new GameConfiguration("Control Fidelity", smallIntegerSingletonFactory!.getAt(5), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(10));
    
this.PLAYER_INPUT_WAIT= new GameConfiguration("Input Wait", smallIntegerSingletonFactory!.getAt(5), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(10));
    
this.SPEED= new GameConfiguration("Game Speed (Device Specific)", smallIntegerSingletonFactory!.getAt(5), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(10));
    
this.SOUND_VOLUME= new GameConfiguration("Sound Volume", smallIntegerSingletonFactory!.getAt(6), smallIntegerSingletonFactory!.getAt(0), smallIntegerSingletonFactory!.getAt(10));
    
this.MAX_GAME_OBJECTS= new GameConfiguration("Max Game Objects", smallIntegerSingletonFactory!.getAt(20), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(50));
    
this.MAX_LAYERS= new GameConfiguration("Max Layers", smallIntegerSingletonFactory!.getAt(20), smallIntegerSingletonFactory!.getAt(1), smallIntegerSingletonFactory!.getAt(50));
    
}


    public load(AbeClientInformationInterface abeClientInformation){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

        try {
            
    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    keyValuePersistance: KeyValuePersistance = GameConfigurationPersistanceSingleton.getInstance()!;;
    
keyValuePersistance!.clear();
    
keyValuePersistance!.loadAll(abeClientInformation);
    

    list: BasicArrayList = keyValuePersistance!.getIds()!;;
    

                        if(list.size() > 0)
                        
                                    {
                                    
    hashtable: Hashtable<any, any> = keyValuePersistance!.get(0)!;;
    

    anyType: any = this.SCALE.getName();;
    

    value: string = hashtable.get(anyType) as string;;
    
this.SCALE.setValue(smallIntegerSingletonFactory!.getAt(Integer.valueOf(value)!.intValue()));
    

                                    }
                                
                        else {
                            this.logUtil!.putF("No Game Configuration To Load", this, commonStrings!.LOAD);
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.LOAD, e);
    
}

}


    public setGameControlFidelity(int32_t gameControlFidelity){
this.gameControlFidelity= gameControlFidelity;
    
}


    public int32_t getGameControlFidelity(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameControlFidelity;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    

    commonStrings: CommonSeps = CommonSeps.getInstance()!;;
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.SCALE.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.SCALE.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.ORIENTATION.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.ORIENTATION.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.SENSOR_UPDATE_RATE.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.SENSOR_UPDATE_RATE.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.VIBRATION.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.VIBRATION.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.CHALLENGE_LEVEL.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.CHALLENGE_LEVEL.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.COLLIDE_DAMAGE.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.COLLIDE_DAMAGE.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.DURABILITY_CHALLENGE_LEVEL.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.DURABILITY_CHALLENGE_LEVEL.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.SPEED_CHALLENGE_LEVEL.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.SPEED_CHALLENGE_LEVEL.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.ATTACK_CHALLENGE_LEVEL.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.ATTACK_CHALLENGE_LEVEL.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.CONTROL_LEVEL.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.CONTROL_LEVEL.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.SPEED.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.SPEED.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.MAX_GAME_OBJECTS.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.MAX_GAME_OBJECTS.getValue()!.intValue());
    
stringBuffer!.append(commonStrings!.COMMA_SEP);
    
stringBuffer!.append(this.MAX_LAYERS.getName());
    
stringBuffer!.append(commonStrings!.EQUALS);
    
stringBuffer!.appendint(this.MAX_LAYERS.getValue()!.intValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

