
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameKeyEvent: public AllBinaryEventObject {
        

    public static GameKeyEvent createEvent(any = {} anyType, int32_t sourceId, int32_t key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GameKeyEvent(anyType, sourceId, 0, 0, key, false);
    
}


    public static const NONE: GameKeyEvent = new GameKeyEvent(NullUtil.getInstance()!.NULL_OBJECT,  -1,  -1,  -1,  -1, false);

    private: const sourceId: int32_t;

    private: repeated: bool= false;

    private: key: int32_t;

    private: gameActionKey: int32_t= 0;

    private: originalKey: int32_t= 0;

public constructor (any = {} anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.sourceId= sourceId;
    
this.setOriginalKey(originalKey);
    
this.key= key;
    
this.setGameActionKey(gameActionKey);
    
this.setRepeatEvents(repeated);
    
}


    public init(any = {} anyType){
this.setSource(anyType);
    
}


    setRepeatEvents(bool repeated){
this.repeated= repeated;
    
}


    public bool hasRepeatEvents(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.repeated;
    
}


    public int32_t getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.key;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("\nKey: ");
    
stringBuffer!.appendint(this.getKey());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public int32_t getOriginalKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.originalKey;
    
}


    public setOriginalKey(int32_t originalKey){
this.originalKey= originalKey;
    
}


    public int32_t getGameActionKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameActionKey;
    
}


    public setGameActionKey(int32_t gameActionKey){
this.gameActionKey= gameActionKey;
    
}


    public int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sourceId;
    
}


};

            

