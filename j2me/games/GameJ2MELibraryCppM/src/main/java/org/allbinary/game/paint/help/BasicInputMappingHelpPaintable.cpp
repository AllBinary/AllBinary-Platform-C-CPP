
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
        



#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/mapping/GameInputMapping.h>

      
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HelpPaintable.h"

class BasicInputMappingHelpPaintable: public HelpPaintable {
        

    private: gameInputMappingArray: std::vector<GameInputMapping>;

    private: const NONE: GameKey = GameKeyFactory.getInstance()!.NONE;

protected constructor (std::vector<GameInputMapping> gameInputMappingArray, BasicColor basicColor){
            super("Help Screen", BasicColorFactory.getInstance()!.BLACK, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.gameInputMappingArray= gameInputMappingArray;
    
this.update(this.NONE, this.NONE);
    
}


    public update(GameKey selectedGameKey, Input selectedInput){

    gameKeyMapping: PersistentInputMapping = PlatformInputMappingFactory.getInstance()!.getPersistentInputMappingInstance()!;;
    

    EQUAL: string = " = ";;
    

    stringMaker: StringMaker = new StringMaker();;
    

    size: int32_t = this.gameInputMappingArray!.length
                ;;
    

    keyInfo: std::vector<string> = new Array(size);;
    

    gameInputMapping: GameInputMapping;;
    

    gameKey: GameKey;;
    

    list: BasicArrayList;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
gameInputMapping= this.gameInputMappingArray[index]!;
    
gameKey= gameInputMapping!.getGameKey();
    
list= gameKeyMapping!.getInputMapping()!.getMappedInput(gameKey);
    
stringMaker!.delete(0, stringMaker!.length());
    
keyInfo[index]= stringMaker!.append(gameInputMapping!.getName())!.append(EQUAL)!.append(this.get(list))!.toString();
    
}

super.setInputInfoP(keyInfo);
    
}


    string get(BasicArrayList keyList){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    AND: string = "and ";;
    

    key: Input;;
    

    size: int32_t = keyList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
key= keyList!.objectArray[index]! as Input;
    
stringBuffer!.append(key.getName());
    

                        if(index +1 < keyList!.size())
                        
                                    {
                                    
                        if(keyList!.size() == 2)
                        
                                    {
                                    stringBuffer!.append(commonSeps!.SPACE)!.append(AND);
    

                                    }
                                
                        else {
                            
                        if(index +2 == keyList!.size())
                        
                                    {
                                    stringBuffer!.append(commonSeps!.COMMA_SEP);
    
stringBuffer!.append(AND);
    

                                    }
                                
                        else {
                            stringBuffer!.append(commonSeps!.COMMA_SEP);
    

                        }
                            

                        }
                            

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

